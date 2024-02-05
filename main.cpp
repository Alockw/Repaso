#include<iostream>
using namespace std;
#define FRIEND 1
#define PI 3.1416;
int main(void){
    char name[20];
    int num1;
    num1=5;
    int num2;
    num2=15;
    double pi;
    float num;
    num=3.8;
    bool estado;
    estado=false;
    float res;
    res=num1+num2;
    res=res+num;
    res=res*2;
    cout<< res <<endl;
    cout<<"El valor de pi: "<<PI;
    const float IVA=19.02;
    cout<<"El valor del IVA: "<<IVA;
    /*Condicional simple
    if( condicion a evaluar )por ejemplo x<=10
    ....
    bloque de instrucciones restante del algoritmo....
    ....*/
    int resultado=0;
    cout<<"cuanto es 39+50";
    cin>>resultado;
    if (resultado==39+50){
        cout<<"respuesta correcta felicitaciones ";
    }
    else {
        cout<<"respuesta incorrecta. :()";
    }
    system ("pause");

    //si es un bool el int main replanzando a int no necesita el retunr 0 
    return 0;
}