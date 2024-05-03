#include <stdio.h>

/*Faça um programa em C que leia um array de 10 posições e conte quantos números pares
são elementos do array. Imprima esta quantidade.
*/

int main(){
//variaveis
int vetor[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int icont;
int par;

//inicio
for (icont = 0; icont < 10; icont++)
{
    if (vetor[icont]%2 == 0)
      par++;
}

printf ("%d", par);

}
