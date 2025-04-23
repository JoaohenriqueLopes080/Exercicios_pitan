/* Leia uma quantidade não determinada de valores positivos, calcule e imprima o produto dos mesmos 
    e a quantidade de valores multiplicados. Usar um valor negativo menor ou igual a zero como marca de parada. */
#include <stdio.h>

int main() {
     int cont = 0;
     double produto = 1.0, valor;

     do {
          printf("Digite um valor para o produto: <Menor ou Igual a 0 para Sair>: ");
          scanf("%lf", &valor);

          if (valor > 0) {
                produto *= valor;
                cont++;
          }
     } while (valor > 0);

     if (cont > 0) {
          printf("O valor multiplicado do produto é %.2lf\n", produto);
          printf("O contador é %d\n", cont);
     } else {
          printf("Nenhum valor inserido.\n");
     }

     return 0;
}