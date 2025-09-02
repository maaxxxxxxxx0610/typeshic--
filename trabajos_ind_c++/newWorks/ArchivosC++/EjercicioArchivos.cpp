#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
using namespace std; 


void escribir() {
    ofstream archivoo; 
    string nombre, frase; 
    char rpt; 

    cout<<"Dime el name de tu archivo: "; 
    getline(cin, nombre); 

    archivoo.open(nombre.c_str(), ios::out); 

    if (archivoo.fail()) { 
        cout<<"No se pudo crear :( "; 
        exit(1); 
    }

    do
    {
        fflush(stdin); 
       cout<<"Dime una frase: "; 
       getline(cin, frase); 
       archivoo<<frase<<endl; 

       cout<<"Desea agregar otra frase(s/n): "; 
       cin>>rpt; 

    } while (rpt=='s'||rpt=='S');

    archivoo.close(); 



    
}


int main () {
    escribir(); 
    return 0; 
}