#include <stdio.h>

//Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é
//suficientemente longa. Assumindo que seja possível medir sua sombra e a do prédio no
//chão, e que você lembre da sua altura, faça um programa para ler os dados necessários e
//calcular a altura do prédio.

int main(){
//variaveis
float somp, somsua;
float altp, altsua;

//inicio
printf ("Qual o tamanho da sombra do predio, ptagoros?\n");
scanf ("%f", &somp);

printf ("Qual o tamanho da sua sombra?\n");
scanf ("%f", &somsua);

printf ("Qual o seu tamanho?\n");
scanf ("%f", &altsua);

altp = (somp/somsua) * altsua;

printf ("A altura do predio e %f", altp);

}