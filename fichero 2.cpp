//Ficheos
#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string mensaje;
    int salir;
    ifstream fichero("miBonitoFichero.txt");
    fichero>>mensaje;
    cout<<mensaje<<end;
    fichero.close();//no es obligatorio
    cin>>salir;
    return 0;
}
