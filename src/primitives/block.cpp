// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2018 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://opensource.org.

#include <primitives/block.h>

#include <hash.h>
#include <tinyformat.h>
#include <util/strencodings.h>
#include <crypto/common.h>
#include <crypto/scrypt.h>
#include <crypto/randomx.h>

uint256 CBlockHeader::GetHash() const
{
    return SerializeHash(*this);
}

uint256 CBlockHeader::GetPoWHash() const
{
    uint256 thash;

    // Escudo protector de 3 años para el pueblo (Hasta finales de 2029)
    if (this->nTime < 1892160000) {
        // Llama a la función inline global
        randomx_calculate_hash(BEGIN(nVersion), &thash);
    } else {
        // Transición automática al Scrypt de Litecoin para dar entrada a ASICs
        scrypt_1024_1_1_256(BEGIN(nVersion), BEGIN(thash));
    }

    return thash;
}

std::string CBlock::ToString() const
{
    std::stringstream s;
    s << strprintf("CBlock(hash=%s, ver=0x%08x, hashPrevBlock=%s, hashMerkleRoot=%s, nTime=%u, nBits=%08x, nNonce=%u, vtx=%u)\n",
        GetHash().ToString(),
        nVersion,
        hashPrevBlock.ToString(),
        hashMerkleRoot.ToString(),
        nTime, nBits, nNonce,
        vtx.size());
    for (const auto& tx : vtx) {
        s << "  " << tx->ToString() << "\n";
    }
    return s.str();
}

CTransactionRef CBlock::GetHogEx() const noexcept
{
    for (const auto& tx : vtx) {
        if (tx->IsHogEx()) return tx;
    }
    return nullptr;
}
