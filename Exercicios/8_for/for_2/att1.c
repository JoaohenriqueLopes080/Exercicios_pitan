/*Faça uma função que realize a soma de todos os valores inteiros de 1 a n,
sendo que n deve ser recebido como parâmetro da função main. Implemente
também a função main. */

#include<stdio.h>

int soma2(int n) {

    int i, soma_n = 0;

    for(i = 1; i <= n; i++)
    {   
        soma_n = soma_n + i
    }

    return soma_n;

}

int main()
{
    int n, soma;

    printf("Digite o valor que iremos fazer a soma : ");
    scanf("%d", &n);

    soma = soma2(n);
    
    printf("Valor da soma é : %d", soma);
    return 0;
}
