#include <iostream>
#include <iomanip>

#include "Relogio.h"

using namespace std;

int main() {
    cout << "Relogio 0\n";

    Relogio relogio(2, 5);
    relogio.mostraHorario();
    cout << relogio.calculaMinutosDoHorario() << "\n";
    relogio.ajustaHora(10);
    relogio.ajustaMinuto(50);
    relogio.mostraHorario();
    cout << relogio.calculaMinutosDoHorario() << "\n\n";

    cout << "Relogio 1\n";

    Relogio relogio1;
    relogio1.mostraHorario();
    cout << relogio1.calculaMinutosDoHorario()  << "\n";
    relogio1.ajustaHora(1);
    relogio1.ajustaMinuto(10);
    relogio1.mostraHorario();
    cout << relogio1.calculaMinutosDoHorario()  << "\n\n";

    cout << "Relogio 2\n";

    Relogio relogio2(2, 5);
    relogio2.mostraHorario();
    cout << relogio2.calculaMinutosDoHorario()  << "\n";
    relogio2.ajustaHora(10);
    relogio2.ajustaMinuto(50);
    relogio2.mostraHorario();
    cout << relogio2.calculaMinutosDoHorario()  << "\n";


    return 0;
}
