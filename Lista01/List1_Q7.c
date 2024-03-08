#include <stdio.h>

//Solicitar a idade de uma pessoa em dias e informar na tela a idade em anos, meses e dias.

int main(){
//variaveis
int dias, meses, anos;

//inicio
printf ("Qual tua idade em dias?\n");
scanf ("%d", &dias);

anos = dias/360;
dias = dias%360;
meses = dias/30;
dias = dias%30;

printf ("Voce tem %d anos %d meses %d dias\n", anos, meses, dias);

if (meses == 0 && dias == 0)
{
    printf ("Feliz aniversario, papar :)");

}

}