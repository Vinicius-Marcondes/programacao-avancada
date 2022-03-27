#pragma once

#include "Conta.h"
#include "Investimento.h"

class ContaCorrente: public Conta, public Investimento  {
public:
    ContaCorrente(std::string &numero, std::string &agencia, const Cliente &cliente) : Conta(numero, agencia,cliente), Investimento() {
        _taxaDeJuros = 3;
    }

    void aplicarJurosDiarios(const int dias, const float taxa) {
        _saldo = _saldo + (((_saldo) * taxa) * 20);
    }
};