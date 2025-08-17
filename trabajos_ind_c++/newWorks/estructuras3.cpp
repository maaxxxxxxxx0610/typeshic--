#include <iostream>
using namespace std; 


struct elTiempo {

    int horas; 
    int minutos; 
    int segundos; 
}et[100];


int main () {

  int n, horast = 0, minutosT = 0, segundost = 0; 
  cout<<"Dime el numero de etapas: "; 
  cin>>n; 


  for (int i = 0; i < n; i++) {
    cout<<"Horas: "; 
    cin>>et[i].horas; 
    cout<<"Minutos: "; 
    cin>>et[i].minutos; 
    cout<<"Segundos: "; 
    cin>>et[i].segundos; 
    horast += et[i].horas; 
    minutosT += et[i].minutos; 
    if (et[i].minutos >= 60) {
        minutosT -= 60; 
        horast++; 
    }
    segundost += et[i].segundos; 
    if (et[i].segundos >= 60) {
        segundost -= 60; 
        minutosT++; 
    }

  }

cout<<"\nTiempo total empleado: "; 
cout<<"\nHoras totales: "<<horast; 
cout<<"\nMinutos totales: "<<minutosT; 
cout<<"\nSegundos totales: "<<segundost; 

    return 0; 
}