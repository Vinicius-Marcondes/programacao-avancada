#pragma once

#include <iostream>

#include "Conta.h"

class TelaConta {
    void imprimirConta(const Conta &conta) {
        float total = 0;
        std::cout << "Conta mesa: " << conta.getMesaId() << std::endl;
        std::cout << "Pedidos: " << std::endl;

        for (const Pedido &pedido : conta.getPedidos()) {
            std::cout << pedido.getItem() << std::endl;
        }

        std::cout << "Total: " << conta.getTotal() << std::endl;
    }

    void imprimirFecharConta(const Conta &conta) {
        std::cout << "Total pago: R$" << conta.getTotal();
        std::cout << "Insira o token do garçom:" << conta.getTotal();
    }
};