#pragma once

#include <iostream>

class Investimento {
public:
    Investimento() {}

    void setTaxaDeJuros(float taxaDeJuros) {
        if (taxaDeJuros >= 0 && taxaDeJuros <= 1) {
            _taxaDeJuros = (int)(taxaDeJuros * 100);
        } else {
            std::cout << "valor inválido!";
        }
    }

    float getTaxaDeJuros() const {
        return _taxaDeJuros / 100.0f;
    }

    void imprime() const {
        std::cout << "Taxa de juros: " << _taxaDeJuros * 100 << "%" << std::endl;
    }

protected:
    int _taxaDeJuros;
};