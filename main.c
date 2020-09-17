#include <stdio.h>

int main(){
    char nombre[100];
    printf("Hola mundo\n");
    printf("Ingrese su nombre: \n");
    fgets(nombre, sizeof(nombre), stdin);
    printf("Hola %s\n", nombre);
    return 0;
}