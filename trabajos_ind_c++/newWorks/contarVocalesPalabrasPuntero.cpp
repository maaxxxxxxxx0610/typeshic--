#include <string.h>
#include <iostream>
using namespace std; 



char nombre[30], *apunt; 


void Palabra () {
    cout<<"Dime una palabra: "; 
    cin.getline(nombre, 30, '\n'); 

    strupr(nombre); 
}

void contVoc (char *nombre) {
    int vocal_a = 0, vocal_e = 0, vocal_i = 0, vocal_o = 0, vocal_u = 0; 
while (*nombre)//mientras no sea nulo 
{ switch(*nombre)
{
case 'A': vocal_a++; break; 
case 'E': vocal_e++; break; 
case 'I': vocal_i++; break; 
case 'O': vocal_o++; break; 
case 'U': vocal_u++; break; 

}
nombre++; 
}
cout<<"El conteo de A: "<<vocal_a<<endl; 
cout<<"El conteo de E: "<<vocal_e<<endl; 
cout<<"El conteo de I: "<<vocal_i<<endl; 
cout<<"El conteo de O: "<<vocal_o<<endl; 
cout<<"El conteo de U: "<<vocal_u<<endl; 

}


int main () {
    Palabra(); 
    contVoc(nombre); 
}

