#pragma once

#include "Conta.h"

class Banco {
public:
    Banco(int numeroContas) : _contas(new Conta*[numeroContas]), _numeroContas(numeroContas) {}

    ~Banco() {
        for (int i = 0; i < _numeroContas; i++) {
            delete _contas[i];
        }

        delete[] _contas;
    }

    void incluiConta(Conta *conta) {
        _numeroContasAtivas++;
        _contas[_numeroContasAtivas - 1] = conta;
    }

    void imprimeContas() const {
        for (int i = 1; i <= _numeroContasAtivas; i++) {
            std::cout << "Numero: " << _contas[i]->getNumero() << std::endl;
            std::cout << "Agencia: " << _contas[i]->getAgencia() << std::endl;
            std::cout << "Cliente: " << _contas[i]->getCliente().getNome() << std::endl;
        }
    }

    Conta **getContas() const {
        return _contas;
    }

    void setContas(Conta **contas) {
        Banco::_contas = contas;
    }

    int getNumeroContas() const {
        return _numeroContas;
    }

    void setNumeroContas(int numeroContas) {
        _numeroContas = numeroContas;
    }

    int getNumeroContasAtivas() const {
        return _numeroContasAtivas;
    }

    void setNumeroContasAtivas(int numeroContasAtivas) {
        _numeroContasAtivas = numeroContasAtivas;
    }

private:
    Conta** _contas;
    int _numeroContas;
    int _numeroContasAtivas = 0;
};