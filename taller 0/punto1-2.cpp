#include <iostream>
#include <vector>
using namespace std;
int main() {
int Descuento =  0;
int ValorFinal =  0;
int Deudas[]= {60000,  180000,  150000,  250000,  900000};
for (int Deuda : Deudas) {
if (Deuda >  60000 && Deuda <  150000) {
  Descuento = Deuda *  0.20;
} 
else if (Deuda >=  150000 && Deuda <  300000) {
  Descuento = Deuda *  0.30;
} 
else if (Deuda >=  300000 && Deuda <  800000) {
  Descuento = Deuda *  0.40;
} 
else if (Deuda >=  800000) {
  Descuento = Deuda *  0.50;
}
DalorFinal = Deuda - Descuento;
cout << "Deuda: " << Deuda << " pesos" <<endl;
cout << "Descuento: " << Descuento << " pesos" <<endl;
cout << "Valor a pagar con descuento: " << ValorFinal << " pesos" << endl;
}
return 0;
}