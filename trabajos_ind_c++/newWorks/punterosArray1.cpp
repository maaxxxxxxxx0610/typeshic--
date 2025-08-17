#include <iostream>
using namespace std; 

int main () {

    int numeros[10], *dir; 

    for (int i = 0; i < 10; i++) {
        cout<<"Digitame un numero: "<<"["<<i<<"]"; 
        cin>>numeros[i]; 
    }

    dir = numeros; 

    for (int i = 0; i < 10; i++) {
        if (*dir % 2==0) {
            cout<<"\nEs par: "<<*dir; 
            cout<<"\nPos de memoria: "<<dir; 
        } else {
            
        }
        dir++; 
    }

}