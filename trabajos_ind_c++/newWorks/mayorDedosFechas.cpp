#include <iostream>
using namespace std; 

struct fecha {
  int dia, mes, ano; 
}f1,f2; 

void Datos(){
    cout<<"Dime el dia: "; 
    cin>>f1.dia; 
    cout<<"el mes: "; 
    cin>>f1.mes; 
    cout<<"Dime el anio: "; 
    cin>>f1.ano; 

    cout<<"\nDime el dia: "; 
    cin>>f2.dia; 
    cout<<"el mes: "; 
    cin>>f2.mes; 
    cout<<"Dime el anio: "; 
    cin>>f2.ano; 
 
}
 fecha mayor (fecha f1, fecha f2) {
   fecha maior; 
   if ((f1.dia >= f2.dia) && (f1.mes >= f2.mes) && (f1.ano >= f2.ano)) { 
    maior = f1; 
 } else { 
     maior = f2; 
 } 
  return maior; 
}
void muestra (fecha x) {
    cout<<"La fecha mas reciente es: "<<x.dia<<"/"<<x.mes<<"/"<<x.ano<<endl; 
}

 int main () {
    Datos(); 
    if ((f1.dia>32)&&(f1.mes>13)&&(f1.ano>30)) {
    cout<<"No son fechas validas lol"; 
   } else {

    fecha x = mayor(f1, f2); 
    muestra (x); }
 }