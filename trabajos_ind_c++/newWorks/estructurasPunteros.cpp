#include <iostream>
using namespace std; 



struct Alumno {
   char nombre[20]; 
   int edad; 
   float promedio; 
 } Alumnos[3], *Puntero = &Alumnos[3]; 

void Datos() {
   for (int i = 0; i < 3; i++) {
    fflush(stdin); 
   cout<<"Dime el nombre del alumno: "; 
   cin.getline((Puntero+i)->nombre, 30, '\n');
   cout<<"Dime tu edad: "; 
   cin>>(Puntero+i)->edad; 
   cout<<"Dime la calif del alumno: "; 
   cin>>(Puntero+i)->promedio; 
} 

}


void mayorDeTodosyMostrar(Alumno *P) {
    float mayor = 0.0; 
    int pos; 
    
   for (int i = 0; i < 3; i++) {
    if (P->promedio>mayor) {
        mayor = P->promedio; 
        pos = i; 
    }
   }
   cout<<"\nEl mayor alumno de este fokin hp dia es: "<<endl; 
   cout<<(P+pos)->nombre<<endl; 
   cout<<(P+pos)->edad<<endl; 
   cout<<(P+pos)->promedio<<endl; 

}






int main () {
    Datos(); 
    mayorDeTodosyMostrar(Puntero); 
return 0; 
}