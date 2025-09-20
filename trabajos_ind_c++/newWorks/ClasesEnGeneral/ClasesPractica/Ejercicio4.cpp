#include <iostream>
using namespace std; 

class Animal {
  private: 
  int edad;
  public: 
  Animal(int);   
  virtual void comer(); 
};

class Persona : public Animal {
  private: 
  string nombre; 
  public: 
  Persona(int, string); 
  void comer(); 
};


class Perro : public Animal {
    private: 
    string nombre, raza; 
    public: 
    Perro(int, string, string); 
    void comer(); 
}; 

Animal::Animal(int _edad) {
    edad = _edad; 
}

void Animal::comer () {
    cout<<"Yo como :)"<<endl; 
}

Persona::Persona(int _edad, string _nombre) : Animal(_edad) {
 _nombre = nombre; 
} 

void Persona::comer() {
    cout<<"Estoy comiendo sentado en una silla :=)"<<endl; 
}

Perro::Perro(int _edad, string _raza, string _nombre) : Animal(_edad) {
    nombre = _nombre; 
    raza = _raza; 
}

void Perro::comer() {
    cout<<"Soy un perro y como en el suelo :)))"<<endl; 
}

int main () {
Animal *cosas[3]; 

cosas[0] = new Animal(3); 
cosas[1] = new Persona(19, "Max"); 
cosas[2] = new Perro(3, "San Bernardo", "pello"); 

cosas[0]->comer(); 
cosas[1]->comer(); 
cosas[2]->comer(); 


    return 0; 
}



