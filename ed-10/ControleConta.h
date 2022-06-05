#pragma once

#include "TelaConta.h"

class ControleConta {
public:
    ControleConta(const Conta &conta) : _conta(conta), _telaConta() {}

    virtual ~ControleConta() {}

    void exibeConta() const {
        _telaConta.imprimirConta(_conta);
    }

    bool adicionaPedidoNaConta(const Pedido &pedido) {
        _conta.adicionaPedido(pedido);
        return true;
    }

    bool fechaConta(const Conta &conta) const {
        bool contaFechada = _telaConta.imprimirFecharConta(conta);

        if (contaFechada) {
            _telaConta.imprimirAgradecimento();
            return true;
        } else {
            _telaConta._imprimirTokenInvalido();
            return fechaConta(conta);
        }
    }

private:
    TelaConta _telaConta;
    Conta _conta;
};