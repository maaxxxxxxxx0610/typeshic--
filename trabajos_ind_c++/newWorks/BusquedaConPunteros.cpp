#include <stdlib.h>
#include <iostream>
using namespace std; 

int n, *puntero; 

void pedir () {
   cout<<"Dime el tamaño del arreglo: "; 
   cin>>n; 

   puntero = new int [n]; 

   for (int i = 0; i < n; i++) {
    cout<<"Dime los elementos: "<<"["<<i<<"]"; 
    cin>>*(puntero+i); 
   }
}


void Busqueda (int *algo, int n, int dato) {
    char band = 'F'; 

     int i = 0; 

    while ((band=='F')&&(i < n)){ 
        if (*(algo+i)==dato) {
            band = 'V'; 
        } 
         i++; 
         
    }
    if (band == 'F') {
        cout<<"No encontramos nada"<<endl; 
        
    } else if (band == 'V') {
        cout<<"Encontrado en la Pos: "<<i-1<<endl; 
    }
}



void mostrar (int *punt, int n) {
    cout<<"Mostrando... "; 
    for (int i = 0; i <n; i++) {
        cout<<*(punt + i)<<" "; 
    }
} 

int main() {
    int elemento; 
    cout<<"Dime un elemento a buscae: "; 
    cin>>elemento; 
    pedir(); 
    Busqueda(puntero, n, elemento); 
    mostrar(puntero, n ); 
    delete [] puntero; 
}