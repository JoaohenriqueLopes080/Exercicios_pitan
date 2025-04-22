/*Gere e escreva os números ímpares dentro de um intervalo digitado
pelo usuário. O programa deve exibir também a soma destes
números.*/

#include<stdio.h>

int main() {

    int i, intervalo, numero, soma = 0,somaimpar = 0, contimpar;

    printf("digite ate onde vai o intervalo :");
    scanf('%d', intervalo);

    printf("digite numeros ate acabar seu intervalo");
    for(i = 0; i <= intervalo; i ++)
    {
        scanf("%d", &numero);
        soma = soma + numero;

        if(numero % 2 == 1) {
            somaimpar = somaimpar + numero;
            contimpar++;
        }
    }

    printf("Soma total normal é: %d", soma);
    printf(" soma impar é : %d", somaimpar);

}