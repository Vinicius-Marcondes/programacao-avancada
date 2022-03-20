#pragma once

#include <iostream>
#include <iomanip>

class Hora {
public:
    Hora() {}

    Hora(int segundo, int minuto, int hora) : _segundo(segundo), _minuto(minuto), _hora(hora) {}

    void soma(const Hora &hora2) {
        somaHora(hora2._hora);
        somaMinuto(hora2._minuto);
        somaSegundo(hora2._segundo);
    }

    void subtracao(const Hora &hora2) {
        subtraiHora(hora2._hora);
        subtraiMinuto(hora2._minuto);
        subtraiSegundo(hora2._segundo);
    }

    void mostraHora() const {
        std::cout << std::setw(2) << std::setfill('0') << _hora << ":" << std::setw(2) << std::setfill('0') << _minuto << ":" << std::setw(2) << std::setfill('0') << _segundo << std::endl;
    }

protected:
    void somaHora(const int soma) {
        if (_hora + soma >= MAX_HORA) {
            _hora = (_hora + soma) - MAX_HORA;
        } else {
            _hora += soma;
        }
    }

    void somaMinuto(const int soma) {
        if (_minuto + soma >= MAX_MINUTO) {
            _minuto = (_minuto + soma) - MAX_MINUTO;
            somaHora(1);
        } else {
            _minuto += soma;
        }
    }

    void somaSegundo(const int soma) {
        if (_segundo + soma >= MAX_SEGUNDO) {
            _segundo = (_segundo + soma) - MAX_SEGUNDO;
            somaMinuto(1);
        } else {
            _segundo += soma;
        }
    }

    void subtraiHora(const int subtracao) {
        if (_hora - subtracao < MIN_TIME) {
            _hora = MAX_HORA - (subtracao - _hora);
        } else {
            _hora -= subtracao;
        }
    }

    void subtraiMinuto(const int subtracao) {
        if (_minuto - subtracao < MIN_TIME) {
            _minuto = MAX_MINUTO - (subtracao - _minuto);
            subtraiHora(1);
        } else {
            _minuto -= subtracao;
        }
    }

    void subtraiSegundo(const int subtracao) {
        if (_segundo - subtracao < MIN_TIME) {
            _segundo = MAX_SEGUNDO - (subtracao - _segundo);
            subtraiMinuto(1);
        } else {
            _segundo -= subtracao;
        }
    }

private:
    const static int MAX_SEGUNDO = 60;
    const static int MAX_MINUTO = 60;
    const static int MAX_HORA = 24;
    const static int MIN_TIME = 0;

    int _segundo;
    int _minuto;
    int _hora;
};