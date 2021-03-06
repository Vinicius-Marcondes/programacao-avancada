#pragma once

#include <string>
#include "Item.h"

class Pedido {
public:
    Pedido() {};

    Pedido(Item &item, int quantidade) : _item(item), _quantidade(quantidade) {}

    Item getItem() const {
        return _item;
    }

    void setItem(Item &item) {
        _item = item;
    }
    
   	int getQuantidade() const {
        return _quantidade;
    }

    void setQuantidade(int quantidade) {
        _quantidade = quantidade;
    }

private:
    Item _item;
    int _quantidade;
};
