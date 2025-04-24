#include<stdio.h>

#define tam 10

int main() {

    int i;
    float vetor[10];

    for(i = 0; i < tam; i++) {
        printf("Digite 10 numeros: \n");
        scanf("%f", &vetor[i]);
    }

     // primeira escrita do vetor
        printf("vetor : \n %.2f \n", vetor[i]);

    for (i = 0; i < tam; i++)
    {
        if(vetor[i] == 0){
            vetor[i] = -99;

            // escrita apos mudança de valores.
            printf("vetor : \n %.2f \n", vetor[i]);
        }
    }
    return 0;  
}