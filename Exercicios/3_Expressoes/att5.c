/*Leia a idade de uma pessoa e exiba quantos dias de vida ela
possui. Considere sempre anos completos e que um ano sempre
possui 365 dias.*/
#include <stdio.h>

int main() {

    int idade, dias_de_vida, ano_completo;
    printf("Digite a idade em anos: ");
    scanf("%d", &idade);

    ano_completo = 365;
    dias_de_vida = ano_completo * idade;

    printf("idade: %d\n", idade);
    printf("dias de vida: %d\n", dias_de_vida);
}