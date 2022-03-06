#include <iostream>
#include <iomanip>

#include "Relogio.h"

using namespace std;

Relogio::Relogio() {
    _hora = 0;
    _minuto = 0;
}

Relogio::Relogio(int minuto, int hora) {
    cout << "criou relogio\n";
    if (minuto < 60 && minuto >= 0) {
        _minuto = minuto;
    } else {
        cout << "Valor inválido, os minutos devem ser entre 0 e 59";
        Relogio::~Relogio();
    }

    if (hora < 23 && hora >= 0) {
        _hora = hora;
    } else {
        cout << "Valor inválido, as horas devem ser entre 0 e 23\n";
        Relogio::~Relogio();
    }
}

Relogio::~Relogio() {}

void Relogio::ajustaHora(int hora) {
    if (hora < 23 && hora >= 0) {
        _hora = hora;
    } else {
        cout << "Valor inválido, as horas devem ser entre 0 e 23\n";
        Relogio::~Relogio();
    }
}

void Relogio::ajustaMinuto(int minuto) {
    if (minuto < 60 && minuto >= 0) {
        _minuto = minuto;
    } else {
        cout << "Valor inválido, os minutos devem ser entre 0 e 59\n";
        Relogio::~Relogio();
    }
}

void Relogio::mostraHorario() {
    cout << setw(2) << setfill('0') << _hora;
    cout << ":";
    cout << setw(2) << setfill('0')<< _minuto;
    cout << "\n";
}

int Relogio::calculaMinutosDoHorario() {
    return (60 * _hora) + _minuto;
}
