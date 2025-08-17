#include <iostream>
using namespace std; 



void tiempo (int totalSeg, int& horas, int& minutos, int& segundos) {

  horas = totalSeg / 3600;
    totalSeg %= 3600;

    minutos = totalSeg / 60;
    totalSeg %= 60;

    segundos = totalSeg;

}


int main () {

   int totalSeg, horas, min, seg; 

   cin>>totalSeg; 
   tiempo(totalSeg, horas, min, seg); 
   cout<<"\n"<<horas; 
   cout<<"\n"<<min; 
   cout<<"\n"<<seg; 




    return 0;    
}