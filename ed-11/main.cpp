#include <iostream>
#include "algorithm"
#include "ControleMesa.h"
#include "ItemDAO.h"

int main() {
    int numeroMesa = 0;
    std::cout << "Seja bem vindo!" << std::endl;
    std::cout << "Insira o numero de sua mesa: " << std::endl;
    std::cout << ":> ";
    std::cin >> numeroMesa;

    ControleMesa controleMesa = ControleMesa(numeroMesa, Conta());
    controleMesa.executar();

    return 0;
}
