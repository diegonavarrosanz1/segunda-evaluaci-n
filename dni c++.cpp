#include <stdio.h>
#include <stdlib.h>
/*1. La última letra del DNI puede calcularse a partir de sus números. Para ello sólo tienes que dividir el número por 23 y quedarte con el resto, que es un número entre 0 y 22. La letra que corresponde a cada número la tienes en esta tabla:

[url]http://1.bp.blogspot.com/_Q8bZRv50AcM/SeOb8n092gI/AAAAAAAACSg/jEXYGk3OFOs/s400/letra_DNI.JPG[/url]

Define una función llamada letra_dni que, dado un número de DNI, devuelva la letra que le corresponde. num%23*/

int resto(int x, int resto){
    resto = x%23;
    return resto;
}

int main(){
    int resto,num,x;
    printf("Programa que calcula la letra del DNI.\n\n");
    
    printf ("Introduce un numero:  ");
    scanf ("%i", &num);
    
    resto(x);
    
    
    switch(resto){
      case 0:
        printf ("T");
        break;
      case 1:
        printf ("R");
        break;
      case 2:
        printf ("W");
        break;
      case 3:
        printf ("A");
        break;
      case 4:
        printf ("G");
        break;
      case 5:
        printf ("M");
        break;
      case 6:
        printf ("Y");
        break;
      case 7:
        printf ("F");
        break;
      case 8:
        printf ("P");
        break;
      case 9:
        printf ("D");
        break;
      case 10:
        printf ("X");
        break;
      case 11:
        printf ("B");
        break;
      case 12:
        printf ("N");
        break;
      case 13:
        printf ("J");
        break;
      case 14:
        printf ("Z");
        break;
      case 15:
        printf ("S");
        break;
      case 16:
        printf ("Q");
        break;
      case 17:
        printf ("V");
        break;
      case 18:
        printf ("H");
        break;
      case 19:
        printf ("L");
        break;
      case 20:
        printf ("C");
        break;
      case 21:
        printf ("K");
        break;
      case 22:
        printf ("E");
        break;
      }
    
    
system("PAUSE");
}
