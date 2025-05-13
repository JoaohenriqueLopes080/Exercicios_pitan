/*Faça um programa que leia 10 palavras, verifique o tamanho de cada
uma, armazenando os tamanhos em um vetor. Ao final escreva o
vetor, a maior palavra e seu tamanho.

vetor - 10 tam, char
string - 10 tam, char


if - verificar tamanho de cada palavra
*/

#define tam 10

#include<stdio.h>

int main() {
    char string[tam][tam]; // vetor de strings
    int i, j, maior = 0; // controle
    char maior_palavra[tam]; 
    int tamanho[tam]; // vetor de tamanhos

    // leitura de dados
    for (i = 0; i < tam; i++) {
        printf("Digite a palavra: ");
        scanf("%s", string[i]); // leitura de cada palavra
    }
    // verificar tamanho de cada palavra
    for (i = 0; i < tam; i++) {
        for (j = 0; string[i][j] != '\0'; j++) { // laco de repeticao
            tamanho[i] = j; // armazena o tamanho
        }
        if (tamanho[i] > maior) { // verifica se é maior
            maior = tamanho[i]; // atualiza o maior
            for (j = 0; j <= maior; j++) {
                maior_palavra[j] = string[i][j]; // armazena a maior palavra
            }
        }

        printf("Tamanho da palavra %d: %d\n", i + 1, tamanho[i]); // imprime o tamanho
       
        for(i = 0; i < tam; i++){
            printf("%s ", string[i]); // imprime o vetor das palavras
        }
        
        printf("\nA maior palavra é: %s\n", maior_palavra); // imprime a maior palavra
        printf("Tamanho da maior palavra: %d\n", maior); // imprime o tamanho da maior palavra
    }
    


}