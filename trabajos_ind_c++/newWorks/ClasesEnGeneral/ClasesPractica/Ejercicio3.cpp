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
  Estudiante (string, int, string, float); 
  float Promedio (float); 
  void mostrarEst(); 
  
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


Estudiante::Estudiante(string _nombre, int _edad, string _correo, float _nota) {
 setPersona(_nombre, _edad); 
 correoInst = _correo; 
 nota = _nota; 
}




float Estudiante::Promedio(float prom) {

}

void Estudiante::mostrarEst() {
    Ine(); 
    cout<<"correo inst: "<<correoInst<<endl; 
    cout<<"Promedio: "<<nota<<endl;
    cout<<endl;  

}

int main () {
      Persona p1; 
      Estudiante a1("Max", 19, "A01669359", 8.8); 
      cout<<"----Clase hija estudiambre----"<<endl; 
      a1.mostrarEst(); 

    //Persona q es clase padre 
    cout<<"----Clase persona---- "<<endl; 
    p1.setPersona("mOKO", 19); 
    p1.Ine(); 
      

    return 0;
}