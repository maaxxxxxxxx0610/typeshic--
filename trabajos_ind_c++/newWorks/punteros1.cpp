#include <iostream> 
using namespace std; 

int main () {
    int num,*almac; 
almac = &num; 

    cout<<"Digitame un numero y te digo si es par o impar: "; 
    cin>>num; 
    
    if (num%2==0) { 
        cout<<"Es par: "<<*almac<<endl; 
    } else {
        cout<<"Es impar: "<<almac; 
    }


}