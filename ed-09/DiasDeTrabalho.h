#pragma once

#include <string>

class DiasDeTrabalho {
public:
    const std::string &getDia() const {
        return _dia;
    }

    void setDia(const std::string &dia) {
        _dia = dia;
    }

    const std::string &getTurno() const {
        return _turno;
    }

    void setTurno(const std::string &turno) {
        _turno = turno;
    }

private:
    std::string _dia;
    std::string _turno;
};