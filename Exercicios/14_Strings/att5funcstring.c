#include<stdio.h>
#include<string.h>


/*Faça um programa que leia uma string de até 30 caracteres, gere uma
cópia e substitua, na cópia, os espaços em branco por *. Ao final,
escreva a cópia o número de posições alteradas.*/

#define tam 30
int main() {

    int i = 0, j = 0, cont = 0; 
    char string[tam]; 
    char copiastring[tam];

    printf("Digite 30 Caracteres");
    fgets(string, sizeof(string), stdin);

    printf("Lista completa: %s", string);

    // copia com espaço em branco

    strcpy(string, copiastring);

    for (i = 0; i = 0; i < tam && copiastring[i] != '\0'; i++)
    {
        if (copiastring[i] == ' ')
        {
            copiastring[i] = '*';
            cont++;
        }
    }
    
    printf("Espaços em Branco : %d", cont);
    printf("string com partes em branco: %s", copiastring);


    


}