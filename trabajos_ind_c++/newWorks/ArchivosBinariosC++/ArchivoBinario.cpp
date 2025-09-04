#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std; 

void ComenzarPuls () {
    ofstream archivoB; 

    archivoB.open("Pulsaciones.dat", ios::out | ios::binary); 

    if (archivoB.fail())
 {
    cout<<"No se pudo crear tu mmda "; 
    exit(1); 
 }

 float hora; 
 int puls; 

 cout<<"Dime una hora: "<<endl;  cin>>hora; 
 cout<<"Dime las puls: "<<endl; cin>>puls; 

 archivoB.write((char *) &puls, sizeof(puls) ); 
 archivoB.write((char *) &hora, sizeof(hora)); 
 archivoB.close(); 
}
void aniadir () {
    ofstream archivoB; 

    archivoB.open("Pulsaciones.dat", ios::app | ios::binary); 

    if (archivoB.fail())
 {
    cout<<"No se pudo crear tu mmda "; 
    exit(1); 
 }

 float hora; 
 int puls; 

 cout<<"añade una nueva hora: "<<endl;  cin>>hora; 
 cout<<"añade una nueva puls: "<<endl; cin>>puls; 

 archivoB.write((char *) &puls, sizeof(puls) ); 
 archivoB.write((char *) &hora, sizeof(hora)); 
 archivoB.close(); 
}


 
void mostrarPuls () {
   ifstream archivoB; 

    archivoB.open("Pulsaciones.dat", ios::in | ios::binary); 

    if (archivoB.fail())
 {
    cout<<"No se pudo crear tu mmda "; 
    exit(1); 
 }

 float hora; 
 int puls; 

 while (!archivoB.eof(
 )) {
    archivoB.read((char *)&hora, sizeof(hora)); 
    archivoB.read((char *)&puls, sizeof(puls)); 

    if (!archivoB.eof()) {
        cout<<"Hora: "<<hora<<endl; 
        cout<<"Pulsaciones: "<<puls<<endl<<endl; 
    }
 }
 archivoB.close(); 
}

void menu () {
    int opc; 

    do
    {
        cout<<"-----MENU-----"<<endl; 
        cout<<"1. Comenzar a digitar las pulsaciones. "<<endl; 
        cout<<"2. Añadir pulsaciones. "<<endl; 
        cout<<"3. Mostrar pulsaciones registradas. "<<endl; 
        cout<<"4. Salirrrr. "<<endl; 
        cin>>opc; 

        switch (opc) {
            case 1: ComenzarPuls(); 
            break; 
            case 2:  aniadir (); 
            break; 
            case 3: mostrarPuls(); 
            break; 
            case 4: break; 

        }
    } while (opc != 4);
    
}


int main () {
    menu(); 
    return 0; 
}