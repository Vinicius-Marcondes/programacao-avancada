#include <algorithm>
#include <fstream>

#include "ItemDAO.h"

#define ARQUIVO "/tmp/item_dados.csv"

void ItemDAO::inserir(const Item &item) const {
    std::ofstream fout(ARQUIVO, std::ios::app);
    fout << item << std::endl;
    fout.close();
}

std::vector<Item> ItemDAO::consultar() const {
    std::ifstream fin(ARQUIVO);
    Item buffer = Item();
    std::vector<Item> itens;

    // TODO: Arrumar loop infinito durante a leitura do arquivo.
    while (!fin.eof()) {
        fin >> buffer;
        if (fin.eof()) {
            break;
        }

        itens.push_back(buffer);
    }

    return itens;
}

Item ItemDAO::buscarPorId(int id) const {
    std::vector<Item> itens = consultar();

    std::remove_if(itens.begin(), itens.end(), [id](const Item &item) -> bool {
       return id != item.getId();
    });

    return itens.front();
}
