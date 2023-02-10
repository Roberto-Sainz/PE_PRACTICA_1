//Escribe un programa en C que encuentre la medida del tercer lado de un triángulo conociendo dos de sus lados y el ángulo entre ellos.
//El programa debe de guiar al usuario paso a paso de manera clara y explícita.

#include<stdio.h>
#include<math.h>
#define PI 3.14159
int main(){
    float lado1,lado2,angulo,coseno,lado3;
    printf("Inserte la medida del lado 1:\n");
    scanf("%f",&lado1);
    printf("Inserte la medida del lado 2:\n");
    scanf("%f",&lado2);
    printf("Inserte el angulo que hay entre los lados:\n");
    scanf("%f",&angulo);
    //OPERACION
    coseno=cos(angulo*PI/180);
    lado3=sqrt((pow(lado1,2)+pow(lado2,2))-2*lado1*lado2*coseno);
    printf("La medida del lado 3 es >%.2f",lado3);

    return 0; 
}
