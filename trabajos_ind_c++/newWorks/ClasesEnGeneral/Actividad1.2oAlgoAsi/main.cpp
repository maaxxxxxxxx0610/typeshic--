#include <iostream>
#include "Ordenamiento.hpp"
using namespace std; 





int main () {
int n, arr[100]; 

cout<<"Dime el tamaño del arreglo: "; cin>>n; 
for (int i = 0; i <n; i++) {
    cout<<"Dime el valor en la pos "<<"["<<i<<"]"; 
    cin>>arr[i]; 
}

Ordenamiento ord;

ord.mergeSort(arr,n);  

cout<<"Arreglo ordenado con los metodos disponibles: "; 
for (int i = 0; i< n; i++) {
    cout<<arr[i]<<" "; 
}

return 0; 
}
