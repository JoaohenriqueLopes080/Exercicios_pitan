/* Leia dois números inteiros x e y e imprima o sucessor de x e
o antecessor de y, utilizando os operadores de incremento e
decremento*/

#include <stdio.h>

int main() {

    int x, y, sucessorx, sucessory, antecessorx, antecessory;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &x, &y);
    
    sucessorx = x + 1;
    sucessory = y + 1;
    antecessorx = x - 1;
    antecessory = y + 1;

    printf("sucessor de X e Y: %d %d", sucessorx, sucessory);
    printf("antecessor de X e Y %d %d", antecessorx, antecessory);

}