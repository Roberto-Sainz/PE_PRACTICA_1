//3-Escribe un programa en C que calcule el volumen de un prisma rectangular. 
//El programa debe de guiar al usuario paso a paso de manera clara y explicita.

#include<stdio.h>
int main(){
float largo,ancho,altura,volumen;
printf("Ingrese el largo del prisma rectangular\n");
scanf("%f",&largo);
printf("Ingrse el ancho del prisma rectangular\n");
scanf("%f",&ancho);
printf("Ingrese la altura del prisma rectangular\n");
scanf("%f",&altura);
volumen=largo*ancho*altura;
printf("El volumen del prisma rectangular es %fm^3",volumen);

return 0;
}