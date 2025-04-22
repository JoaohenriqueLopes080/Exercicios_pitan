#include<stdio.h>

int main() {
    int num, i, soma = 0;
    float media;

    printf("Digite 10 valores inteiros");
    for(i=0; i <= 10; i++)
    {
        scanf("%d", num);
        soma = soma + num;
    }
    media = (float)soma/10;
    printf("media eh %2.f", media);
    return 0;
}