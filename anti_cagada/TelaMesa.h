#pragma once

#include <iostream>

#include "Conta.h"
#include "Mesa.h"
#include "Pedido.h"

class TelaMesa {
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
};
