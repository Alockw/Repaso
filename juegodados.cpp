#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int tirarDados() {
    return rand() %   6 +   1 + rand() %   6 +   1;
}

int main() {
    srand(time(0)); 
    char Repetir = 's';

    cout << "" << endl;
    cout << "********* Bienvenido al Simulador de Juego de Casino ******" << endl;
    cout << "********* Sube a la mesa y apuesta tus fichas ******" << endl;
    cout << "" << endl;

    while (Repetir == 's' || Repetir == 'S') {
        int ResultadoTiro = tirarDados();
        cout << "Has sacado " << ResultadoTiro << endl;

        if (ResultadoTiro ==   7 || ResultadoTiro ==   11) {
            cout << ". ¡Ganaste!" << endl;
        } else if (ResultadoTiro ==   2 || ResultadoTiro ==   3 || ResultadoTiro ==   12) {
            cout << ". Has perdido." << endl;
        } else { // Se establece un punto
            bool Ganar = false;
            while (!Ganar) {
                int ResultadoSegundoTiro = tirarDados();
                cout << "Has sacado " << ResultadoSegundoTiro << endl;

                if (ResultadoSegundoTiro == ResultadoTiro) {
                    cout << ". ¡Ganaste!" << endl;
                    ganar = true;
                } else if (ResultadoSegundoTiro ==   7) {
                    cout << ". Has perdido." << endl;
                    Ganar = true;
                }
            }
        }

        cout << "¿Quieres jugar otro juego? Si o No: ";
        cin >> Repetir;
    }

    cout << "Gracias por jugar" << endl;
return 0;
}