#include<stdio.h>

int main() {
    int mes, dias;

    printf("Digite o Mes(num) \n");
    scanf("%d", &mes);

    switch (mes)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        dias = 31;
        printf("Esse mes tem %d dias", dias);
        break;
    case 02 :
    dias = 28;
    printf("Esse mes tem %d dias", dias);
    break;
    case 4: case 6: case 9: case 11:
    dias = 30;
    printf("Esse mes tem %d dias", dias);
    default:
        break;
    }
}
