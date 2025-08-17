#include <iostream>
#include <cmath>
using namespace std; 


int main(){
 
    int saldoInicial = 1000, opc, retirar, retiroFinal; 
    int numDedeposito, deposito, persona = 0;
    int deuda = 999; 

cout<<"Bienvenido al cajero seleccione una opcion: ";
cout<<"\n1. retirar";
cout<<"\n2. depostitar";
cout<<"\n3. pagar deuda"; 
cin>>opc; 

switch(opc) {
case 1: 
cout<<"su saldo actual es: "<<saldoInicial<<" "<<"esta apunto de retirar: "; cin>>retirar; 
if (retirar >= saldoInicial) {
    cout<<"no hay suficiente en su cuenta :( ";
} else {
retiroFinal = saldoInicial -= retirar;
cout<<"este es su saldo despues del retiro: "<<retiroFinal<<"$"; 
}
break; 
case 2: 
cout<<"su saldo actual es: "<<saldoInicial<<" "<<"esta apunto de depossitar a: "; cin>>numDedeposito; cin>>deposito; 
if (deposito <= 0) {
    cout<<"no puedes depositar negativos :0"; 
} else if (deposito > saldoInicial){
    cout << "No tienes suficiente saldo para realizar ese depósito.\n";
    } else {
        saldoInicial -= deposito;   
        persona += deposito;        

        cout << "Depositaste $" << deposito << " a la cuenta " << numDedeposito << ".\n";
        cout << "Tu nuevo saldo es: " << saldoInicial<< "$\n";
        cout << "La cuenta destino ahora tiene: " << persona << "$\n";
}
break; 
case 3: 
cout<<"tu saldo actual es: "<<saldoInicial<<" "<<"estas apunto de saldar tu deduda con satanas (pagaras lo q nos debes): "<<deuda<<"$"; 
if (saldoInicial < deuda) {
    cout<<"no te alcanza ff papá";
} else {
    saldoInicial -=deuda; 
    cout<<"\neste es tu saldo despues de la deuda jeje: "<<saldoInicial<<"$"; 
}
break; 
}

return 0; 
}
