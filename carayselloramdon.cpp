#include <iostream>
using namespace std;
int main(){
    srand(static_cast<unsigned int>(time(0)));
    int Resultado=rand()%2+1;
    int Jugador;
    cout<<"que cree que caera cara[1] o sello[2] : "<<endl;
    cin>>Jugador;
    if (Jugador==Resultado){
        cout<<"Felicidades hacertaste"<<endl;
    }
    else {
        cout<<"lo siento perdiste :()"<<endl;
    }
    return 0;
}