
#include <iostream>
using namespace std;


int main (){

int x, y, aux; 

cout<<"x: "; cin>>x; 
cout<<"y: "; cin>>y; 

aux = x; 
x = y; 
y = aux; 


cout<<"el nuevo valor de x es:  "<<x<<endl; 
cout<<"el nuevo valor de y es: "<<y<<endl; 


}