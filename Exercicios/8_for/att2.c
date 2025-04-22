/*Leia 20 valores, encontre e escreva o maior deles.*/

#include<stdio.h>

int main() {

    int i, maior, numero;
    printf("digite o primeiro valor");
    scanf("%d", &maior);

    printf("digite o resto dos 19 valores");
    for(i = 1; i <= 19; i++)
    {
        scanf("%d", &numero);
        
        if(numero > maior) {
            maior = numero;
        }

    }
    printf("o numero maior é : %d", maior);

}