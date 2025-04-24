#include<stdio.h>

#define tam 10

int main () {


    int i, vetor[10];

    for(i = 0; i < tam; i++) {
        printf("Digite 10 numeros: \n");
        scanf("%f", &vetor[i]);
    }
    printf("%d\n", vetor) // mostra o vetor

    /* 

    */

    for(i = 0; i < tam; i++) {
      vetor[i] = vetor[10--]
    }
    
}   