#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cmath>
#include <cstring>
using namespace std; 


int main () { 

int numeros [3][3] = {
  {1, 2, 1}, 
  {2, 1, 1}, 
  {2, 1, 2}
}; 
int numeros2 [3][3] = {
  {3, 2, 1}, 
  {2, 3, 1}, 
  {1, 1, 3}
};  
int R[3][3]; 


for (int i = 0; i < 3; i++) {
  for (int j = 0; j < 3; j++) {
   R[i][j] = 0; 
   for (int k = 0; k< 3; k++) {
   R[i][j] += numeros[i][k]*numeros2[k][j]; 
    } 
  }
}

for (int i = 0; i < 3; i++) {
  for (int j = 0; j < 3; j++) {
   cout<< R[i][j]<<"\t";  
  }
  cout<<endl; 
} 

return 0; 
} 