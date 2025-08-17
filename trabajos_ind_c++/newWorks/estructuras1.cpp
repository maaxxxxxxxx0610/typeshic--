#include <iostream>
using namespace std; 


struct info_direccion {

char direccion[20];
char ciudad[20];
char provincia[20]; 

};


struct empleado {

char nombre[20]; 
struct info_direccion dir_empleado;
double salario;  


}empleados[2];


int main(){

for (int i = 0; i <2; i++) {
   fflush(stdin); 
    cout<<"digitame tu nombre: "; 
    cin.getline(empleados[i].nombre, 20, '\n');
    cout<<"Digitame tu direccion: "; 
    cin.getline(empleados[i].dir_empleado.direccion, 20, '\n'); 
    cout<<"ciudad: "; 
    cin.getline(empleados[i].dir_empleado.ciudad, 20, '\n'); 
    cout<<"Provincia: "; 
    cin.getline(empleados[i].dir_empleado.provincia, 20, '\n'); 
    cout<<"Digite su salario: "; 
    cin>>empleados[i].salario;
    cout<<"\n";  
    cout<<'\n'; 
}


for (int i = 0; i < 2; i++) {



  cout<<"Nombre: "<<empleados[i].nombre; 
  cout<<"Direccion: "<<empleados[i].dir_empleado.direccion; 
  cout<<"Tu ciudad: "<<empleados[i].dir_empleado.ciudad; 
  cout<<"Tu provincia: "<<empleados[i].dir_empleado.provincia; 
   if (empleados[i].salario < 100) {
        cout<<"salario pndjo ajhjhsa"; 
    } else {
       cout<<"Tu salario"<<empleados[i].salario; 
  
    }
    cout<<'\n'; 
  
}





    return 0; 
}