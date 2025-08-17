#include <iostream>
using namespace std; 



void cambio (int valor, int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno) {

  cien = valor/100; 
  valor = valor % 100; 
  cincuenta = valor/50; 
  valor = valor % 50; 
  veinte = valor / 20; 
  valor %= 20; 
  diez = valor/10; 
  valor %= 10; 
  cinco = valor/5; 
  valor %= 5; 
  uno = valor; 


}


int main (){


    int valor, cien, cincuenta, veinte, diez, cinco, uno; 

    cout<<"Digita cantidad en dolares: "; 
    cin>>valor; 
    cambio (valor, cien, cincuenta, veinte, diez, cinco, uno); 
    cout<<"\n"<<cien; 
    cout<<"\n"<<cincuenta; 
    cout<<"\n"<<veinte; 
    cout<<"\n"<<diez; 
    cout<<"\n"<<cinco; 
    cout<<"\n"<<uno; 


}



