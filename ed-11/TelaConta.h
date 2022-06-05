#pragma once

#include <iostream>

#include "Conta.h"

class TelaConta {
public:
    void imprimirConta(const Conta &conta) const {
        std::cout << "Pedidos: " << std::endl;

        for (const Pedido &pedido : conta.getPedidos()) {
            std::cout << pedido.getItem() << std::endl;
        }

        std::cout << "Total: " << conta.getTotal() << std::endl;
    }

    bool imprimirFecharConta(const Conta &conta) const {
        int token;
        std::cout << "Total pago: R$" << conta.getTotal();
        std::cout << "Insira o token do garçom:" << conta.getTotal();
        std::cin >> token;

        return token == Conta::getToken();
    }

    void imprimirAgradecimento() const {
        std::cout << "Obrigado pela preferência, volte sempre!" << std::endl;
    }

    void _imprimirTokenInvalido() const {
        std::cout << "Atenção! Token invalido!" << std::endl;
    }
private:
};
