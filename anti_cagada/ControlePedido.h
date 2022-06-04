#pragma once

#include "TelaPedido.h"
#include "Pedido.h"
#include "Mesa.h"
#include <vector>

class ControlePedido {
public:
    ControlePedido(): _tela(TelaPedido()),
                       _pedidos() {
            // vazio
    }

    Pedido realizarPedido() {

        while (true) {

            // Exibir o menu principal
            _tela.exibirMenuPrincipal();

            // Usuário escolhe uma opção
            int opcao = _tela.lerOpcao();

            // Tratamento da opção
            switch (opcao) {
                case 1:
                	std::cout << "Escreva o numero referente ao seu pedido: " << std::endl;
                    cardapio();
                    //TODO: Verificar se é necesário chamar o pedido novamente
                    realizarPedido();
                    break;
                case 2:
                	std::cout << "Escreva o numero referente ao seu pedido: " << std::endl;
                	cardapio();
                    break;
            }
            
            int opcaoPedido = _tela.lerOpcao();
            
            // Usuário escolhe uma opção
            
            obterQuantidade();
            
            int qtdPedido = _tela.lerOpcao();
            
            double totalPedido = obterTotalPedido(opcaoPedido, qtdPedido);
            
            std::cout <<  " Seu pedido deu R$ " << totalPedido << std::endl;
            
            Pedido pedido = new Pedido()
            
            return totalPedido
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
