#include <iostream>
using namespace std;
int main() {
double Velocidad1, Velocidad2, Distancia;
cout << "Ingrese la velocidad del primer automovil (km/h): ";
cin >> Velocidad1;
cout << "Ingrese la velocidad del segundo automovil (km/h): ";
cin >> Velocidad2;
cout << "Ingrese la distancia entre las dos ciudades (km): ";
cin >> Distancia;
double TiempoEncuentro = Distancia / (Velocidad1 + Velocidad2);
cout << "El tiempo en que los automoviles se encuentran es: " << TiempoEncuentro << " horas" << endl;

return 0;
}