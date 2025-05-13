/*
8) Em época de inflação alta, a empresa KKK tem uma política de juros para
compra de produtos a prazo (em dias) conforme mostrado abaixo:

Prazo       
 1-3         
 4-7         
8 - 12       
13 - 20       

 Juros
     0
  0.5%
  1.5%      
  3%

Faça um programa que leia o valor de uma compra e o prazo de pagamento. A
seguir, o programa deve chamar uma função, passando esses valores como
parâmetros, que deve calcular o valor a ser gasto com o produto. Esse valor deve
ser retornado para a função main, que irá imprimir como saída. 

*/

#include<stdio.h>

float juros(float valor, int prazo){
    float juros;
    switch (prazo)
    {
    case 1 ... 3:
        return valor;
        break;
    case 4 ... 7:
        juros = valor * 0.005;
        return valor + juros;   
        break;

    case 8 ... 12:
        juros = valor * 0.015;
        return valor + juros;
        break;

    case 13 ... 20:
        juros = valor * 0.03;
        return valor + juros;
        break;

    default:
        printf("Prazo inválido.\n");
        return valor; // Retorna o valor original em caso de prazo inválido
        break;
}
}



int main() {
    float valor, valor_func;
    int prazo;

    printf("Digite o valor da compra :");
    scanf("%f", &valor);

    printf("Digite o prazo de compra : (qntd de meses em inteiro - 20 meses)");
    scanf(" %d", &prazo);

    valor_func = juros(valor, prazo);

    printf("O valor a ser pago é : %f", valor_func);
    return 0;
}