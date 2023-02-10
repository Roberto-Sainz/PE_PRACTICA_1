//2-Escribe un programa que convierta la cantidad de grados fahrenheit que escribe un usuario a grados centígrados y muestra el resultado de manera clara. 

#include<stdio.h>
int main(){
float fahrenheit,centigrados;
printf("Inserte la cantidad de grados fahrenheit\n");
scanf("%f",&fahrenheit);
centigrados=(fahrenheit-32)/1.8;
printf("\nLa cantidad de grados fahrenheit %f en grados centigrados es %.2f",fahrenheit,centigrados);
return 0;
}