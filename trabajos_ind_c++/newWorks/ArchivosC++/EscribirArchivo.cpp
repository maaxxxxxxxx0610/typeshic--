#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
using namespace std; 


void escribir () {
    ofstream archivo; 
    string nombreArchivo, frase; 

    cout<<"Dime el nombre del archivo: "; 
    getline(cin, nombreArchivo); 

    archivo.open(nombreArchivo.c_str(),ios::out);

    if (archivo.fail()) {
        cout<<"No se pudo abrir :( "; 
        exit(1); 
    } 

    cout<<"Frase de tu archivo :) " ;  
    getline(cin, frase); 
    archivo<<frase; 
    

    
}

int main () {
    escribir(); 
    return 0; 
}