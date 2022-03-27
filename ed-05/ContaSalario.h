#pragma once

#include "Conta.h"
#include "Investimento.h"

class ContaSalario: public Conta{
public:
    ContaSalario(std::string& numero, std::string& agencia, const Cliente& cliente) : Conta(numero, agencia, cliente) {}

    void depositarQuantia(float quantia) override {
        std::cout << "Esta conta nao tem opcao de deposito!";
    }
};