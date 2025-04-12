#include <stdio.h>
    
int main () {

    char nome[50];
    int idade;
    
    printf("digite seu primeiro nome: ");
    scanf("%s",&nome);
    printf("seu nome é: \"%s\"",  nome );

    printf("\n digite sua idade:");
    scanf("%i",&idade);
    printf("sua idade é: %i", idade);
    
    return 0;
}