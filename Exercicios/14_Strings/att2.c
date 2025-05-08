/* Faça um programa que leia um caractere C e uma string S. 
    O programa deve armazenar, em um vetor V, os índices onde C 
    aparece em S. Ao final, imprima o vetor. */

#include <stdio.h>

int main() {
     int i, cont = 0, V[30];
     char s[30], c;

     printf("Digite um valor para C: ");
     scanf("%c", &c);

     printf("Digite uma string para S: ");
     scanf(" %s", s);

     for (i = 0; s[i] != '\0'; i++) {
          if (s[i] == c) {
                V[cont] = i; 
                cont++;
          }
     }

     printf("Índices onde '%c' aparece em S: ", c);
     for (i = 0; i < cont; i++) {
          printf("%d ", V[i]);
     }

     return 0;
}