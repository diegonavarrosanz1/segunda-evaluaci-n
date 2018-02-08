//Menu escolar Diego
#include<iostream>
using namespace std;
int main(){
    //declaro un nuevo tipo de dato
    struct menu{
        string plato1;
        string plato2;
        string plato3;
    };
    int cont;
    //cerrrar la delcaración
    //declaro una variable de tipo persona
    //personas
    menu plato[5];
    for(cont=0;cont<5;cont++){
                              cout<<"DIA: "<<cont<<endl;
                              cout<<"Primer plato: ";
                              cin>>plato[cont].plato1;
                              cout<<"Segundo plato:   ";
                              cin>>plato[cont].plato2;
                              cout<<"Postre:  ";
                              cin>>plato[cont].plato3;
                              }
    struct calorias{
        int cplato1;
        int cplato2;
        int cplato3;
        };
    calorias cplato[5];
    for(cont=0;cont<5;cont++){
                              cout<<"Calorias: "<<cont<<endl;
                              cout<<"Calorias primer plato: ";
                              cin>>plato[cont].plato1;
                              cout<<"Calorias segundo plato: ";
                              cin>>plato[cont].plato2;
                              cout<<"Calorias postre: ";
                              cin>>plato[cont].plato3;
                              }
}
