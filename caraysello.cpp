#include <iostream>
using namespace std;
int main(){
    int Cara=1;
    int Jugador;
    cout<<"que cree que caera cara[1] o sello[2] : "<<endl;
    cin>>Jugador;
    if (Jugador==Cara){
        cout<<"Felicidades hacertaste"<<endl;
    }
    else {
        cout<<"lo siento perdiste :()"<<endl;
    }
    return 0;
}