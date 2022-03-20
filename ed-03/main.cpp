#include <iostream>

#include "Cliente.h"
#include "Conta.h"
#include "Hora.h"

int main() {
    Cliente cliente;
    std::string nome = "vinicius";
    std::string email = "vinicius@email.com";
    std::string data = "04/07/2000";
    Cliente cliente1(nome, email, data, 21);

    Conta conta;
    std::string numero = "1234";
    std::string agencia = "21";
    Conta conta1(numero, agencia, cliente1);

    Hora hora(0,30,15);
    Hora hora1(30,50,10);

    std::cout << "#### horas iniciais ###" << std::endl;
    hora.mostraHora();
    hora1.mostraHora();
    std::cout << "#######################" << std::endl;
    std::cout << std::endl;

    hora.soma(hora1);
    hora.mostraHora();

    hora.subtracao(hora1);
    hora.mostraHora();

    hora.subtracao(hora1);
    hora.mostraHora();

    return 0;
}
