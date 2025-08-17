#include <iostream>
using namespace std;




int vec[100], tam;


void datos () {
    cout<<"Digite el tamanio: "; 
    cin>>tam;  

    for (int i = 0; i < tam; i++) {

        cout<<"Elementos: "; 
        cin>>vec[i]; 
    }

}

void ordenamiento (int arr[], int TAM) {

char bandera = 'F';
int i = 0;
while ((bandera == 'F') && (i<TAM-1)) {
if(arr[i] > arr[i+1]) {
    bandera = 'V'; 

} i ++; }
if (bandera == 'F') {
    cout<<"El arreglo esta ordenado, crecientemente :0 "; 
}
else { 
    cout<<"No esta oredenado buuu zorro";
}

}

 



int main () {

 datos(); 
 ordenamiento(vec, tam); 

}