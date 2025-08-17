#include <iostream>
using namespace std; 


    
struct Promedio {

    float nota1,nota2,nota3; 

}; 

struct Alumno {

    char nombre[20]; 
    char sexo[20]; 
    int edad; 
    struct Promedio info; 

}alumnos[100];


int main () {


    float prom[100], mayor; 

    int n, pos; 
    cout<<"Dime la cantidad de alumnos: "; 
    cin>>n; 


    for (int i = 0; i < n; i ++) {
        fflush(stdin); 
         cout<<"Dame tu nombre: "; 
         cin.getline(alumnos[i].nombre, 20, '\n'); 
         cout<<"Dame tu sexo: "; 
         cin.getline(alumnos[i].sexo, 20, '\n'); 
         cout<<"Dame tu edad: "; 
         cin>>alumnos[i].edad; 

         cout<<"Digite las notas: "; 
         cin>>alumnos[i].info.nota1; 
         cin>>alumnos[i].info.nota2;
         cin>>alumnos[i].info.nota3; 

         prom[i] = (alumnos[i].info.nota1 + alumnos[i].info.nota2 + alumnos[i].info.nota3)/n; 
         if (prom[i] > mayor) { 
            mayor = prom[i]; 
            pos = i; 
         }
    }


    cout<<"\nAlumno con mejor prom"; 
    cout<<"\nNombre: "<<alumnos[pos].nombre<<endl; 
    cout<<"\nSexo: "<<alumnos[pos].sexo<<endl; 
    cout<<"\nedad: "<<alumnos[pos].edad<<endl; 
    cout<<"\nPromedio: "<<prom[pos]<<endl; 








return 0; 
}
    
    
    
    
    
    