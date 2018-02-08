//Ficheos
#include<iostream>
#include<fstream>

using namespace std;

int main (){
    //vamos a abrir fichero
    ofstream fichero ("miBonitoFichero.txt:");
    fichero<<"En lugar de la Mancho"<<endl;
    fichero<<"De cuyo nombre no quiero...";
    fichero.close();
    cout<<"Ya esta. Fichero cerrado";
    return 0;
}
