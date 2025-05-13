/* 3) Calcule o MDC entre 2 números inteiros lidos do usuário. */
#include <stdio.h>

int main() {
    int n1, n2, restodiv;

    // Solicita números positivos ao usuário
    do {
        printf("Digite o numero 1: ");
        scanf("%d", &n1);
        printf("Digite o numero 2: ");
        scanf("%d", &n2);

        if (n1 <= 0 || n2 <= 0) {
            printf("Os números devem ser positivos. Tente novamente.\n");
        }
    } while (n1 <= 0 || n2 <= 0);

  
    while (n2 != 0) {
        restodiv = n1 % n2;
        n1 = n2;           
        n2 = restodiv;     
    }

    printf("O MDC entre os dois números é: %d\n", n1);
    return 0;
}