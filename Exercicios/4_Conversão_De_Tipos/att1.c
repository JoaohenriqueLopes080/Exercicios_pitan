/*Exemplo: 10 m/s = 10 * 3,6 = 36 km/h.*/

/*1. Faça um programa que leia o valor da velocidade em m/s, transforme e imprima
este valor em km/h.*/

#include <stdio.h>

int main() {

    float km, ms;

    printf("digite o valor da velocidade em m/s: \n");
    scanf("%f", &ms);

    km = ms * 3.6;

    printf("A velocidade em k/h por hora é : %fkm/h", km);
}