#pragma once

#include <vector>
#include "Pedido.h"

class Conta {
public:

    Conta(int mesaId) : _pedidos() {
    }

    const std::vector<Pedido> &getPedidos() const {
        return _pedidos;
    }

    void adicionaPedido(const Pedido &pedido) {
        _pedidos.push_back(pedido);
    }

    float getTotal() const {
        float total = 0;

        for (const Pedido &pedido : _pedidos) {
            total += pedido.getItem() * pedido.getQuantidade();
        }

        return total;
    }

private:
    std::vector<Pedido> _pedidos;
};