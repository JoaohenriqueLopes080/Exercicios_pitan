/*1) Faça um programa que leia vários números inteiros, verifique
e imprima a quantidade de primos dentre os números
digitados. O programa acaba quando for digitado um valor
menor ou igual a zero.  */

#include<stdio.h>

int main() {

    int num, i = 0,qntd_primos = 0, divisor = 0;

    printf("Digite um numero Inteiro");
    scanf("%d", &num);

    while (num > 0)
    {
        divisor = 0
       if (num <= 1)
       {
        printf("Não é primo");
       }
       for (i = 1; i <= num; i++)
       {
            if(num % i == 0){
                 divisor++;
            }
       }
       if ((divisor == 2))
       {
        printf("é primo");
        qntd_primos++;
        printf("quantidade de primos %d", qntd_primos);
       }
    printf("Digite um numero Inteiro");
    scanf("%d", &num);
    }
  
}

