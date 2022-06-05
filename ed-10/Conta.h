#pragma once

#include <vector>
#include <algorithm>

#include "Pedido.h"

class Conta {
public:
    Conta() : _pedidos() {}
    virtual ~Conta() {}

    const std::vector<Pedido> &getPedidos() const {
        return _pedidos;
    }

    void adicionaPedido(const Pedido &pedido) {
        _pedidos.push_back(pedido);
    }

    float getTotal() const {
        float total = 0.0f;

        for (const Pedido &pedido : _pedidos) {
            total += pedido.getItem().getPreco() * ((float)pedido.getQuantidade());
        }

        return total;
    }

    static const int getToken() {
        return token;
    }

private:
    std::vector<Pedido> _pedidos;
    const static int token = 123;
};