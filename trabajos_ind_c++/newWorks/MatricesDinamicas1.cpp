#include <iostream>
#include <stdlib.h>
using namespace std; 

int **matriz,**matriz2, nfilas, ncol; 

void Datos () {
    cout<<"Dime las filas: "; 
    cin>>nfilas; 

    cout<<"Dime las columnas: "; 
    cin>>ncol; 

    matriz = new int *[nfilas]; 
    for (int i = 0; i < nfilas; i++) {
        matriz[i] = new int [ncol]; 
    }

    cout<<"Dime la matriz 1: "; 

    for (int i = 0; i < nfilas; i++) {
        for (int j = 0; j<ncol; j++) {
            cout<<"Dime un num: "; 
            cin>>*(*(matriz + i)+j); 
        }
    }

    //segunda matriz 

    matriz2 = new int *[nfilas]; 
    for (int i = 0; i < nfilas; i++) {
        matriz2[i] = new int [ncol]; 
    }

    cout<<"Dime la matriz 2: "; 

    for (int j = 0; j<ncol; j++) {
            for (int i = 0; i < nfilas; i++) {
            cout<<"Dime un num: "; 
            cin>>*(*(matriz2 + i)+j); 
        }
    }
    

}


void SumarMatrices (int **matriz, int **matriz2, int filas, int col) {
    for (int i = 0; i <filas; i++) {
        for (int j = 0; j <col; j++) {
             *(*(matriz + i)+j) = *(*(matriz + i)+j) + *(*(matriz2 + i)+j); 
        }
    }
}
void mostrar (int **matriz1, int filas, int col) {
    
    for (int i = 0; i <filas; i++) {
        cout<<"\nMatriz resultante: "; 
        for (int j = 0; j < col; j++) {
            cout<<*(*(matriz1 + i)+j)<<" "; 
        }
        cout<<'\n'; 
    }

}


int main () {

Datos(); 
SumarMatrices(matriz, matriz2, nfilas, ncol); 
mostrar(matriz, nfilas, ncol); 

    return 0; 
}