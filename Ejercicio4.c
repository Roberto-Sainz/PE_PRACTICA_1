//4-Escribe un programa en C que muestre el perímetro de un pentágono a partir de la medida de uno de sus lados. 

#include<stdio.h>
int main(){
float lado1,perimetro;
printf("Inserte El Lado Del Pentagono\n");
scanf("%f",&lado1);
perimetro=lado1*5;
printf("El perimetro del pentagono es %2.f",perimetro);
    return 0;
}