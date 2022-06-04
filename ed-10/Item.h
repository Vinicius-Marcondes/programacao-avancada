#pragma once

#include <ostream>
#include <vector>

class Item {
public:
    Item(int id, float preco, std::vector<std::string> &ingredientes, const std::string &descricao,
         bool unidade) : _id(id), _preco(preco), _ingredientes(ingredientes), _descricao(descricao),
                         _unidade(unidade) {}

    Item(int id, float preco, const std::string &descricao,
         bool unidade) : _id(id), _preco(preco), _descricao(descricao), _unidade(unidade), _ingredientes() {}

	Item(){};

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

    std::vector<std::string> getIgredientes() const {
        return _ingredientes;
    }

    void setIgredientes(std::vector<std::string> &igredientes) {
        _ingredientes = igredientes;
    }

    const std::string &getDescricao() const {
        return _descricao;
    }

    void setDescricao(const std::string &descricao) {
        _descricao = descricao;
    }

    bool isUnidade() const {
        return _unidade;
    }

    void setUnidade(bool unidade) {
        _unidade = unidade;
    }

    friend std::ostream &operator<<(std::ostream &os, const Item &item) {
        os << "Id: " << item._id << std::endl
           << "Preco: " << item._preco << std::endl
           << "Ingredientes: ";

        //for (const std::string &ingrediente : item._ingredientes) {
        //    os << ingrediente;
        //}

        os << std::endl;
        os << "Descricao: " << item._descricao << std::endl
           << "Unidade: " << (item._unidade ? "g" : "ml");

        return os;
    }

private:
    int _id;
    float _preco;
    std::vector<std::string> _ingredientes;
    std::string _descricao;
    bool _unidade; // 0 == ml, 1 == g
};
