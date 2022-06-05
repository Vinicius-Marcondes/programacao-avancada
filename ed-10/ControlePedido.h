#pragma once

#include "TelaPedido.h"
#include "Pedido.h"
#include "Item.h"
#include "Mesa.h"
#include <vector>

class ControlePedido {
public:
    ControlePedido(): _tela(), _pedidos() {}

    Pedido realizarPedido() {

        while (true) {
            // Exibir o menu principal
            _tela.exibirMenuPrincipal();

            // Usuário escolhe uma opção
            int opcao = _tela.lerOpcao();

            // Tratamento da opção
            switch (opcao) {
                case 1:
                	std::cout << std::endl;
                	std::cout << "== Cardapio ==" << std::endl;
                	std::cout << std::endl;
                    cardapio();
                    realizarPedido();
                    break;
                case 2:
                	std::cout << std::endl;
                	std::cout << "== Escreva o numero referente ao seu pedido: ==" << std::endl;
                	std::cout << std::endl;
                	cardapio();
                    break;
            }

            // Usuário escolhe uma opção
            int opcaoPedido = _tela.lerOpcao();

            obterQuantidade();
            
            int qtdPedido = _tela.lerOpcao();
            
            double totalPedido = obterTotalPedido(opcaoPedido, qtdPedido);
            
            std::cout <<  "Seu pedido deu R$ " << totalPedido << std::endl;
            
            //TODO: Verificar a maneira de receber o Pedido
            Pedido pedido = Pedido();
            {
            	Item item;
	            pedido.setItem(item);
	            pedido.setQuantidade(qtdPedido);
	            
	            std::cout <<  pedido.getQuantidade() << "::" << pedido.getItem() << std::endl;
            
			}
            return pedido;
        }
    }
    
    void obterQuantidade() {
       return _tela.obterQuantidade();
    }
    
    int cardapio() {
        return _tela.cardapio();
    }
    
    double obterTotalPedido(int opcaoPedido, int qtdPedido){
    	double total = 0;
		if(opcaoPedido == 1){
    		total = qtdPedido * 35;
		}else if(opcaoPedido == 2){
			total = qtdPedido * 25;
		}else if(opcaoPedido == 3){
			total = qtdPedido * 20;
		}else if(opcaoPedido == 4){
			total = qtdPedido * 10;
		}
		return total;
	}

private:
    TelaPedido _tela;
    std::vector<Pedido> _pedidos;
};
