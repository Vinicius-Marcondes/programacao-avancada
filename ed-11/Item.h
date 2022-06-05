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

    friend std::ostream& operator<<(std::ostream &out, const Item &item) {
        out << item._id
            << ";" << item._preco
            << ";" << item._descricao
            << "; " << (item._unidade ? "g" : "ml");

        return out;
    }

    friend std::istream& operator>>(std::istream &in, Item &item) {
        char sep;
        in >> item._id >> sep >> item._preco >> sep >> item._descricao >> sep >> item._unidade;
        return in;
    }

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

private:
    int _id;
    float _preco;
    std::vector<std::string> _ingredientes;
    std::string _descricao;
    bool _unidade; // 0 == ml, 1 == g
};
