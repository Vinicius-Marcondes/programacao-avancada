#pragma once

#include <string>
#include "DiasDeTrabalho.h"

class Funcionario {
public:
private:
    int _id;
    std::string _nome;
    std::string _sobrenome;
    DiasDeTrabalho** _diasDeTrabalho;
};