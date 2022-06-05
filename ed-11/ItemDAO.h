#pragma once

#include <vector>
#include "Item.h"

class ItemDAO {
public:
    void inserir(const Item &item) const;
    std::vector<Item> consultar() const;
    Item buscarPorId(int id) const;
};