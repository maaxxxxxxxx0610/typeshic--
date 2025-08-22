#include <iostream>
#include <stdlib.h>
using namespace std; 

int **matriz, nfilas, ncol; 

void Datos () {
  cout<<"Dime las filas: "; 
  cin>>nfilas; 

  cout<<"Dime las col: "; 
  cin>>ncol; 

  matriz = new int *[nfilas]; 
  for (int i = 0; i <nfilas; i++) {
    matriz[i] = new int [ncol]; 
  }


  
  cout<<"\nDefiniendo la matriz... "; 


  for (int i = 0; i < nfilas; i++) {
    for (int j = 0;  j < ncol; j++) {
        cout<<"\nDime los valores: "; 
        cin>>*(*(matriz + i)+j); 
    }
  }
}


void Traspuesta (int **matrizlol, int filas, int col) {
    cout<<"\nMatriz original: ";


    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < col; j++) {
          cout<<*(*(matrizlol+i)+j)<<" "; 
        }
         cout<<"\n"; 
    }

    
    cout<<"\nMatriz Traspuesta: "; 
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < col; j++) {
            cout<<*(*(matrizlol+j)+i)<<" "; 
        }
     cout<<"\n"; 
    }
}


int main () {
    Datos(); 
    Traspuesta(matriz, nfilas, ncol); 

    for (int i = 0; i <nfilas; i++) {
        delete[] matriz[i]; 

    }
    delete[] matriz; 

    return 0; 
}
 