#include "Tiempo.hpp"
#include <iostream>
using namespace std; 


Tiempo::Tiempo(int _hora, int _minuto, int _segundos) {
    horas = _hora; 
    minutos = _minuto; 
    segundos = _segundos;
}


Tiempo::Tiempo(long segundoalong) {
    horas = segundoalong/3600; 
    segundoalong %= 3600; 
    minutos = segundoalong/60; 
    segundoalong %= 60; 
    segundos = segundoalong % 60; 
}

void Tiempo::mostrar() {
    cout<<horas<<":"<<minutos<<":"<<segundos<<endl; 
}