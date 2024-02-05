#include <iostream>
using namespace std;
int main(void){
    int F;
    cout<<"ingrese los grados fahrenheit de la receta ";
    cin>>F;
    float C=0.0;
    C=(F-32)/1.8;
    cout<<"los grados centigradros que debes poner en el horno es : "<<C;
return 0;
}