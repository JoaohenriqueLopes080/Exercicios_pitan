/* Leia 2 notas e 2 pesos, calcule e mostre a média ponderada
entre as notas.   */

#include <stdio.h>

int main() {

int peso1, peso2;
float nota1, nota2, media;

printf("digite a primeira nota: ");
scanf("%f", &nota1);

printf("digite a segunda nota: ");
scanf("%f", &nota2);

printf("digite o peso da primeira nota: ");
scanf("%d", &peso1);

printf("digite o peso da segunda nota: ");
scanf("%d", &peso2);

media = (nota1 * peso1 + nota2 * peso2) / (peso1 + peso2);
printf("media ponderada: %2.f\\n", media);

return 0;
}