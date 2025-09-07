#ifndef TIEMPO_HPP
#define TIEMPO_HPP

class Tiempo {
 private: 
 int horas, minutos, segundos; 
 public: 
  Tiempo (int, int, int); 
  Tiempo (long); 
  void mostrar(); 
};

#endif