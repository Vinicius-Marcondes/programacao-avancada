#include <iostream>

#include "Cliente.h"
#include "Conta.h"
#include "ContaCorrente.h"
#include "ContaPoupanca.h"

using namespace std;

int main() {
    string nome = "vinicius";
    string email = "vinicius@email.com";
    string data = "04/07/2000";
    string numero = "1234";
    string agencia = "1";
    int idade = 21;

    Cliente cliente(nome, email, data, idade);
    ContaCorrente contaCorrente(numero, agencia, cliente);
    ContaPoupanca contaPoupanca(numero, agencia, cliente);

    contaCorrente.depositarQuantia(1600);
    contaPoupanca.depositarQuantia(1600);

    contaCorrente.imprimeExtrato();
    contaPoupanca.imprimeExtrato();

    contaCorrente.aplicarJurosDiarios(20, contaCorrente.getTaxaDeJuros());
    contaPoupanca.aplicarJurosDiarios(20, contaPoupanca.getTaxaDeJuros());

    contaCorrente.imprimeExtrato();
    contaPoupanca.imprimeExtrato();

    return 0;
}
