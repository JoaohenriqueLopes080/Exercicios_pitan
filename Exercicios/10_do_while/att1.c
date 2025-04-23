/*Leia uma quantidade não determinada de valores
positivos, calcule e imprima a soma dos mesmos.
Usar um valor negativo como marca de parada*/

#include<stdio.h>

int main() {
	int n, soma;
	soma = 0;

	do {
		printf("Digite um numero Positivo: <Menor que 0 Para sair>");
		scanf("%d", &n);
		soma += n;
		printf("A soma é : %d \n", soma);
	} while (n < 0);

	return 0;
}