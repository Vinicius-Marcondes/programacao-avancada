#pragma once

#include <iostream>

#include "Conta.h"
#include "Mesa.h"
#include "Pedido.h"

class TelaMesaa {
public:
    void exibirMenuPrincipal() const {
        std::cout << "== Menu principal ==" << std::endl;
        std::cout << std::endl;
        std::cout << "1. Fazer pedido" << std::endl;
        std::cout << "2. Exibir conta" << std::endl;
        std::cout << "3. Fechar conta" << std::endl;
    }

    int lerOpcao() const {
        std::cout << ":> ";
        int opcao;
        std::string buffer;
        std::cin >> opcao;
        std::getline(std::cin, buffer);

        return opcao;
    }

    void imprimirConta(const Conta &conta) {
        float total = 0;
        std::cout << "Conta mesa: " << conta.getMesaId() << std::endl;
        std::cout << "Pedidos: " << std::endl;

        for (const Pedido &pedido : conta.getPedidos()) {
            std::cout << pedido.getItem() << std::endl;
            total += pedido.getItem()->getPreco() * pedido.getItem()->getQuantidade();
        }

        std::cout << "Total: " << total << std::endl;
    }
};