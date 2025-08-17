#include <iostream> 
using namespace std; 


void calcAno (int totalDias, int& ano, int& mes, int& dias ) {

 ano = totalDias / 360; 
 totalDias%=360; 
 mes = totalDias/30; 
 totalDias%=30; 
 dias = totalDias; 

}



int main () {

int totalDias, anio, mes, dia; 
cout<<"Digita el num total de dias: "; 
cin>>totalDias;

calcAno(totalDias, anio, mes, dia); 
cout<<"\n"<<anio;
cout<<"\n"<<mes; 
cout<<"\n"<<dia; 





    return 0; 
}