#include "Ordenamiento.hpp"
#include <algorithm>
 

void Ordenamiento::OrdenBurbuja(int a[], int n) {
    int i, j, aux; 
    bool inter = true; 
    for (i = 0; i<n-1 && inter; i++) {
        inter = false;//no, encontro desorden lmao
        for (j = 0; j < n-i-1; j++) {
            if (a[j]> a[j+1] ) {
                aux = a[j]; 
                a[j] = a[j+1]; 
                a[j+1] = aux; 
            }
        }
    }
}

void Ordenamiento::OrdenSeleccion(int a[], int n) {
    int min, i,j,aux; 
    for (int i = 0; i < n-1; i++) {
         min = i; 
         for (j = i+1; j <n; j++) 
            if (a[j]< a[min]) 
            min = j; 
            if (min != i) {
            aux = a[i]; 
            a[i] = a[min]; 
            a[min] = aux; 
         }
    
  }
}

void Ordenamiento::OrdenInsercion(int a[], int n) {
    int i,j,pos,aux; 

    for (i = 0; i < n; i++) {
        pos = i; 
        aux = a[i]; 
        while ((pos > 0) && (a[pos-1]>aux)) {
           a[pos] = a[pos-1]; 
           pos--; 
        }
        a[pos] = aux; 
    }
}

//--------Merge SOrt----------
void Ordenamiento::mergeSort(int a[], int n) {
    mergeRec(a, 0, n-1); 
}

void Ordenamiento::mergeRec(int a[], int primero, int ultimo) {
    int medio; 
    if (primero < ultimo) {
        medio = ((primero+ultimo)/2); 
        mergeRec(a, primero, medio); 
        mergeRec(a, medio+1, ultimo); 
        mezcla(a, primero, medio, ultimo); 
    }
}


void Ordenamiento::mezcla(int a[], int inicio, int medio, int fin) {
  int *aux; 
  int i, k,z; 
  aux = new int [fin-inicio+1]; 
  i  = inicio; 
  k = medio +1;
  z = 0;  
  while (i <= medio && k <=fin) {
    if (a[i]< a[k]) {
        aux[z++] = a[i++]; 
    } else {
        aux[z++] = a[k++]; 
    }
  }

  while (i <= medio) aux[z++] = a[i++]; 

  while (k <= fin) aux[z++] = a[k++]; 
  
  for (int x = 0; x < z; x++) {
    a[inicio+x] = aux[x]; 
  }

  delete[] aux; 

}



