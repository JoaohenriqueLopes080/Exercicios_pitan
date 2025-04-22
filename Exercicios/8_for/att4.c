/* Leia um valor inteiro n e verifique se este valor é primo. Se não for,
deve ser apresentada a lista dos divisores de n. */

#include<stdio.h>

int main() {
    int valor, divn = 0;

    printf("Digite o valor: ");
    scanf("%d", &valor);

    if (valor <= 1) { // se valor é menor ou igual a 1 
        printf("Não é primo\n"); //não é primo
        return 0;
    }

    for (int i = 1; i <= valor; i++) {//int i dentro de for, i <= valor
        if (valor % i == 0) { // se valor dividido por i == 0 == não primo;
            divn++; //divisor aumenta
        }
    }

    if (divn == 2) { // se o divisor igual a 2 é primo
        printf("É primo\n");
    } else {
        printf("Não é primo. Divisores: ");
        for (int i = 1; i <= valor; i++) {
            if (valor % i == 0) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    return 0;
}