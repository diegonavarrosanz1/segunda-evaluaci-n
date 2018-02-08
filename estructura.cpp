//este programa trata sobre esculturas
#include<iostream>
using namespace std;
int main(){
    //declaro un nuevo tipo de dato
    struct persona{
        string nombre;
        int edad;
        char colorpelo;
    };
    int cont;
    //cerrrar la delcaración
    //declaro una variable de tipo persona
    //personas
    persona amigo[3];
    for(cont=0;cont<3;cont++){
                              cout<<"datos amigos "<<cont;
                              cout<<"como se llama tu amigo:  ";
                              cin>>amigo[cont].nombre;
                              cout<<"cuantos anos tiene;  ";
                              cin>>amigo[cont].edad;
                              cout<<"de que color tiene el pelo:  ";
                              cin>>amigo[cont].colorpelo;
                              }
}
  
