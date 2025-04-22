#include<stdio.h>

int main() {
    int cont, inicio, fim;

    printf("digite o menor numero");
    scanf("%d", &inicio);
    
    printf("Digite o maior numero");
    scanf("%d", & fim);

    for(cont = inicio; cont <= fim; cont++) 
    {
        printf("%d", cont);

    }
}