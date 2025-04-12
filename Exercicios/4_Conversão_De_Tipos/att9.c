#include<stdio.h>

int main () {
 int moeda_real, qntd_1real;
 float cent1, qntd_1, cent5, qntd_5, cent10, qntd_10, cent25, qntd_25, cent50, qntd_50, valor_total;
    // inicializar as variaveis
     cent1 = 0.01;
     cent5 = 0.05;
     cent10 = 0.10;
     cent25 = 0.25;
     cent50 = 0.50;
     moeda_real = 1;
     
     printf("Digite a quantidade de de moedas de 1 centavo: \n ");
     scanf("%f", &qntd_1);
     printf("Digite a quantidade de de moedas de 5 centavos: \n ");
     scanf("%f", &qntd_5);
     printf("Digite a quantidade de de moedas de 10 centavos: \n ");
     scanf("%f", &qntd_10);
     printf("Digite a quantidade de de moedas de 25 centavos: \n ");
      scanf("%f", &qntd_25);
     printf("Digite a quantidade de de moedas de 50 centavos: \n ");
     scanf("%f", &qntd_50);
     printf("Digite a quantidade de de moedas de 1 real: \n ");
     scanf("%d", &qntd_1real);
     
     valor_total = (cent1 * qntd_1) + (cent5 * qntd_5) + (cent10 * qntd_10) + (cent25 * qntd_25) + (cent50 * qntd_50) + (moeda_real * qntd_1real);
     
     printf("Valor Total Economizado : \n%f", valor_total);
     }