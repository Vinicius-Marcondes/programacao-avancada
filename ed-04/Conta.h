 #pragma once

#include <iostream>

#include "Cliente.h"

class Conta {
public:
    Conta() {
        std::cout << "Criando conta vazia" << std::endl;
    }

    Conta(std::string& numero, std::string& agencia, const Cliente& cliente) : _numero(numero), _agencia(agencia), _cliente(cliente) {
        std::cout << "Criando conta:" << std::endl;
        std::cout << "Numero: " << numero << std::endl;
        std::cout << "Agencia: " << agencia << std::endl;
        std::cout << "Cliente: " << cliente.getNome()<< std::endl;
    }

    void depositarQuantia(float quantia) {
        _saldo += (int)(quantia * 100);
    }

    void retirarQuantia(float quantia) {
        _saldo -= (int)(quantia * 100);
    }

    void imprimeExtrato() const {
        std::cout << "Saldo: " << ((float) _saldo / 100) << std::endl;
    }

    const std::string &getNumero() const {
        return _numero;
    }

    void setNumero(const std::string &numero) {
        _numero = numero;
    }

    const std::string &getAgencia() const {
        return _agencia;
    }

    void setAgencia(const std::string &agencia) {
        _agencia = agencia;
    }

    const Cliente &getCliente() const {
        return _cliente;
    }

    void setCliente(const Cliente &cliente) {
        _cliente = cliente;
    }

    int getSaldo() const {
        return _saldo;
    }

    void setSaldo(int saldo) {
        _saldo = saldo;
    }

private:
    std::string _numero;
    std::string _agencia;
    Cliente _cliente;
    int _saldo;
};