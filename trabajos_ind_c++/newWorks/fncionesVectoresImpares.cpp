#include <iostream>
using namespace std; 
int arr[100], tam; 

void Datos() {

for (int i = 0; i < tam; i++) {
    cout<<i<<" Ingresa los datos :): "; 
    cin>>arr[i]; 
}
}

void Impares (int arr[], int tam) {
    int impares[100] = {}; 
    int j = 0; 
    for (int i = 0; i < tam; i++) {
        if (arr[i]%2!=0) {
            impares[j] = arr[i]; 
            j++; 

        }
        
    } 
    cout<<"elementos del vector: "; 
    for (int i = 0; i < tam; i ++) {
        cout<<impares[i]; 
    }


}


int main () {

    cout<<"Dime el tamanio del vector: "; 
    cin>>tam; 
    Datos(); 
    Impares(arr, tam); 
}