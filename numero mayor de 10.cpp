/*Este programa sirve para leer por teclado 10 n�meros enteros y devolver el mayor*/
#include<iostream>

int main(){
    //Definici�n de variables//
    int cont;
    int numero;
    int mayor;
    int salir;
    
    //Bucle de tipo for cont=cont+1 es lo mismo cont++//
    //for(cont=10;cont>=0;cont--){
    std::cout<< "dime un numero entero";
    std::cin>>numero;                                                        
    mayor=0;
    for(cont=1;cont<=10;cont++){
          std::cout<< "dime un n�mero entero: ";
          std::cin>>numero;
          if(numero>mayor){
             mayor=numero;
          }
    }
    std::cout<<"el mayor es: "<<mayor;
    std::cout<<"toca cualquier tecla:";     
    std::cin>>salir;
    return 0;
}        
