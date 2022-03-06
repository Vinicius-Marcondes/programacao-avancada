#ifndef ED_01_RELOGIO_H
#define ED_01_RELOGIO_H

class Relogio {
public:
    Relogio();
    Relogio(int minuto, int hora);

    ~Relogio();

    void ajustaHora(int hora);
    void ajustaMinuto(int minuto);
    void mostraHorario();
    int calculaMinutosDoHorario();

private:
    int _hora;
    int _minuto;
};


#endif
