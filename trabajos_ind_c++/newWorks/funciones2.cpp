#include <iostream>
using namespace std; 

void intercambio (int& num1, int& num2) {
    int aux; 
    aux = num1; 
    num1 = num2; 
    num2 = aux; 
}


int main () {


int num1 = 1, num2 = 18; 

cout<<"\nvalor num1: "<<num1; 
cout<<"\nvalor num2: "<<num2; 

intercambio(num1, num2); 

cout<<"\nNuevo valor de num1: "<<num1; 
cout<<"\nNuevo valor num2: "<<num2; 


    return 0; 
}