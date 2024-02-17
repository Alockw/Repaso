#include <iostream>
using namespace std;
int main() {
int sueldo;
int nuevoSueldo;
cout << "Ingrese el sueldo del trabajador: ";
cin >> sueldo;
if (sueldo <  1000000) {
  nuevoSueldo = sueldo + (sueldo *  15) /  100;
} 
else {
  nuevoSueldo = sueldo;
}
cout << "Nuevo sueldo del trabajador: " << nuevoSueldo << endl;

return 0;
}