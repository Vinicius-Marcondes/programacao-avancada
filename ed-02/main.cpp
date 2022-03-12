#include <iostream>
#include <iomanip>

#include "Relogio.h"

using namespace std;

int main() {
    cout << "Relogio 0\n";

    Relogio relogio(2, 5);
    relogio.mostraHorario();
    cout << relogio.getMinutosDoHorario() << "\n";
    relogio.setHora(10);
    relogio.setMinuto(50);
    relogio.mostraHorario();
    cout << relogio.getMinutosDoHorario() << "\n\n";

    cout << "Relogio 1\n";

    Relogio relogio1;
    relogio1.mostraHorario();
    cout << relogio1.getMinutosDoHorario() << "\n";
    relogio1.setHora(1);
    relogio1.setMinuto(10);
    relogio1.mostraHorario();
    cout << relogio1.getMinutosDoHorario() << "\n\n";

    cout << "Relogio 2\n";

    Relogio relogio2(2, 5);
    relogio2.mostraHorario();
    cout << relogio2.getMinutosDoHorario() << "\n";
    relogio2.setHora(10);
    relogio2.setMinuto(50);
    relogio2.mostraHorario();
    cout << relogio2.getMinutosDoHorario() << "\n";


    return 0;
}
