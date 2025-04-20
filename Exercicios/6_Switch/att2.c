

#include<stdio.h>
#include<math.h>

int main() {
    int valor, valor2;
    char operacao;

    printf("Digite o Valor 1\n");
    scanf("%d", &valor);

    printf("Digite o valor 2\n");
    scanf(" %d", &valor2);

    printf("digite uma operação | + | - | * | / | \n");
    scanf(" %c", &operacao);

    switch (operacao)
   {
    case '+':
        printf("O caso de Soma é : %d", valor + valor2);    
        break;
    case '-':
        printf("O caso de Subtração é: %d", valor - valor2);
        break;
    case '*':
        printf("O caso de Multiplicação é: %d", valor * valor2);
        break;
    case '/':
        if(valor2 == 0){
            printf("Operação Invalida");
        } else {
            printf("O caso de Divisão é: %d", valor / valor2);
        }
        break;
    }
}