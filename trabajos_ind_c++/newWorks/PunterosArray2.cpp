#include <iostream>
using namespace std; 

int main (){
    int vec[100], *dir, menor = 9999, n, cont = 0, pos; 
    cout<<"Dime de cuanto es tu vec: "; 
    cin>>n; 

    for (int i = 0; i < n; i++) {
        cout<<"Dime los elementos: ", 
        cin>>vec[i]; 
}
dir = vec; 
for (int i = 0; i <n; i++) {
    if (*dir < menor) {
       menor = *dir; 
    }
    dir++; 
}

cout<<"El menor elemento es: "<<menor<<" "<<"posisicion: "<<dir; 

}