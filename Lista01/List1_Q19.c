#include <stdio.h>

/*Escreva um programa que calcule a raiz de uma equação do primeiro grau
*/

int main(){
//variaveis
float a, b, x;
//inicio
// -b/a=x
printf ("Qual o coeficiente angular da sua equacao?");
scanf ("%f", &a);

printf ("Qual o coefiente independente da sua equacao?");
scanf ("%f", &b);

x = -b/a;
printf ("O valor de x e %f", x);

}