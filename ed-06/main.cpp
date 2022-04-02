#include <iostream>

#include "Banco.h"

#include "Conta.h"
#include "Cliente.h"
#include "ContaCorrente.h"
#include "ContaPoupanca.h"
#include "ContaSalario.h"

using namespace std;

int main() {
    string nome = "vinicius";
    string email = "vinicius@email.com";
    string data = "04/07/2000";
    string numero = "1234";
    string agencia = "1";
    int idade = 21;

    Banco banco(5);
    Cliente cliente(nome, email, data, idade);

    ContaCorrente contaCorrente_1("1234", "1", cliente, 100.00);
    ContaCorrente contaCorrente_2("1235", "2", cliente, 2000.00);

    ContaPoupanca contaPoupanca_1("1235", "3", cliente, 100.00);
    ContaPoupanca contaPoupanca_2("1236", "4", cliente, 1000.00);

    ContaSalario contaSalario_1("1237", "4", cliente, 500.00);

    banco.incluiConta(&contaCorrente_1);
    banco.incluiConta(&contaCorrente_2);
    banco.incluiConta(&contaPoupanca_1);
    banco.incluiConta(&contaPoupanca_2);
    banco.incluiConta(&contaSalario_1);

    Conta** contas = banco.getContas();

    for (int i = 0; i < banco.getNumeroContas(); i++) {
        contas[i]->aplicaJurosDiarios(40);
    }

    for (int i = 0; i < banco.getNumeroContas(); i++) {
       contas[i]->imprimeExtrato();
    }

    return 0;
}
