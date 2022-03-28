- A taxa de juros é 0.03% = 0.0003. Corrigir o cálculo.

- Pq não foi chamado o método setJuros() que tem todas as regras de validação?

```
    ContaCorrente(std::string &numero, std::string &agencia, const Cliente &cliente) : Conta(numero, agencia,cliente), Investimento() {
        _taxaDeJuros = 3;
    }
```

- O que é o valor 20?

```
   void aplicarJurosDiarios(const int dias, const float taxa) {
        _saldo = _saldo + (((_saldo) * taxa) * 20);
    }
```
