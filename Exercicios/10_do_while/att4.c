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
    char repeticao, iniciar;
    int n, escolha, tentativas = 0;

    srand(time(NULL));
    printf("Quer jogar um jogo de Adivinhação? (S/N)");
    scanf("%c", &iniciar);

    if (iniciar == "n" || iniciar == "N")
    {
        break;
    } else {
        do
        {
            n = rand() % 10;
           printf("Adivinhe um Numero : (0 - 9)");
           scanf("%d", &escolha);
           tentativas++;
    } while (n != escolha);
    
    printf("Quer tentar De Novo? (S/N)");
    scanf("%c", &repeticao);

    if (repeticao == "S" || repeticao == "s" )
    {
    do
        {
        n = rand() % 10;
       printf("Adivinhe um Numero : (0 - 9)");
       scanf("%d", &escolha);
       tentativas++;
        } while (n != escolha);
    }
    printf("Numero Certo : %d", escolha);
    printf("Tentativas Necessarias : %d",tentativas);
    
    return 0;
}
}