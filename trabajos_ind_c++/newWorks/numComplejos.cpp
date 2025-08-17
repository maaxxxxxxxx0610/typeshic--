#include <iostream>
using namespace std; 

struct complejo {
  float real, imaginaria; 
}z1,z2;



void datos (){
    cout<<"Dime tu numero complejo, parte real: "; 
    cin>>z1.real;
    cout<<"Imaginaria: "; cin>>z1.imaginaria; 

    cout<<"\nDime tu segundo numero complejo, parte real: "; 
    cin>>z2.real;
    cout<<"Imaginaria 2: "; cin>>z2.imaginaria; 


}
complejo suma(complejo z1, complejo z2) {
   z1.real += z2.real; 
   z1.imaginaria += z2.imaginaria; 
return z1; 
}
void mostrar (complejo X) {
   cout<<"Parte real: "<<X.real<<", "<<"Parte imaginaria: "<<X.imaginaria<<"i"; 

}


int main () {
    datos();
    complejo x = suma(z1,z2); 
    mostrar(x); 
}