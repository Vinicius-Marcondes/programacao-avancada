#pragma once

#include "Conta.h"
#include "Investimento.h"

class ContaSalario: public Conta {
public:
    ContaSalario(std::string numero, std::string agencia, const Cliente& cliente, const float saldo) : Conta(numero, agencia, cliente, saldo) {}

    virtual ~ContaSalario() {
        std::cout << "Deletando CONTA_SALARIO" << std::endl;
    }

    virtual void depositarQuantia(float quantia) {
        std::cout << "Esta conta nao tem opcao de deposito!" << std::endl;
    }

    virtual void aplicaJurosDiarios(const int dias) {
        std::cout << "Operacao nao permitida!" << std::endl;
    }
};