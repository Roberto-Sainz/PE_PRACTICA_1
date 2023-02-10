//1-Corrige el siguiente programa para que compile sin errores y que al ejecutarlo, funcione como se espera.

#include <stdio.h>
int main()
{
    int edad, numeroDeSuerte;
    printf("Escribe tu edad: ");
    scanf("%d", &edad);
    printf("Escribe tu numero de la suerte: ");
    scanf("%d", &numeroDeSuerte);
    printf("Eres muy joven a tus apenas %d anos.\n",edad);
    printf("El %d es un numero suertudo.\n",numeroDeSuerte);
    return 0;
}