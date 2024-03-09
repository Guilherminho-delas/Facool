#include <stdio.h>

//Faça um algoritmo para calcular a nota semestral de um aluno. A nota semestral é obtida
//pela média aritmética entre a nota de 2 bimestres. Cada nota de bimestre é composta por
//2 notas de provas.

int main(){
//variaveis
float prova1, prova2, prova3, prova4;
float semestre;

//inicio
printf ("Qual foi a nota da primeira prova?\n");
scanf ("%f", &prova1);

printf ("Qual foi a nota da segunda prova?\n");
scanf ("%f", &prova2);

printf ("Qual foi a nota da terceira prova prova?\n");
scanf ("%f", &prova3);

printf ("Qual foi a nota da quarta prova?\n");
scanf ("%f", &prova4);

semestre = (prova1 + prova2 + prova3 + prova4) /2;

printf ("Sua nota semestral foi %f", semestre);

}