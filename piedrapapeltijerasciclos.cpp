#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(static_cast<unsigned>(time(0)));
    const char PIEDRA = 'r';
    const char TIJERAS = 't';
    const char PAPEL = 'p';
    char Jugador, DesicionDelComputador;
    char Continuar = 's';

    do {
        int Computador = rand() %  3;
        switch (Computador) {
            case  0: DesicionDelComputador = PIEDRA; break;
            case  1: DesicionDelComputador = TIJERAS; break;
            case  2: DesicionDelComputador = PAPEL; break;
        }

        cout << "Escoge una opcion: piedra[r] , tijeras[t], papel[p]: ";
        cin >> Jugador;

        if (Jugador == DesicionDelComputador) {
            cout << "Empate. \n";
        } else if ((Jugador == PIEDRA && DesicionDelComputador == TIJERAS) ||
                   (Jugador == PAPEL && DesicionDelComputador == PIEDRA) ||
                   (Jugador == TIJERAS && DesicionDelComputador == PAPEL)) {
            cout << "Has ganado. " << Jugador << " vence a " << DesicionDelComputador << endl;
        } else {
            cout << "Has perdido. " << DesicionDelComputador << " vence a " << Jugador << endl;
        }

        cout << "¿Quieres jugar de nuevo? (s/n): ";
        cin >> Continuar;
    } while (Continuar == 's' || Continuar == 'S');

return 0;
}