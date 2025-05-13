/*Faça uma função que leia uma string, e 2 caracteres c1 e c2. A função
deve substituir todas as ocorrências do caractere c1 por c2. Ao final,
escreva as 2 strings. 
*/
#include<stdio.h>

int main() {
    int i = 0;
    char string[10];
    char c1, c2;

    printf("Digite um valor para C1\n");
    scanf("%c", &c1);

    printf("Digite um valor para C2\n");
    scanf(" %c", &c2);

    printf("Antes dos caracteres serem trocados: \n %c \n %c", c1, c2);
    
    for (i = 0; string[i] < '\0'; i++)
    {
        if(string == c1){
            string[i] = c2;
        }
    }
    
    printf("Depois dos ocorrencias serem trocadas: \n %c \n %c", c1, c2);
}