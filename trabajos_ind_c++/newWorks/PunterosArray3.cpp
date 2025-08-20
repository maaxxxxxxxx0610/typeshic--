#include <iostream>
#include <stdlib.h>
using namespace std; 

int n, *elemento; 

void Pedir () {
   cout<<"Dime el numero de elementos del arreglo: "; 
   cin>>n; 

   elemento = new  int [n]; 

   for (int i = 0; i < n; i++) {
    cout<<"Dime los numeros: "<<i;     cin>>*(elemento + i); 
   }
}

void orden (int* elemento, int n) {
   int aux = 0; 
   for (int i = 0; i < n; i++) {
    for (int j = 0; j <n -1; j++) {
        if (*(elemento + j)> *(elemento + j + 1)) {
            aux = *(elemento + j); 
            *(elemento + j) = *(elemento + j + 1); 
            *(elemento + j +1) = aux; 
        }
    }
   }
}
void mostrar (int *punt, int n) { 
    cout<<"Mostrando arreglo... "<<endl; 
    for (int i = 0; i < n; i++) {
        cout<<*(punt + i); 
    }

}

int main () {
    Pedir(); 
    orden(elemento, n); 
    mostrar(elemento, n); 
    delete [] elemento; 
}

