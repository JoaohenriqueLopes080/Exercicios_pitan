/*Leia 2 números inteiros (tab e limite) e imprima a tabuada de tab
desde 1 até limite*/

#include<stdio.h>
int main(){

    int i, tab, limite;

    printf("Digite um numero para tab");
    scanf("%d", &tab);

    printf("Digite um numero para o limite");
    scanf("%d", &limite);

    printf("Tabuada do numero TAB Ate Limite :");

    for(i = 1; i <= limite; i++) {

        printf("\n%d X %d = %d", tab,i, tab * i);
    }

}