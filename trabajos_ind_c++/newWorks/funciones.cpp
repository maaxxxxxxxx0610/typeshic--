#include <iostream>
#include <cmath>
using namespace std; 

double maximo (int n) {
   double mayor, numeros[100]; 
    for (int i = 0; i < n; i++) {
     cout<<"Dame los numeros y determino el mayor: ";
     cin>>numeros[i]; 
       
    }

    for (int i = 0; i < n; i++) {
        if (numeros[i] > mayor) {
             mayor = numeros[i]; 
        }
    }
  return mayor; 
} 


int main () {


cout<<maximo(3); 


    return 0; 
}