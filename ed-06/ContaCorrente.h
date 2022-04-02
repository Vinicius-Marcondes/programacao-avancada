#pragma once

#include "Conta.h"
#include "Investimento.h"

class ContaCorrente: public Conta, public Investimento  {
public:
    ContaCorrente(std::string numero, std::string agencia, const Cliente &cliente, const float saldo) : Conta(numero, agencia, cliente, saldo), Investimento() {
        setTaxaDeJuros(0.03);
    }

    virtual ~ContaCorrente() {
        std::cout << "Deletando CONTA_CORRENTE" << std::endl;
    }

    virtual void aplicaJurosDiarios(const int dias) {
        _saldo = _saldo + (((_saldo) * getTaxaDeJuros()) * dias);
    }
};