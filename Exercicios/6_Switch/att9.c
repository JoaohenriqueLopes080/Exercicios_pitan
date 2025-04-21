/* Faça um programa que leia 2 números inteiros x e y, verifique
o menor e atribua esse valor à variável z. */
#include<stdio.h>

int main () {
    int x, y, temp,verificador, z;
    
    printf("digite o valor de ");
    scanf("%d", &x);

    printf("digite o valor de ");
    scanf("%d", &y);

    if(x < y) { // se x é menor que  y, temp pega valor de x, x pega valor maior de y, y pega valor menor de temp
        temp = x;
        x = y;
        y = temp;
        verificador = 1;
    }   else {
        verificador = 0;
    }
    switch (verificador)
    {
    case 1:
        z = y;
        printf("menor z: %d", z);
        break;
    case 0: 
        z = x;
        printf("menor z: %d", z);
        break;
    default: 
        printf("Tem alguma coisa errada, filho.");
        break;
    }


}