/*
    leia um codigo de um produto e exiba sua classificação


*/
#include<stdio.h>

int main () {
    int n;

    printf("Digite o codigo do produto para sua classificação: ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("Alimento não Perecivel\n");
        break;
    case 2: case 3 : case 4:
        printf("Alimento Perecivel\n");
        break;
    case 5: case 6:
        printf("Higiene Pessoal\n");
        break;
    case 7:
        printf("Utensilios Domesticos\n");
        break;
    case 8: case 9: case 10: case 11: case 12:
    printf("Produtos De Limpeza\n");
    break;
    default:
        printf("Codigo Invalido\n");
        break;
    }
    
    return 0;
}