
#include<iostream>
using namespace std;
int main(){
    int salir;
    //declaro un nuevo tipo de dato
    struct persona{
        string contacto1;
        int contacto2;
        string contacto3;
    };
    int cont;
    //cerrrar la delcaración
    //declaro una variable de tipo persona
    //personas
    persona contacto[2];
    for(cont=0;cont<2;cont++){
                             cout<<"contacto1: "<<cont<<endl;
                             cout<<"nombre: ";
                             cin>>contacto[cont].contacto1;
                             cout<<"numero telefono:   ";
                             cin>>contacto[cont].contacto2;
                             cout<<"correo electronico:  ";
                             cin>>contacto[cont].contacto3;
                             }
        
     for(cont=0;cont<2;cont++){                          
         cout<<"El contacto "<<cont+1<<" es: "<<contacto[cont].contacto1<<endl;
         cout<<"El numero "<<cont+1<<" es: "<<contacto[cont].contacto2<<endl;
         cout<<"El correo "<<cont+1<<" es: "<<contacto[cont].contacto3<<endl;
         }
     cin>>salir;
     return 0;
                             
}                             
                              
                              


