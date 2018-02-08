//manejo de punteros//Mallos: buscar el tamaño libre del hueco que necesito para buscar la palbra melchor// 8 porque tiene 8 letras, sizeof tamaño de la letra(bite)
//&yletra                                // scanf es el equivalente a cint es la manera de coger información por teclado
#include<stdio.h>
#include<stdlib.h>
int main(){
    char *lista[3];
    int salir;
    lista[0]=(char *) malloc(8*sizeof(char));
    lista[1]=(char *) malloc(7*sizeof(char));
    lista[2]=(char *) malloc(9*sizeof(char));
    printf("\nprimer rey mago: ");
    scanf("%s",lista[1]);
    printf("\nsegundo rey mago: ");
    scanf("%s",lista[2]);
    printf("\ntercer rey mago: ");
    scanf("%s",lista[3]);
    printf("\nlos tres reyes: ");
    printf("%s, ",lista[0]);
    printf("%s y ",lista[1]);
    printf("%s",lista[2]);
    printf("\ntoca cualquier tecla para salir: ");
    scanf("%i",&salir);
    
}

