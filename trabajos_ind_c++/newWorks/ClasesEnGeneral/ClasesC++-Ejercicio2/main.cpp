#include "Tiempo.hpp"
#include <iostream>
using namespace std; 

int main () {
    Tiempo tiempoAct (1312412); 
    Tiempo tiempoAyer(13, 45, 20); 

    tiempoAct.mostrar(); 
    tiempoAyer.mostrar(); 

    return 0; 
}