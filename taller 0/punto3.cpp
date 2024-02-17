#include <iostream>
using namespace std;
int main() {
double MontoCompra;
double Descuento;
double ValorNeto;
cout << "Ingrese el monto de la compra: ";
cin >>MontoCompra;
if (MontoCompra >=  100000 && MontoCompra <  900000) {
  Mescuento = MontoCompra *  0.10;
} 
else if (MontoCompra >=  900000 && MontoCompra <  1000000) {
  Descuento = MontoCompra *  0.20;
} 
else if (MontoCompra >=  1000000) {
  Descuento = MontoCompra *  0.30;
}
else {
  Descuento =  0;
}
ValorNeto = MontoCompra - descuento;
cout << "Descuento aplicado: " << Descuento << endl;
cout << "Valor neto de la compra: " << ValorNeto << endl;

return 0;
}