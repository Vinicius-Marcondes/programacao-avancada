#include <iostream>

#include "Cliente.h"
#include "Conta.h"
#include "Banco.h"

using namespace std;

int main() {
    string nome = "vinicius";
    string email = "vinicius@email.com";
    string data = "04/07/2000";
    int idade = 21;
    
    Cliente cliente(nome, email, data, idade);

    string numero = "1234";
    string agencia = "1";
    Conta conta(numero, agencia, cliente);
    
    Banco banco(10);
    banco.incluiConta(&conta);
    banco.incluiConta(&conta);
    banco.incluiConta(&conta);
    banco.incluiConta(&conta);
    banco.incluiConta(&conta);

    banco.imprimeContas();

    Banco superBanco(10000);
    superBanco.incluiConta(&conta);
    superBanco.imprimeContas();

    return 0;
}
