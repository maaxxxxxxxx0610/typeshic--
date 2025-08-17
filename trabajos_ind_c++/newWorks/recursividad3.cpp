#include <iostream>
using namespace std; 


int num (int ini, int fin) {
    if (ini == fin) {
        return ini; 
    } else {
        return num(ini, fin-1); 
    }
} 

int main () {

int ini, fin; 
cout<<"Digitame el inicio y el fin: "; 
cin>>ini>>fin;

for (int i = ini; i <= fin; i++ ) {
    cout<<num(i, fin)<<" "; 
}



    return 0; 
}  