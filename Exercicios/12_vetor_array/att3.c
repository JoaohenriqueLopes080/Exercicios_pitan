#include<stdio.h>

#define tam 10

int main() {

    int i, posicao, menor, vetor[10];

     for(i = 0; i < tam; i++) {
        printf("Digite 10 numeros: \n");
        scanf("%d", &vetor[i]);
    }

     menor = vetor[0];
    for (i = 0; i < tam; i++) {
       if (vetor[i] < menor)
    {
         menor = vetor[i];
         posicao = i;
    }
}
    printf("A posição que esta é : %d\n", posicao);
    printf("O Numero Menor do Vetor é : %d\n", menor);
}