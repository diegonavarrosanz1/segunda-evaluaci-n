//char es una letray stream es una palabr. s es si pero ponemos s porque es una letra (char). L a variable otro representa el deseo, ?desea otro amigo? 

#include<iostream>
#include<fstream>

using namespace std;
      
int main(){
    char otro='s';
    string nombre;
    string numero;
    ofstream agenda("ficheroagenda.txt");
    while(otro=='s'){
      cout<<"Nombre: ";
      cin>>nombre;  
      cout<<"Numero: ";
      cin>>numero;  
      agenda<<nombre<<","<<numero<<endl;             
      cout<<"deseas introducir otro amigo (s/n)?: ";
      cin>>otro;
    }
    return 0;
  
}














                                                                                                                               
