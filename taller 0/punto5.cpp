#include <iostream>
using namespace std;
int main() {
int HorasTrabajadas;
int SalarioSemanal;
int Extras =  0;
cout << "Ingrese las horas trabajadas en la semana: ";
cin >> HorasTrabajadas;
if (HorasTrabajadas >  35) {
  Extras = HorasTrabajadas -  35;
  SalarioSemanal =  35 *  40000 + Extras *  5000;
} 
else {
  SalarioSemanal = HorasTrabajadas *  40000;
}
cout << "Salario semanal: " << SalarioSemanal << " pesos" << endl;

return 0;
}