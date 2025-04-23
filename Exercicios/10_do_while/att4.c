/*(Implemente um jogo de adivinhar. O programa deve
gerar um número aleatório (entre 0 e 9, inclusos), o
qual deve ser adivinhado pelo usuário. Quando o
usuário conseguir adivinhar, o programa deve exibir
uma mensagem informando o acerto e o número de
tentativas necessárias. A seguir, o programa deve
perguntar se o usuário deseja jogar novamente e, em
caso positivo, possibilitar a repetição do jogo*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int n, escolha, tentativas = 0;

    srand(time(NULL));
    


    do
    {
        n = rand() % 10;
       printf("Adivinhe um Numero : (0 - 9)");
       scanf("%d", &escolha);
       tentativas++;
    } while (n != escolha);

    printf("Numero Certo : %d", escolha);
    return 0;
}