#pragma once

#include <iostream>
#include <iomanip>

#define MAX_HORA 24
#define MIN_HORA 0
#define MAX_MINUTO 60
#define MIN_MINUTO 0

class Relogio {
private:
    int _minuto;
    int _hora;

public:
    Relogio(): _minuto(0), _hora(0) {}

    Relogio(int minuto, int hora) {
        setMinuto(minuto);
        setHora(hora);
    }

    ~Relogio(){}

    void setHora(int hora) {
        if (hora < MAX_HORA && hora >= MIN_HORA) {
            _hora = hora;
        } else {
            throw std::invalid_argument("Valor inválido, as horas devem ser entre 0 e 23");
        }
    }

    void setMinuto(int minuto){
        if (minuto < MAX_MINUTO && minuto >= MIN_MINUTO) {
            _minuto = minuto;
        } else {
            throw std::invalid_argument("Valor invalido, os minutos devem ser entre 0 e 59");
        }
    }

    void mostraHorario() const {
        std::cout << std::setw(2) << std::setfill('0') << _hora
        << ":"
        << std::setw(2) << std::setfill('0')<< _minuto << std::endl;
    }

    int getMinutosDoHorario() const {
        return (60 * _hora) + _minuto;
    }
};
