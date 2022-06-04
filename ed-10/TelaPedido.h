#pragma once

#include <iostream>
#include <iomanip>

#include "Conta.h"
#include "Mesa.h"
#include "Pedido.h"

class TelaPedido {
public:
  	
	void exibirMenuPrincipal() const {
		std::cout << std::endl;
        std::cout << "== Menu principal ==" << std::endl;
        std::cout << std::endl;
        std::cout << "1. Mostrar Cardapio" << std::endl;
        std::cout << "2. Realizar Pedido" << std::endl;
    }

    int lerOpcao() const {
        std::cout << ":> ";
        int opcao;
        std::string buffer;
        std::cin >> opcao;
        std::getline(std::cin, buffer);

        return opcao;
    }

    
    void obterQuantidade() {
        std::cout << "Insira a quantidade que voce quer: " << std::endl;
    }
    
    int cardapio() {
    	
    	int opcao;
    	
        std::cout << item1 << " R$" << precoItem1 << std::endl;
        std::cout << item2 << " R$" << precoItem2 << std::endl;
        std::cout << item3 << " R$" << precoItem3 << std::endl;
        std::cout << item4 << " R$" << precoItem4 << std::endl;
        
        //TODO: Alterar a maneira de obter o item.
		 
        return opcao;
    }
    
private:
    	
   	const std::string item1 = "1. Pizza        :";
   	const std::string item2 = "2. Hamburguer   :";
   	const std::string item3 = "3. Batata Frita :";
   	const std::string item4 = "4. Salada       :";
   	
   	const double precoItem1 = 35.00;
   	const double precoItem2 = 25.00;
   	const double precoItem3 = 20.00;
   	const double precoItem4 = 10.00;
   	
};
