#ifndef ORDENAMIENTO_HPP
#define ORDENAMIENTO_HPP

class Ordenamiento
{
    
public:
    void OrdenBurbuja(int a[], int n); 
    void OrdenSeleccion(int a[], int n); 
    void OrdenInsercion (int a[], int n); 
    void mergeSort(int arr[], int n); 
    private: 
    void mergeRec(int arr[], int inicio, int fin); 

    void mezcla(int arr[], int inicio, int medio, int final); 
     
};

#endif