#include <iostream>
using namespace std;   


int m[100][100], nfilas, ncol;  

void Datos () {
    cout<<"DIME LAS FILAS: "; 
    cin>>nfilas; 
    cout<<"DIME LAS COLUMNAS: "; 
    cin>>ncol; 

    for (int i = 0; i < nfilas; i++) {
        for (int j = 0; j <ncol; j++) {
            cout<<"Dime los datos lol: "; 
            cin>>m[i][j]; 
        }
    }
     for (int i = 0; i < nfilas; i++) {
        for (int j = 0; j <ncol; j++) {
            cout<<m[i][j]; 
        }
        cout<<'\n'; 
    }
}


int comprobarMenor (int m[][100], int nfilas, int ncol) {
    int fila; 
    int menor = 99999; 
    cout<<"\n un numero de fila para comprobar menor elemento: "; 
    cin>>fila; 
    for (int i = 0; i <nfilas; i++) {
        for (int j = 0; j< ncol; j++) {
            if (i == fila) { 
                if (m[i][j] < menor ) {
                    menor = m[i][j]; 
                }

            }
        }
    }
    return menor; 

}



int main () {

 Datos();
cout<<"el menor elemento es: "<<comprobarMenor(m, nfilas, ncol); 


    return 0; 
}