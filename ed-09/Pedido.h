#pragma once

#include <string>
#include "Item.h"

class Pedido {
public:
    Pedido() {
        _item = nullptr;
    }

    Pedido(Item *item, const std::string &status) : _item(item), _status(status) {}

    Item *getItem() const {
        return _item;
    }

    void setItem(Item *item) {
        _item = item;
    }

    const std::string &getStatus() const {
        return _status;
    }

    void setStatus(const std::string &status) {
        _status = status;
    }

private:
    Item* _item;
    std::string _status;
};