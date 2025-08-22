#include <iostream>
#include <string.h>
using namespace std; 

char nomnbre[30], *apunt; 

void pedir() {
    cout<<"Dime tu nombre: "; 
    cin.getline(nomnbre, 30, '\n'); 

    strupr(nomnbre);

}

int contVoc (char *apuntador) {
    int cont = 0; 
    while (*apuntador) {
        switch (*apuntador) {
            case 'A': 
            case 'E': 
            case 'I':  
            case 'O': 
            case 'U':  cont++; 

        }
        apuntador++; 
    }
    return cont; 
}

int main () {



    pedir(); 
    cout<<"Numero de vocales: "<<contVoc(nomnbre)<<endl; 



    return 0; 
}