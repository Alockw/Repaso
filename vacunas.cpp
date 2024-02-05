#include <iostream>
using namespace std;
int main(void){
    float DosisVacuna=0.0;
    float PesoBebe;
    float MesesBebe;
    cout<<"Ingrese el peso que tiene el bebe en este momento: \n";
    cin>>PesoBebe;
    cout<<"Cuanto meses tiene el bebe: \n";
    cin>>MesesBebe;
    DosisVacuna=(PesoBebe+10/MesesBebe*10)*8;
    cout<<"La dosis total que debe de tener la vacuna para el bebe es :"<<DosisVacuna;
    return 0;
}