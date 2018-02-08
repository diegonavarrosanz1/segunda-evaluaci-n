//lectura hasta el final, if stream(para abrir un fichero y volcarlo),// #include<iostream> escribir en la pantalla y leer por teclado cout, cin ...
//#include<fstream> todo lo que tiene que ver con ficheras// explica que hace esta instrucción el el ordena, el comando if stream busca la ruta que yo le indice
//fetline coge la primera linea del word, la lea y la coge como variable //fichero.eof marca del final
#include<iostream>
#include<fstream> 
#include<string>
using namespace std;
int salir;
int main(){
    string linea;
    string nombre;
    int salir;
    cout<<"dime la ruta del fichero: ";
    getline(cin,nombre);
    ifstream fichero(nombre.c_str());
    if(fichero.fail()==1){
       cout<<"errror. no existe la ruta";
       cin>>salir;
       exit(1);                   
    }
    while(fichero.eof()==0){
     getline (fichero,linea);
     cout<<linea<<endl;
   }
   fichero.close();
   cin>>salir; 
   return 0;
  
   
}
