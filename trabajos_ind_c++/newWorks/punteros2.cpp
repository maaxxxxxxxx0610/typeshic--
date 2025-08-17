#include <iostream>
using namespace std; 

int main () {
    int *apunt, num; 
    apunt = &num;

    cout << "Dime un num: "; 
    cin >> num; 

    int conteo = 0; 
    for (int i = 1; i <= *apunt; i++) {
        if (*apunt % i == 0) {
            conteo++; 
        }
    }

    if (conteo == 2) {
        cout << "Si es primo: " << *apunt;  
    } else {
        cout << "No es primo: " << *apunt; 
    }

    return 0;
}
  