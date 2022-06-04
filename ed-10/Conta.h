#pragma once

#include <vector>
#include "Pedido.h"

class Conta {
public:

    Conta(int mesaId) : _mesaId(mesaId), _pedidos() {
    }

    int getMesaId() const {
        return _mesaId;
    }

    void setMesaId(int mesaId) {
        _mesaId = mesaId;
    }

    const std::vector<Pedido> &getPedidos() const {
        return _pedidos;
    }

    void adicionaPedido(Pedido &pedido) {
        _pedidos.push_back(pedido);
    }

private:
    int _mesaId;
    std::vector<Pedido> _pedidos;
};