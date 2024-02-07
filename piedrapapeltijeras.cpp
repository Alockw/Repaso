#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(static_cast<unsigned>(time(0)));
    const char PIEDRA ='r';
    const char TIJERAS ='t';
    const char PAPEL ='p';
    int Computador=rand()%3;
    char DesicionDelComputador;
    switch (Computador){
        case 0:DesicionDelComputador=PIEDRA; 
        break;
        case 1:DesicionDelComputador=TIJERAS;
        break;
        case 2:DesicionDelComputador=PAPEL;
        break;
        }
    cout<<"que opcion escogeras piedra[r] , tijeras [t], papel[p]"<<endl;
    char Jugador;
    cin>>Jugador;
    if(Jugador==DesicionDelComputador){
        cout<<"Empate. \n"<<DesicionDelComputador;}
    else if ((Jugador==PIEDRA&&DesicionDelComputador==TIJERAS)||(Jugador==PAPEL&&DesicionDelComputador==PIEDRA)||(Jugador==TIJERAS&&DesicionDelComputador==PAPEL)){
        cout<<"Has ganado "<<Jugador<<"vence a "<<DesicionDelComputador;}
    else{
        cout<<"has perdido"<<DesicionDelComputador<<"vence a "<<Jugador;}
    return 0;
}
