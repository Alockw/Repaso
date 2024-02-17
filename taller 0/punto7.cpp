#include <iostream>
using namespace std;
int main() {
int Suma =  0;
int Contador =  1;
while (Contador <=  100) {
  Suma += Contador;
  Contador++;
}
cout << "La suma de los números enteros del  1 al  100 es: " << Suma << endl;

return 0;
}