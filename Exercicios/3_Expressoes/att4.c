/* Leia o preço base de um produto. A seguir, calcule um
desconto de 10% no preço base e exiba o preço base e o
novo preço. Na sequência, calcule um aumento de 20% no
preço base e exiba o preço base e o novo preço.*/
#include <stdio.h>

int main() {
     
    float preço_base, desconto_10, novo_preço, aumento_20, novo_preço2;

    printf("Digite o Preço Base Do Produto");
    scanf("%f", &preço_base);

    desconto_10 = preço_base * 0.10;

    novo_preço = preço_base - desconto_10;

    printf("Novo valor com desconto de 10%%: %.2f\n", novo_preço);
    printf("Preço base: %.2f\n", preço_base);

    printf("Aumento de 20%");

    aumento_20 = preço_base * 0.20;
    novo_preço2 = aumento_20 + preço_base;

    printf("Novo valor com aumento de 20%%: %.2f\n", novo_preço2);
    printf("Preço base: %.2f\n", preço_base);

}