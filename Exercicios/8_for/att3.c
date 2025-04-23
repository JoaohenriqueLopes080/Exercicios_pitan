/*Leia a matrícula e 3 notas de 10 alunos. Para cada um, calcule a
média ponderada (pesos 4, 3 e 3), mostre a matrícula, as 3 notas, a
média e uma mensagem "APROVADO" se a média for maior ou
igual a 7 e "REPROVADO“, caso contrário. */

#include<stdio.h>

int main(){
    int matricula, i;
    float peso1, peso2, peso3, mediaponderada;

    for(i = 0; i <= 9; i++)
    {
        printf("digite sua matricula");
        scanf("%d", &matricula);

        printf("digite sua nota 1");
        scanf("%f", &peso1);

        printf("digite sua nota 2");
        scanf("%f", &peso2);

        printf("digite sua nota 3");
        scanf("%f", &peso3);

        mediaponderada = (peso1 * 4 + peso2 * 3 + peso3 * 3) / 10;
        if (mediaponderada >= 7)
        {
            printf("Aluno Aprovado");
        } else {
            printf("Aluno Reprovado");
        }
        
    }

}