/* Leia um vetor de 10 posições e mostre-o. A seguir, troque o primeiro
    elemento com o último, o segundo com o penúltimo, o terceiro com o
    antepenúltimo, e assim sucessivamente. Mostre o vetor após a troca. */
#include <stdio.h>
#define TAM 10

int main() {
     int i = 0, temp, vetor[TAM];

     // Leitura do vetor
     printf("Digite 10 numeros:\n");
     for (i = 0; i < TAM; i++) {
          scanf("%d", &vetor[i]);
     }

     // Mostrando o vetor original
     printf("Sua Lista de Vetor é: ");
     for (i = 0; i < TAM; i++) {
          printf("%d ", vetor[i]);
     }
     printf("\n");

     // Trocando os elementos
     for (i = 0; i < TAM / 2; i++) {
          temp = vetor[i];
          vetor[i] = vetor[TAM - i - 1];
          vetor[TAM - i - 1] = temp;
     }

     // Mostrando o vetor após a troca
     printf("Sua Lista de Vetor apos a Troca: ");
     for (i = 0; i < TAM; i++) {
          printf("%d ", vetor[i]);
     }
     printf("\n");

     return 0;
}