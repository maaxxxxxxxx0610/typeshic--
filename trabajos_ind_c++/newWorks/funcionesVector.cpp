#include <iostream>
using namespace std; 


int vec[100], tam;

int sumaArr (int arr[], int Tam) {
    int suma = 0; 
    for (int i = 0; i < Tam; i++) {
        suma += arr[i]; 
    }

    return suma; 

}


void Datos (){
    cout<<"Digite los elementos del vector: "; 
    cin>>tam; 

    for (int i = 0; i < tam; i++) {
        cout<<i<<". Digita los elementos"; 
        cin>>vec[i]; 
    }
}


 

int main () { 

  Datos(); 
  cout<<"La suma de los elementos: "<<sumaArr(vec, tam); 

}