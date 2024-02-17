#include <iostream>
using namespace std;
int main() {
int Numero=0;
cout << "Introduce un numero: ";
cin >> Numero;
if (Numero %  2 ==  0) {
  cout << Numero << " es par" << endl;
} 
else {
  cout << Numero << " es impar" << endl;
}

return 0;
}