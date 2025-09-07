#ifndef RECTANGULO_HPP
#define RECTANGULO_HPP

class Rectangulo {
   private: 
   float largo; 
   float ancho;
   public: 
   Rectangulo(float _largo, float _ancho); 
   float perimetro(float l, float a); 
   float area(float l, float a); 
}; 

#endif