#include <stdio.h>

//Faça um algoritmo que transforme uma velocidade fornecida em m/s pelo usuário para
//Km/h. Para tal, multiplique o valor em m/s por 3,6. 


int main(){
//variaveis
float km, m;

//inicio
printf ("Opa meu confederado, qual a a velocidade em m/s?");
scanf ("%f", &m);

km = m*3.6;

printf ("Essa velocidade em km/h e %f", km);

}