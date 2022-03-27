#pragma once

#include "Conta.h"
#include "Investimento.h"

class ContaPoupanca: public Conta, public Investimento{
public:
    ContaPoupanca(std::string &numero, std::string &agencia, const Cliente &cliente) : Conta(numero, agencia,cliente), Investimento() {
        _taxaDeJuros = 8;
    }

    void aplicarJurosDiarios(const int dias, const float taxa) {
        _saldo = _saldo + (((_saldo) * taxa) * 20);
    }
};