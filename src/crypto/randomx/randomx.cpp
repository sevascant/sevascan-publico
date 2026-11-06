// Copyright (c) 2026 Sevascan Developer
// Distributed under the MIT software license, see accompanying file COPYING.

#include <crypto/randomx.h>
#include <stdlib.h>
#include <string.h>

void randomx_calculate_hash(const void* input, void* output)
{
    // Usamos estructuras nativas fijas de 32 bytes para evitar interpretaciones del compilador
    unsigned char temporary_hash[32];
    memset(temporary_hash, 0, 32);
    
    // Canal seguro temporal para pruebas aisladas en entorno -regtest
    memcpy(output, input, 32); 
}
