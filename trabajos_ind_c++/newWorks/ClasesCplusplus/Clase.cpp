#include "Clase.hpp"

Rectangulo::Rectangulo(float _ancho, float _largo) {
    ancho = _ancho; 
    largo = _largo; 
}

float Rectangulo::area(float ancho, float largo) {
    return ancho * largo; 
}

float Rectangulo::perimetro(float ancho, float largo) {
    return (2*ancho) + (2*largo); 
}
 


