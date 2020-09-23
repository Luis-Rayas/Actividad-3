#include <stdio.h>

#include "funciones.h"

int main(){
    char nombre[100];
    unsigned int edad;
    int num1 , num2, opc;

    printf("Hola mundo\n");
    printf("Ingrese su nombre: \n");
    fgets(nombre, sizeof(nombre), stdin);
    printf("Hola %s\n", nombre);
    printf("Edad: \n");
    scanf("%u", &edad);
    printf("Vas a cumplir %u anios \n", edad + 1);
    printf("Introduce un numero: \n");
    scanf("%d", &num1);
    printf("Introduce otro numero: \n");
    scanf("%d", &num2);
    printf("1. Sumar numeros \n 2. Restar numeros.\n");
    scanf("%d", &opc);
    if(opc == 1)
      printf("la suma total es: %d \n",suma(num1, num2));
    else
       printf("la resta total es: %d \n", resta(num1, num2));    

    return 0;
}