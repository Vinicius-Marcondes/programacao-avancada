#pragma once

#include "TelaMesa.h"
#include "ControleConta.h"
#include "ControlePedido.h"

class ControleMesa {

public:
    ControleMesa(int numeroMesa, const Conta &conta) : _mesa(numeroMesa, true, conta), _controleConta(conta), _telaMesa() {}

public:
    void executar() {
        while (true) {
            _telaMesa.exibirMenuPrincipal();
            int opcao = _telaMesa.lerOpcao();

            switch (opcao) {
                case 1:
                    _controleConta.adicionaPedidoNaConta(_controlePedido.realizarPedido());
                    break;
                case 2:
                    _controleConta.exibeConta();
                    break;
                case 3:
                    bool contaFechada = true;
                    _controleConta.fechaConta(_mesa.getConta());
                    if (contaFechada) {
                        fechaMesa();
                        return;
                    } else {
                        break;
                    }
            }
        }
    }

    void fechaMesa() {
        _mesa.setEmUso(false);
    }

private:
    ControleConta _controleConta;
    ControlePedido _controlePedido;
    TelaMesa _telaMesa;
    Mesa _mesa;
};