/* 6) Leia um número inteiro (utilizar uma única variável inteira) de 3
algarismos e imprima apenas o algarismo das dezenas.  */

#include <stdio.h>

int main () {
    int inteiro;

    printf("digite um numero de 3 algorismos(centena): ");
    scanf("%d", &inteiro);
    
    inteiro = (inteiro / 10) % 10;
    printf("O algarismo das dezenas e: %d\n", inteiro);
    return 0;
}