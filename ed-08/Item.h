#pragma once

#include <string>

class Item {
public:
    Item(int id, float preco, std::string **igredientes, const std::string &descricao, int quantidade, bool unidade)
            : _id(id), _preco(preco), _igredientes(igredientes), _descricao(descricao), _quantidade(quantidade),
              _unidade(unidade) {}

    int getId() const {
        return _id;
    }

    void setId(int id) {
        _id = id;
    }

    float getPreco() const {
        return _preco;
    }

    void setPreco(float preco) {
        _preco = preco;
    }

    std::string **getIgredientes() const {
        return _igredientes;
    }

    void setIgredientes(std::string **igredientes) {
        _igredientes = igredientes;
    }

    const std::string &getDescricao() const {
        return _descricao;
    }

    void setDescricao(const std::string &descricao) {
        _descricao = descricao;
    }

    int getQuantidade() const {
        return _quantidade;
    }

    void setQuantidade(int quantidade) {
        _quantidade = quantidade;
    }

    bool isUnidade() const {
        return _unidade;
    }

    void setUnidade(bool unidade) {
        _unidade = unidade;
    }

private:
    int _id;
    float _preco;
    std::string** _igredientes;
    std::string _descricao;
    int _quantidade;
    bool _unidade; // 0 == ml, 1 == g
};