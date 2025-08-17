#include <iostream>
using namespace std; 


int potencia (int x, int y) {
    if (y == 1) {
        y = x; 
    } 
    else  {
        x*=potencia(x, y-1); 
    }
    return x; 
}

int main () {
int num, elev; 

cout<<"Dime un numero y a cuanto lo elevas : "; 
cin>>num>>elev; 
cout<<potencia(num, elev); 



    return 0; 
}