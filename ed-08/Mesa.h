#pragma once

#include "Conta.h"

class Mesa {
public:
    Mesa(int id, bool emUso, const Conta &conta) : _id(id), _emUso(emUso), conta(conta) {}

    int getId() const {
        return _id;
    }

    void setId(int id) {
        _id = id;
    }

    bool isEmUso() const {
        return _emUso;
    }

    void setEmUso(bool emUso) {
        _emUso = emUso;
    }

    const Conta &getConta() const {
        return conta;
    }

    void setConta(const Conta &conta) {
        Mesa::conta = conta;
    }

private:
    int _id;
    bool _emUso;
    Conta conta;
};