#include<stdio.h>

#define tam 50

int main() {

    int i, vetor[50], num_de_pares = 0, par[50],num_de_impares = 0, impar[50];

     for(i = 0; i < tam; i++) {
        printf("Digite 50 numeros: \n");
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < tam; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            par[i] = vetor[i];
            num_de_pares++;
        } else {
            impar[i] = vetor[i];
            num_de_impares++;
        }
    }

   // Impressão do vetor original
   printf("Sua Lista de Vetor é: ");
   for(i = 0; i < tam; i++) {
       printf("%d ", vetor[i]);
   }
   printf("\n");

   // Impressão dos pares
   printf("Sua Lista de Pares é: ");
   for(i = 0; i < num_de_pares; i++) {
       printf("%d ", par[i]);
   }
   printf("\n");

   // Impressão dos ímpares
   printf("Sua Lista de Impares é: ");
   for(i = 0; i < num_de_impares; i++) {
       printf("%d ", impar[i]);
   }
   printf("\n");

   // Quantidade de números pares e ímpares
   printf("Quantidade De Numeros Pares: %d\n", num_de_pares);
   printf("Quantidade De Numeros Impares: %d\n", num_de_impares);

   return 0;
}

