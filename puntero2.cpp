//Programas sobre manejo de memoria// float para poner numero con decimales//para que te de una letra// un puntero es una variable que nos sirve para guardar posiciones de memoria          
#include<stdio.h>
int main(){
    char palabra1[5];
    char palabra2[5];
    int salir;
    printf("dime algo: ");
    scanf("%s", palabra1);
    printf("dime algo mas: ");
    scanf("%s", palabra2);
    printf("dirección palabra1 = %x ",palabra1);
    printf("palabra1 = %c\n",*(palabra1+1));
    printf("dirección palabra2 = %x ",palabra2);
    printf("palabra2 = %c ",*(palabra2+1));
    scanf("%i",&salir);
}
 
