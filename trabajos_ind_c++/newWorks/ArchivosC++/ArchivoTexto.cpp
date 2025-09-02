#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
using namespace std; 


void pedir () {
    ofstream archivo; 
    string nombreA; 


    cout<<"Dime el nombre del archvio: "; 
    getline(cin, nombreA); 

    archivo.open(nombreA.c_str(), ios::app); 

    if (archivo.fail()) {
        cout<<"errrrrrrrorrrrrrrr "; 
        exit(1); 
    }

    string texto; 
    char rpt; 

    do {
        fflush(stdin); 
        cout<<"Dime un texto a aniadir: "; 
        getline(cin,texto); 
        archivo<<texto<<endl; 

        cout<<"Deseas meter otra frase? (S/N)"; 
        cin>>rpt; 

    } while (rpt=='s'||rpt=='S'); 
    archivo.close(); 
}


int main () {
    pedir(); 
    return 0; 
}