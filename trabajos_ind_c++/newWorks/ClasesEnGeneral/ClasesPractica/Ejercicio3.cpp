#include <iostream>
using namespace std; 

class Persona {
  private: 
  string nombre; 
  int edad; 
  public: 
   Persona();
    void setPersona(string _name, int _edad);
    string Getname();
    int GetAge();
    void Ine();
}; 

class Estudiante : public Persona{
  private: 
  string correoInst; 
  float nota; 
  public: 
  Estudiante (string, int, string); 
  int PromedioAcumulado (int); 
  void mostrarEst(); 
  
}; 

class Empleado : public Persona {
   private: 
   float sueldo; 
   public: 
   Empleado(string, int, float); 

   void mostrarEmpleado(); 


};



Persona::Persona(){

}

void Persona::setPersona(string _name, int _age) {
   nombre = _name; 
    edad = _age; 
}

string Persona::Getname() {
    return nombre; 
}

int Persona::GetAge() {
    return edad; 
}


void Persona::Ine() {
    cout<<"Nombre: "<<Getname()<<endl; 
    cout<<"Edad: "<<GetAge()<<endl; 
}

Empleado::Empleado(string _nombre, int _edad, float _sueldo) {
   setPersona(_nombre, _edad); 
   sueldo = _sueldo; 
}

void Empleado::mostrarEmpleado() {
    Ine(); 
    cout<<"Sueldo: "<<sueldo<<endl; 
}




Estudiante::Estudiante(string _nombre, int _edad, string _correo) {
 setPersona(_nombre, _edad); 
 correoInst = _correo; 
}




int Estudiante::PromedioAcumulado(int n) {
  int a[100], prom = 0, suma = 0; 


  for (int i = 0; i  <n; i++) {
    cout<<"Dime la nota del estudiante: "<<"["<<i<<"]"; 
    cin>>a[i]; 
    suma += a[i]; 
  }
 prom = suma/n; 

 cout<<"promedio acumulado: "<<prom<<endl; 

 return prom;  

}

void Estudiante::mostrarEst() {
    Ine(); 
    cout<<"correo inst: "<<correoInst<<endl; 
    PromedioAcumulado(5); 

    cout<<endl;  

}

int main () {
      Persona p1; 
      Estudiante a1("Max", 19, "A01669359"); 
      Empleado e1("Litzi", 25, 1800); 


      
    //Persona q es clase padre 
    cout<<"----Clase persona---- "<<endl; 
    p1.setPersona("mOKO", 19); 
    p1.Ine(); 

    cout<<"---Clase Empleado---"<<endl; 
    e1.mostrarEmpleado(); 

    cout<<"----Clase hija estudiambre----"<<endl; 
      a1.mostrarEst(); 


      

    return 0;
}