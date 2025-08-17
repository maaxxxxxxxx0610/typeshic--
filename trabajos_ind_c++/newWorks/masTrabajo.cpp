#include <iostream>
#include <cmath>
using namespace std; 

int main () {

int opc, examenes; 

    cout<<"bienvenido al sistema de alumnos :)"; 
    cout<<"\n1. alumnos que reprobaron";
    cout<<"\n2. alumnos que aprobaron el examen";
    cout<<"\n3. alumnos que aprobaron con excelencia (para pasar bien necesitas 10)";
    cin>>opc; 

    switch (opc)
    {
    case 1:
      cout<<"examen a revisar: "; cin>>examenes; 
    for (int i = 0; i <=6 ; i ++) { 
       if (examenes == i) {
        cout<<"\nCreo que reprobo jaj q pendejo: "<<examenes; 
       }
       }
        break;
    case 2:
    cout<<"Ingrese el valor a ver: "; cin>>examenes; 

    for (int i = 6; i >= 6 ; i ++) {
       if (examenes == i) {
        cout<<"\npaso con: "<<examenes; 
        break;   
       }else if (examenes < i) {
        cout<<"no reconozco tu mmda"; 
        break; 
       }
       } 
    break; 
    case 3: 
    cout<<"ingrese la calif (tiene q ser 10 sino mejor chupala)"; cin>>examenes; 
    for (int i = 1; i<= 10; i++ ) {
        if (examenes == 10 && i == 10) {
            cout<<"tiene 10, 100% verificado: "<<examenes; 
            break; 
        }
    }
     


    
    default:
        break;
    }
}