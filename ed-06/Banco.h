#pragma once

#include "Conta.h"

class Banco {
public:
    Banco(int numeroContas) {
        if (numeroContas <= 0) {
            std::cout << "Quantidade de contas invalidas!" << std::endl;
            throw std::exception();
        }

        _numeroContas = numeroContas;

        _contas = new Conta*[numeroContas];
    }

    virtual ~Banco() {
        std::cout << "Deletando array de contas do BANCO" << std::endl;

        for (int i = 0; i < _numeroContas; i++) {
            delete _contas[i];
        }

        delete[] _contas;
    }

    void incluiConta(Conta *conta) {
        if (_contasAtivas < 5) {
            _contasAtivas++;
            _contas[_contasAtivas - 1] = conta;
        } else {
            std::cout << "Quantidade maxima de contas atingida!" << std::endl;
            throw std::exception();
        }
    }

    void imprimeContas() const {
        for (int i = 1; i <= _numeroContas; i++) {
            std::cout << "Numero: " << _contas[i]->getNumero() << std::endl;
            std::cout << "Agencia: " << _contas[i]->getAgencia() << std::endl;
            std::cout << "Cliente: " << _contas[i]->getCliente().getNome() << std::endl;
        }
    }

    Conta **getContas() const {
        return _contas;
    }

    int getNumeroContas() const {
        return _numeroContas;
    }

private:
    Conta** _contas;
    int _numeroContas;
    int _contasAtivas = 0;
};