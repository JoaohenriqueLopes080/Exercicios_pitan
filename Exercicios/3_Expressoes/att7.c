/*Leia uma data no formato ddmmaa (utilizar uma única variável
inteira) e imprima dia, mês e ano separados.*/

#include <stdio.h>

int main () {
int data;
float ano, mes, dia;

printf("digite uma data no formato ddmmaa: ");
scanf("%d", &data);

ano = data % 10000;
mes = (data / 10000) % 100;
dia = (data / 1000000) % 100;

printf("Ano %.0f\\n", ano);
printf("Mes %.0f\\n", mes);
printf("Dia %.0f\\n", dia);
return 0;
}