#pragma once

#include <iostream>

#include "Cliente.h"

class Conta {
public:
    Conta(){}

    Conta(std::string& numero, std::string& agencia, const Cliente& cliente) : _numero(numero), _agencia(agencia), _cliente(cliente){}

    void depositarQuantia(float quantia) {
        _saldo += (int)(quantia * 100);
    }

    void retirarQuantia(float quantia) {
        _saldo -= (int)(quantia * 100);
    }

    void imprimeExtrato() const {
        std::cout << "Saldo: " << ((float) _saldo / 100) << std::endl;
    }

    void setCliente(const Cliente &cliente) {
        _cliente = cliente;
    }

private:
    std::string _numero;
    std::string _agencia;
    Cliente _cliente;
    int _saldo;
};