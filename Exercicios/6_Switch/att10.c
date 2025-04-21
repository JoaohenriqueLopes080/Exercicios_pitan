/*Faça um programa que leia um número inteiro e verifique se é
par ou ímpar, imprimindo essa informação.
*/

#include<stdio.h>

int main() {
    int numero, verificador;

    printf("digite um numero inteiro:");
    scanf("%d", &numero);

    if(numero % 2 == 0){
        verificador = 1;
    } else {
        verificador = 0;
    }

    switch(verificador){
        case 1: 
        printf("é um numero par : %d", numero);
        break;
        case 2: 
        printf("é um numero impar : %d", numero);
        break;
    }

}