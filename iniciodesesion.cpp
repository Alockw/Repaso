#include <iostream>
#include <vector>
using namespace std;

const string UsernameCorrecto="Fernando";
const string ContraseñaCorrecta="1234";
bool InciarSesion(string& NombreUsuario, string& Contraseña){
    cout<<"Ingrese su nombre de usuario: ";
    cin>>NombreUsuario;                  
    cout<<"Contraseña: ";
    cin>>Contraseña;
    return NombreUsuario==UsernameCorrecto && Contraseña==ContraseñaCorrecta;
}
int main(){
    string NombreUsuario;
    string Contraseña;
    int Intentos=0;
    const int MaxIntentos=3;
    while(Intentos<MaxIntentos){
        if(InciarSesion(NombreUsuario,Contraseña)){
            cout<<"Inicio de secion exitoso"<<endl;
            break;}
        else {
            cout<<"Nombre de usuario o contraseña incorrecto. Intente nuevamente"<<endl;
            Intentos++;
        }
    }
    if (Intentos>=MaxIntentos){
        cout<<"Haz alcansado el maximo de intentos. Intente mas tarde"<<endl;
    }
    return 0;
}