//Manejo de punteros // char *pauxiliar; es una variable que me permite vguardar que apuntan a una letras
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int medida(char aux[]){
    int l=0;
    while(aux[l]!='\0'){
          l++;    
    }
    return l;
}

int main(){
     char *lista[5];
     int salir;
     char aux[15];
     int cont;
     int l;
     char *pauxiliar; 
     for(cont=0;cont<5;cont++){
         printf("\nNombre amigo %i: ",cont);
         scanf("%s",aux);  
         l=medida(aux);
         printf(" %i\n",l);
         lista[cont]=(char *) malloc(l*sizeof(char)); 
         strcpy(lista[cont],aux);
     }
     for(cont=0;cont<5;cont++){
         printf("\n%s",lista[cont]);
     }
     //ordenamiento
     for(cont=0;cont<5;cont++){
        if(*lista[0]>*lista[cont+1]){
           pauxiliar=lista[cont];
           lista[cont]=lista[cont+1];
           lista[cont+1]=pauxiliar;
           }
     }
           
           printf("/nToca cualquier tecla: ");
           printf("%i",&salir);
     
     printf("\nToca cualquier tecla: ");
     scanf("%i",&salir);
}
