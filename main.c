#include <stdio.h>

int main(){
    char nombre[100];
    unsigned int edad;

    printf("Hola mundo\n");
    printf("Ingrese su nombre: \n");
    fgets(nombre, sizeof(nombre), stdin);
    printf("Hola %s\n", nombre);
    printf("Edad: ");
    scanf("%u", &edad);
    printf("Vas a cumplir %u anios", edad + 1);
    return 0;
}