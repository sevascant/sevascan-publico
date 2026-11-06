const express = require('express');
const app = express();

app.use(express.json());
app.use(express.static('public_dex'));

// Añadidos eth y sol a los precios iniciales
let sevascanPrices = { usdt: 25.00, ltc: 0.43, btc: 0.00027, doge: 42.30, eth: 0.0092, sol: 0.13 };
const MARKET_INCREMENT = 0.01;

// Tasas de conversión estáticas a USDT para el recálculo algorítmico
const ltcToUsdtRate = 58.11;
const btcToUsdtRate = 91709.97;
const dogeToUsdtRate = 0.59;
const ethToUsdtRate = 2715.50; // Nueva tasa ETH
const solToUsdtRate = 188.40;  // Nueva tasa SOL

app.post('/api/dex/intercambio', async (req, res) => {
  const { direccionSevascan, cantidad, txidRespaldo, monedaPago, precio, usdtDestinoVendedor } = req.body;
  if (!direccionSevascan || !cantidad || !txidRespaldo || !monedaPago || !precio) {
    return res.status(400).json({ error: "Incomplete data" });
  }
  if (sevascanPrices[monedaPago] === undefined) {
    return res.status(400).json({ error: "Unsupported payment currency" });
  }
  try {
    if (monedaPago === 'usdt') {
      if (!usdtDestinoVendedor) {
        return res.status(400).json({ error: "Incomplete data: Seller destination address required for USDT swaps" });
      }
    }
    let executionPrice = parseFloat(precio);
    if (!isNaN(executionPrice) && executionPrice > 0) {
      sevascanPrices[monedaPago] = executionPrice + MARKET_INCREMENT;
      if (monedaPago === 'usdt') {
        sevascanPrices['ltc'] = sevascanPrices['usdt'] / ltcToUsdtRate;
        sevascanPrices['btc'] = sevascanPrices['usdt'] / btcToUsdtRate;
        sevascanPrices['doge'] = sevascanPrices['usdt'] / dogeToUsdtRate;
        sevascanPrices['eth'] = sevascanPrices['usdt'] / ethToUsdtRate;
        sevascanPrices['sol'] = sevascanPrices['usdt'] / solToUsdtRate;
      }
    } else {
      sevascanPrices[monedaPago] += MARKET_INCREMENT;
    }
    res.json({ status: "ok", new_prices: sevascanPrices });
  } catch (error) {
    res.status(500).json({ error: "External swap contract execution failed" });
  }
});

app.get('/api/dex/precio', (req, res) => {
  res.json({
    status: "success",
    base_currency: "SEV",
    market_rates: {
      usdt: parseFloat(sevascanPrices.usdt).toFixed(2),
      ltc: parseFloat(sevascanPrices.ltc).toFixed(5),
      btc: parseFloat(sevascanPrices.btc).toFixed(8),
      doge: parseFloat(sevascanPrices.doge).toFixed(2),
      eth: parseFloat(sevascanPrices.eth).toFixed(6),
      sol: parseFloat(sevascanPrices.sol).toFixed(4)
    }
  });
});

const PORT = 5000;
app.listen(PORT, '0.0.0.0', () => {
  console.log(`Advanced Sevascan DEX server actively listening on port ${PORT}`);
});
