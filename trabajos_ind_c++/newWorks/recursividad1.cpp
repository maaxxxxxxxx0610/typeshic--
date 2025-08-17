#include <iostream>
using namespace std; 


int sumaRec (int n) {
    if (n ==1 ) {
        n = 1; 
    } else {
        n += sumaRec(n-1); 
    }
 return n; 
}


int main () {
    int numero; 

   do{ 

    cout<<"Dime un numero: "; 
    cin>>numero; 
 }
    while (numero<=0); 
    
    cout<<"La suma es: "<<sumaRec(numero); 
}