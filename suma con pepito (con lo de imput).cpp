//vamos a aprender a hacer arrays
//ready? lets go
// alguien me sigue?????????
using namespace std;

#include<iostream>
int main(){
    int pepito[5];
    int cont;
    int salir;
    int suma=0;
    for(cont=0;cont<5;cont++){
       cout<<"dime un numero; "; //output
       cin>>pepito[cont]; //input
    }
    cout<<"la suma vale: ";
    for(cont=0;cont<5;cont++){
       suma=suma+pepito[cont];
    }
    cout<<suma;
    cout<<"toca cualquier tecla; ";
    cin>>salir;
    return 0;
}
