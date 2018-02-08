#include<iostream>
using namespace std;

int main(){
    int vect1[5];
    int vect2[5];
    int cont;
    int suma[5];
    int salir;
//Rellenamos los vectores
    cout<<"Dictame el primer vector" <<endl; 
    for (int cont=0;cont<5;cont++){
      cout<<"Dime un numeor"<<endl; 
      cin>>vect1[cont];
    }  
    cout<<"Dictame el segundo vector" <<endl; 
        for (int cont=0;cont<5;cont++){
        cout<<"Dime un numeor"<<endl; 
        cin>>vect2[cont];
    }  
    cout<<"La suma vale"<<endl;
    for (int cont=0;cont<5;cont++){
      suma[cont]=vect1[cont]+vect2[cont];
      cout<<suma[cont]<<"],[";
    
    }
    cout<<"Presiona para salir y luego ENTER ";
    cin>>salir;
    return 0;
    
}
