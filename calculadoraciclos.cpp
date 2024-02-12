#include <iostream>
using namespace std;

int main() {
    double Num1, Num2, Resultado;
    char Operador;
    char Continuar = 's';

    do {
        cout << "Introduce el primer numero: ";
        cin >> Num1;
        cout << "Introduce el operador (+,-,*,/): ";
        cin >> Operador;
        cout << "Introduce el segundo numero: ";
        cin >> Num2;

        switch (Operador) {
            case '+':
                Resultado = Num1 + Num2;
                cout << "El resultado es: " << Resultado << endl;
                break;
            case '-':
                resultado = num1 - num2;
                cout << "El resultado es: " << Resultado << endl;
                break;
            case '*':
                Resultado = Num1 * Num2;
                cout << "El resultado es: " << Resultado << endl;
                break;
            case '/':
                if (Num2 !=  0) {
                    Resultado = Num1 / Num2;
                    cout << "El resultado es: " << Resultado << endl;
                } else {
                    cout << "Error: División por cero no es posible." << endl;
                }
                break;
            default:
                cout << "Operador no reconocido." << endl;
        }

        cout << "¿Deseas hacer otra operacion? (s/n): ";
        cin >> Continuar;
    } while (Continuar == 's' || Continuar == 'S');

return 0;
}