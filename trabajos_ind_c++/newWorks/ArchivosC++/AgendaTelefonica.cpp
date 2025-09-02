#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
using namespace std; 
  
void crearContacto () {
   ofstream archivo; 
   string nombreA; 

   cout<<"Dime el nomnbre de la agenda telefonica y empezamos a guardar y crear: "; 
   fflush(stdin); 
   getline(cin, nombreA); 

   archivo.open(nombreA.c_str(), ios::app); 

   if (archivo.fail()) {
    cout<<"Pendejo, ponle bien "; 
    exit(1); 

   }

string apellido, nombre, telefono; 
 
char rpt; 

archivo<<"-----------AGENDA TELFONICA :)----------- "<<endl; 

do {
    fflush(stdin); 
    cout<<"Necesito que me des el nombre, apellido y telefono :) "; 

    
    getline(cin, nombre); 
    archivo<<"Nombre: "<<nombre<<endl; 

    getline(cin, apellido );
    archivo<<"Apellido: "<<apellido<<endl; 

   getline (cin, telefono); 
   archivo<<"Telefono: "<<telefono<<endl;
   
   archivo<<"----------------------------"<<endl; 

   if (telefono.size()<10) {
    archivo<<"te chingaron, te dieron un numero fake lmao: "; 
   }

    cout<<"Deseas meter otro contacto? (S/N) "; 
    cin>>rpt; 

} while ((rpt=='S')||rpt=='s');

}
void menu(){

    int opc; 
    do {
        
        cout<<"--MENU--"<<endl; 
        cout<<"1. Crear Nuevo contacto (nombre, apellido, telefono)"<<endl; 
        cout<<"2. Agregar más contactos (nombre, apellido, telefono)"<<endl; 
        cout<<"3. Visualizar contactos existentes"<<endl; 
        cout<<"4. Salir.."<<endl; 
        cin>>opc; 
        switch (opc)
        {
        case 1: 
        crearContacto(); 
            break; 
        case 2: 

        
        default:
            break;
        }
    } while (opc != 4); 
}





int main () {
    menu(); 

}