#include <stdio.h>


int main () {

    int a1, n, r;
    float an;

    printf("digite o primeiro valor do primeiro termo");
    scanf("%d", &a1);

    printf("Digite a razão De PA");
    scanf("%d", &r);

    printf(" ate que termo você quer o calculo?");
    scanf("%d", &n);

    an = a1 + (n -1) * r;
    
    printf("Calculo Da Pa decimo termo: \n%f", an);

}


/*an = a1 + (n - 1) * r

    Leia a razão de uma PA e o valor do primeiro termo. Calcule e
    imprima o décimo termo da série

Fórmula do termo geral da PA:
an = a1 + (n - 1) * r
an: termo de ordem n
a1: primeiro termo
n: número de termos
r: razão 

Exemplos:
PA: (2, 5, 8, 11, 14) 
r = 5 - 2 = 3 
PA: (10, 7, 4, 1, -2) 
r = 7 - 10 = -3 

*/