//vamos a aprender a hacer arrays
//ready? lets go
// alguien me sigue?????????
using namespace std;

#include<iostream>
int main(){
    int pepito[5];
    int cont;
    int salir;
    for(cont=0;cont<5;cont++){
       cout<<"dime un numero; ";//output
       cin>>pepito[cont];//input
    }
    cout<<"mira mi vector relleno: "<<endl;
    for(cont=0;cont<5;cont++){
       cout<<"pepito["<<cont<<"]="<<pepito[cont]<<endl;
    }
    cout<<"toca cualquier tecla";
    cin>>salir;
    return 0;
}
