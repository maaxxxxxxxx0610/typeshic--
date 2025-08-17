#include <iostream>
#include <string.h>
using namespace std; 




struct Persona {
   char nombre[20]; 
   bool discapacidad; 
}personas[100], personasSinD[100], personasConD[100];


int main (){

int n, j= 0, k= 0; 
cout<<"Digitame el numero de personas: "; cin>>n;

for (int i = 0; i < n; i++) {
    fflush(stdin); 
    cout<<"Digitame tu nombre: ", 
    cin.getline(personas[i].nombre, 20, '\n'); 
    cout<<"Eres retrasado?(1/0) ...."; cin>>personas[i].discapacidad; 
    
    if (personas[i].discapacidad==1) {
       strcpy (personasConD[j].nombre, personas[i].nombre); 
       j++;  
    } if (personas[i].discapacidad == 0) {
        strcpy (personasSinD[k].nombre, personas[i].nombre); 
        k++; 
    }
}

cout<<"\nMostrar las personas sin retraso: "; 
for (int i = 0; i < k; i++) {
    cout<<'\n'<<personasSinD[i].nombre<<endl;
}

cout<<"\nMostrar las personas con retraso: "; 
for (int i = 0; i < j; i++) {
    cout<<'\n'<<personasConD[i].nombre; 
}




    return 0; 
}