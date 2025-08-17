/*📝 Ejercicio: Cajero Automático Mejorado
Enunciado:
Crea un programa en C++ que simule un cajero automático simple.

Debe cumplir:

El usuario tiene un saldo inicial (por ejemplo, $1500).

El programa debe mostrar un menú con opciones:

1️⃣ Consultar saldo

2️⃣ Depositar dinero

3️⃣ Retirar dinero

4️⃣ Salir

Si se deposita, sumar al saldo.

Si se retira:

Verificar que haya saldo suficiente.

Mostrar en cuántos billetes de $500, $200, $100 y $50 se entregará el dinero (usa una función para calcular esto).

El menú debe repetirse hasta que el usuario elija salir.

Usa funciones para cada opción del menú.*/

#include <iostream>
using namespace std; 

int opc, saldoInicial = 1500, deposito, retirar, b500, b200, b100, b50; 

void SaldoI (int& SaldoI) {
    cout<<"\nTu saldo actual es: "<<SaldoI; 
}
void Deposito (int& saldo) {
  saldo += deposito; 
  cout<<"Tu saldo despues del deposito: "<<saldo; 
}

void calcBi (int retiro, int& b500, int& b200, int& b100, int& b50) {
  saldoInicial -= retiro; 
 b500 = retiro/500; 
 retiro%=500; 
 b200 = retiro/200; 
 retiro%=200;
 b100 = retiro/100; 
 retiro %= 100; 
 b50 = retiro/50; 
 retiro%=50;  



}


int main (){

cout<<"\n--- MENU ---"; 
cout<<"\n1. Consultar saldo";
cout<<"\n2. Depositar"; 
cout<<"\n3. Retirar"; 
cout<<"\n4. Salir "; 
cin>>opc; 

switch (opc)
{
case 1:
   SaldoI(saldoInicial); 
    break;
case 2: 
cout<<"Selecciona cantidad a depositar: "; 
cin>>deposito; 
Deposito(saldoInicial); 
SaldoI(saldoInicial); 
 break; 
 case 3: 
 cout<<"Selecciona cantidad a retirar y te damos el cambio en billetes de a 500, 200, 100, 50: "; 
 cin>>retirar; 
 if (retirar > saldoInicial) {
    cout<<"No se puede hacer eso, tienes mas de lo q se puede retirar :/ "; 
  } else {
calcBi(retirar ,b500, b200, b100, b50); 
cout<<"\nbilletes de 500: "<<b500; 
cout<<"\nbilletes de 200: "<<b200; 
cout<<"\nBilletes de 100: "<<b100; 
cout<<"\nBilletes de 50: "<<b50; }
SaldoI(saldoInicial); 
break; 
case 4: 
cout<<"Saliendo... Gracias :) "; 
break; 

}

    return 0; 
}

 