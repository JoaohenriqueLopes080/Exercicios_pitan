/*Faça um programa que leia uma string de até 30 caracteres, gere uma
cópia e substitua, na cópia, os espaços em branco por *. Ao final,
escreva a cópia o número de posições alteradas.*/

#include<stdio.h>
#include<string.h>

#define tam 30

int main() {
    char string[tam], copiastring[tam];
    int cont = 0, i = 0, j = 0;

    for(i = 0; i < tam; i++){
        printf("Digite uma letra");
        scanf(" %c", &string[i]);
    }

      // copia
      // enquanto i menor que tam[30] &&/EE posição i da string diferente de \0 
    for(i = 0; i < tam && string[i] != '\0'; i++) {
        if (string[i] == ' ') {
            copiastring[i] = '*';
            cont++;
        } else {
            copiastring[i] = string[i];
        }
    }
    copiastring[i] = '\0'; // Finaliza a string copia

    printf("String original %s\n", string);
    printf("String copia * %s\n", copiastring);
    printf("Posições alteradas %d\n", cont);
}