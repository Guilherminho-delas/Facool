#include <stdio.h>

int main()
{
//var
int num;
float euler;
float denominador;
int icont, jcont;
    
//inicio
scanf ("%d", &num);

euler = 1;
denominador = 1;

for (icont = 1; icont <= num; icont++)
{
    for(jcont = 1; jcont <= icont; jcont++)
        denominador *= jcont;
    
    euler += 1.0/denominador;

}

printf ("%f", euler);

}
