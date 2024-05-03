#include <stdio.h>

/*Faça um programa em C que crie e inicialize um array de 20 posições de inteiros com 0
para cada elemento. Imprima o vetor em seguida, indicando a posição e o valor na
posição (um por linha)
*/

int main(){
//variaveis
int vetor[20];
int cont;

//inicio
for (cont = 1; cont <= 20; cont++)
{
    vetor[cont] = 0;
    printf ("vetor %d = %d\n", cont, vetor[cont]);
}


}
