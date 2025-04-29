#include<stdio.h>

/*Leia um vetor de 10 posições e mostre-o. A seguir, troque o primeiro
elemento com o último, o segundo com o penúltimo, o terceiro com o
antepenúltimo, e assim sucessivamente. Mostre o vetor após a troca.*/


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