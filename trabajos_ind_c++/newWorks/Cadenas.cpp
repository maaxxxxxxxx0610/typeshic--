#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <cstring>   
#include <cctype>

using namespace std; 


int main (){ 


char frase[100]; 
int vocal_a = 0, vocal_e = 0, vocal_i = 0, vocal_o = 0, vocal_u = 0; 

cout<<"digite una frase: ";
cin.getline(frase,100,'\n'); 


for (int i = 0; i < strlen(frase); i++) {
    char letra = tolower(frase[i]); 
   switch (letra) {
    case 'a': vocal_a++; break; 
    case 'e': vocal_e++; break;
    case 'i': vocal_i++; break; 
    case 'o': vocal_o++; break; 
    case 'u': vocal_u++; break; 

   }
}


cout<<"Vocal a: "<<vocal_a<<endl; 
cout<<"Vocal e: "<<vocal_e<<endl; 
cout<<"Vocal i: "<<vocal_i<<endl; 
cout<<"Vocal o: "<<vocal_o<<endl; 
cout<<"Vocal u: "<<vocal_u<<endl; 








return 0; 
}