#include<stdio.h>

#define tam 50

int main() {

    int i, vetor[50], num_de_pares = 0, par[50],num_de_impares = 0, impar[50];

     for(i = 0; i < tam; i++) {
        printf("Digite 50 numeros: \n");
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < tam; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            par[i] = vetor[i];
            num_de_pares++;
        } else {
            impar[i] = vetor[i];
            num_de_impares++;
        }
    }
    printf("Sua Lista de Vetor é: %d\n", vetor[i]);
    printf("Sua Lista de Pares é: %d\n", par[i]);
    printf("Sua Lista de Impares é: %d\n", impar[i]);

    // quantidade de numeros.

    printf("Quantidade De Numeros Pares", num_de_pares);
    printf("Quantidade De Numeros Impares", num_de_impares);
}
