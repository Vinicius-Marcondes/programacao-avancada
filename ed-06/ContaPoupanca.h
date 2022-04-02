#pragma once

#include "Conta.h"
#include "Investimento.h"

class ContaPoupanca: public Conta, public Investimento{
public:
    ContaPoupanca(std::string numero, std::string agencia, const Cliente &cliente, const float saldo) : Conta(numero, agencia,cliente, saldo), Investimento() {
        setTaxaDeJuros(0.08);
    }

    virtual ~ContaPoupanca() {
        std::cout << "Deletando CONTA_POUPANCA" << std::endl;
    }

    virtual void aplicaJurosDiarios(const int dias) {
        _saldo = _saldo + (((_saldo) * getTaxaDeJuros()) * dias);
    }
};