#pragma once

#include "Pedido.h"

class Conta {
private:
public:
    Conta(int mesaId) : _mesaId(mesaId) {
    _pedidos = new Pedido*[99];
}

public:
    int _mesaId;
    Pedido** _pedidos;
};