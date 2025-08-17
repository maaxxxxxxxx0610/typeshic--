#include <iostream>
using namespace std; 

int matriz[100][100], nfilas, ncol; 

void DatosM () {
    for (int i = 0; i < nfilas; i++) {
        for (int j = 0; j < ncol; j++) {
            cout<<"Dime los elementos: "; 
            cin>>matriz[i][j]; 

        }
    }
}


void motrarM(int m[][100], int filas, int columnas) {
    for (int i =0; i < filas; i++) {
        for (int j = 0; j<columnas; j++) {
            cout<<m[i][j]; 
        }
        cout<<'\n'; 
    }
}
void simetria (int m[][100], int filas, int columnas) {
    int contador = 0; 
    if (filas != columnas) {
        cout<<"No es cuadrada: "; 
    } else {

    for (int i = 0; i < filas; i ++) {
        for (int j = 0; j < columnas; j++) {
           if (m[i][j]==m[j][i]) {
            contador ++; 
           }
        }
    cout<<"\n"; 
    }
if (contador == filas*columnas) {
    cout<<"es simetrica :(";
} else {
    cout<<"no jhsjha";
}
 }
}



int main () {
    cout<<"Dime el num de filas y de columnas: ";
    cin>>nfilas; 
    cin>>ncol;
    DatosM(); 
    motrarM(matriz, nfilas, ncol); 
    simetria(matriz, nfilas, ncol); 


}


