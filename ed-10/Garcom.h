#pragma once

#include "Funcionario.h"

class Garcom : public Funcionario {
public:
    static int getSecretKey() {
        return _secretKey;
    }

private:
    static int _secretKey;
};

int Garcom::_secretKey = 123;