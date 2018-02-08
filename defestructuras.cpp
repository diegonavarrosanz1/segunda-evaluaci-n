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
    //cerrrar la delcaración
    //declaro una variable de tipo persona
    //personas
    persona amigo1;
    persona amigo2;
    persona amigo3;
    cout<<"como se llama tu amigo:  ";
    cin>>amigo1.nombre;
    cout<<"cuantos años tiene;  ";
    cin>>amigo1.edad;
    cout<<"de que color tiene el pelo:  ";
    cin>>amigo1.colorpelo;
  
  
    
}
