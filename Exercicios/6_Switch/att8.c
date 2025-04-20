/* Leia o plano de trabalho e o salário atual de um funcionário,
calcule e imprima o seu novo salário, com base na tabela abaixo: */

#include <stdio.h>

int main() {
    float salario, aumento;
    char plano;

    printf("Digite seu salario atual: ");
    scanf("%f", &salario);

    printf("PLANOS A = 9 PORCENTO / B = 13 PORCENTO / C  = 17 PORCENTO \n");
    printf("Digite o plano: ");
    scanf(" %c", &plano); // Adicionado espaço antes de %c para evitar problemas com buffer

    // a 9% - b 13% - c 17%
    switch (plano) {
        case 'A':
            aumento = salario * 0.09;
            printf("Salario novo: %.2f\n", salario + aumento);
            break;
        case 'B':
            aumento = salario * 0.13;
            printf("Salario novo: %.2f\n", salario + aumento);
            break;
        case 'C':
            aumento = salario * 0.17;
            printf("Salario novo: %.2f\n", salario + aumento);
            break;
        default:
            printf("Plano invalido.\n");
            break;
    }

    return 0;
}
