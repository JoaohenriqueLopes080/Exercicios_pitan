#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void exibircabecalho1() {
    printf("\n");
    printf("\n");
    printf("----------------------------------------------------------------------------------------------------\n");
    printf("||                                     Down To Zero                                   ||\n");
    printf("----------------------------------------------------------------------------------------------------\n");
    printf("\n");
    printf("\n");
}

void menuInicial2() {
    exibircabecalho1();
    printf("Bem vindo ao Down To Zero\n");
    printf("Instruções :\n  No jogo Down to Zero, os dois jogadores iniciam com uma pontuação de 999 \n Objetivo : \n Alcançar exatamente a pontuação zero\n");
    printf("Escolha seu Modo De Jogo : \n(1) Jogador VS Jogador \n(2) Jogador VS Computador \n");
}

void modo3(int escolha, int pontuacao1,int pontuacao2) {
    switch (escolha) {
        case 1:
            printf("Modo De Jogo : Jogador VS Jogador\n");
            jogadorVsjogador(pontuacao1, pontuacao2);
            break;
        case 2: 
            printf("Modo De Jogo : Jogador VS Computador\n");
            jogadorvscomputador(pontuacao1, pontuacao2);
            break;
        default:
            printf("O Valor Está inválido, Digite Corretamente.\n");
            break;
    }
}

int Rolardados() {
    int num = 0;
    num = (rand() % 6) + 1;
    return num;
}

void combinacoes(int d1, int d2, int d3, int num_de_dados) {
    printf("Quantidade De Combinações possíveis\n");
    if (num_de_dados == 3)
    {
        printf("1: %d%d%d\n2: %d%d%d\n3: %d%d%d\n4: %d%d%d\n5: %d%d%d\n6: %d%d%d\n", 
            d1, d2, d3, d1, d3, d2, d2, d1, d3, d2, d3, d1, d3, d1, d2, d3, d2, d1);
    } else if (num_de_dados == 2)
    {
        printf("1: %d%d\n2: %d%d\n3: %d%d\n4: %d%d\n", 
            d1, d2, d2, d1, d1, d1, d2, d2);
    }
}

int maiorcombinacao(int d1, int d2, int d3, int num_de_dados) {
    int comb1, comb2 ,comb3 ,comb4 ,comb5, comb6, maior;

    if(num_de_dados == 3 ) {
    comb1 = d1 * 100 + d2 * 10 + d3;
    comb2 = d1 * 100 + d3 * 10 + d2;
    comb3 = d2 * 100 + d1 * 10 + d3;
    comb4 = d2 * 100 + d3 * 10 + d1;
    comb5 = d3 * 100 + d1 * 10 + d2;
    comb6 = d3 * 100 + d2 * 10 + d1;

    maior = comb1;
    if (maior < comb2) {
        maior = comb2;
    }
    if (maior < comb3) {
        maior = comb3;
    }
    if (maior < comb4) {
        maior = comb4;
    }
    if (maior < comb5) {
        maior = comb5;
    }
    if (maior < comb6) {
        maior = comb6;
    }
}
    if(num_de_dados == 2) {
        comb1 = d1 * 10 + d2;
        comb2 = d2 * 10 + d1;
        comb3 = d1 * 10 + d1;
        comb4 = d2 * 10 + d2;

        maior = comb1;
        if (maior < comb2) {
            maior = comb2;
        }
        if (maior < comb3) {
            maior = comb3;
        }
        if (maior < comb4) {
            maior = comb4;
        }
    }
    if (num_de_dados == 1) {
        maior = d1;
    }
    return maior;
}
int verificarvencedor(int pontuacao1, int pontuacao2){
    int vencedor = 0;

    if(pontuacao1 == 0){
        vencedor = 1;
    } else if (pontuacao2 == 0)
    {
        vencedor = 2;
    } else {
        vencedor = -1;
    }
    return vencedor;
}
void placar(int pontuacao1, int pontuacao2) {
    exibircabecalho1();
    printf("                                           ||  PLACAR  || \n");
    printf(" Jogador 1 - \"%d\" \n", pontuacao1);
    printf(" Jogador 2 - \"%d\" \n", pontuacao2);
}

void jogadorVsjogador(int pontuacao1,int pontuacao2) {
    int vencedor, soma,primeira_rodada1 = 1, primeira_rodada2 = 1, rodada_jogador1 = 1, rodada_jogador2 = 1, d1, d2, d3, escolha,  num_de_dados = 0;
   
    printf("Iniciando Modo Jogador Versus Jogador!\n");
    printf("Pontuação Inicial : \n Jogador 1 : %d \n Jogador 2 : %d \n", pontuacao1, pontuacao2);

    while (pontuacao1 > 0 && pontuacao2 > 0) {
        if (rodada_jogador1) {
            printf("\n--- Turno do Jogador 1 ---\n");
            if (primeira_rodada1) {
                num_de_dados = 3;
                primeira_rodada1 = 0;
            } else {
                printf("Quantos dados deseja Rolar? (1, 2, 3): \n");
                scanf("%d", &num_de_dados);
            }
        } else if (rodada_jogador2) {
            printf("\n--- Turno do Jogador 2 ---\n");
            if (primeira_rodada2) {
                num_de_dados = 3;
                primeira_rodada2 = 0;
            } else {
                printf("Quantos dados deseja Rolar? (1, 2, 3): \n");
                scanf("%d", &num_de_dados);
            }
        }
        if ((num_de_dados < 1) || (num_de_dados > 3))
        {
            printf("Numero De Dados Errado, Proximo Jogador\n");
            rodada_jogador1 = !rodada_jogador1;
            rodada_jogador2 = !rodada_jogador2;
        } else {
            if (num_de_dados >= 1)
            {
                d1 = Rolardados();
            }
            if (num_de_dados >= 2) {
                d2 = Rolardados();
            }
            if (num_de_dados == 3)
            {
                d3 = Rolardados();
            }
            }
            valordedados(d1, d2, d3, num_de_dados);
            
            if (num_de_dados == 3)
            {
                combinacoes(d1,d2,d3, num_de_dados);
            }
          
            printf("Escolha uma combinação para subtrair da sua pontuação\n"); 
            printf("Escolha a combinação");
            scanf("%d", &escolha);
        
            if(rodada_jogador1 == 1){
                if (pontuacao1 - escolha < 0)
                {
                    printf("Deu negativo, passa a vez");
                } else {
                    pontuacao1 -= escolha;
                }
            } else
             { 
                if (pontuacao2 - escolha < 0) {
                    printf("Deu negativo, passa a vez");
                } else {
                    pontuacao2 -= escolha;
                }
            }

        placar(pontuacao1, pontuacao2);

         vencedor =  verificarvencedor(pontuacao1, pontuacao2);

         if(vencedor == 1) {
            printf("Jogador 1 Venceu o jogo! Parabens\n");
            break;
         } else if (vencedor == 2) {
            printf("Jogador 2 Venceu o Jogo! Parabens\n");
            break;
         }
         rodada_jogador1 = !rodada_jogador1;
         rodada_jogador2 = !rodada_jogador2;
         }
     }

void valordedados(int d1, int d2, int d3, int num_de_dados){
    printf("\n-----Dados Rolados-----\n");
    printf("Dado 1: %d\n", d1);

    if (num_de_dados >= 2) {
        printf("Dado 2: %d\n", d2);
    }

    if (num_de_dados == 3) {
        printf("Dado 3: %d\n", d3);
    }
    printf("\n");
}

void jogadorvscomputador(int pontuacao1, int pontuacao2) { // here brother
    int primeira_rodada1 = 1, primeira_rodada2 = 1,rodada_jogador1 = 1, rodada_computador = 0, d1, d2, d3, escolha,  num_de_dados = 0, soma, vencedor;
   
    printf("Iniciando Modo Jogador Versus Computador!\n");
    printf("Pontuação Inicial : \n Jogador 1 : %d \n Jogador 2 : %d \n", pontuacao1, pontuacao2);

    while (pontuacao1 > 0 && pontuacao2 > 0) {
        if (rodada_jogador1) {
            printf("\n--- Turno do Jogador 1 ---\n");
            if (primeira_rodada1) {
                num_de_dados = 3;
                primeira_rodada1 = 0;
            } else {
                printf("Quantos dados deseja Rolar? (1, 2, 3): \n");
                scanf("%d", &num_de_dados);
            }
        } else if (rodada_computador) {
            printf("\n--- Turno do Jogador 2 ---\n");
            if (primeira_rodada2) {
                num_de_dados = 3;
                primeira_rodada2 = 0;
            } else {
                printf("Quantos dados deseja Rolar? (1, 2, 3): \n");
                if(pontuacao2 >= 100){
                    num_de_dados = 3;
                } else if(pontuacao2 > 10 && pontuacao2 < 100 ){
                    num_de_dados = 2;
                } else {
                {
                num_de_dados = 1;
                }
            }
        }
        if ((num_de_dados < 1) || (num_de_dados > 3)) 
         {
            printf("Numero De Dados Errado, Proximo Jogador\n");
            rodada_jogador1 = !rodada_jogador1;
            rodada_computador = !rodada_computador;
        } else {
            if (num_de_dados >= 1)
            {
                d1 = Rolardados();
            }
            if (num_de_dados >= 2) {
                d2 = Rolardados();
            }
            if (num_de_dados == 3)
            {
                d3 = Rolardados();
            }
            
            valordedados(d1, d2, d3, num_de_dados);
            
            if (num_de_dados == 3)
            {
                combinacoes(d1,d2,d3,num_de_dados);
            } else if (num_de_dados == 2)
            {
                combinacoes(d1,d2,d3,num_de_dados);
            }
                if(rodada_jogador1)
                { 
                    printf("Escolha uma combinação para subtrair da sua pontuação\n");
                    printf("Escolha a combinação");
                    scanf("%d", &escolha);
                } else if(rodada_computador) {
                    if(pontuacao2 >= 100) {
                       escolha = maiorcombinacao(d1, d2 ,d3, num_de_dados);
                    }
                    if(pontuacao2 > 10 && pontuacao2 <= 99) {
                        escolha = maiorcombinacao(d1, d2, d3,  num_de_dados);
                    }
                    if(pontuacao2 < 10) {
                        escolha = maiorcombinacao(d1, d2, d3,  num_de_dados);
                    }
                }

            if(rodada_jogador1){
                if (pontuacao1 - escolha < 0)
                {
                    printf("Deu negativo, passa a vez");
                } else {
                    pontuacao1 -= escolha;
                }
            } else
             { 
                if (pontuacao2 - escolha < 0) {
                    printf("Deu negativo, passa a vez");
                } else {
                    pontuacao2 -= escolha;
                }
            }

        placar(pontuacao1, pontuacao2);

         vencedor =  verificarvencedor(pontuacao1, pontuacao2);

         if(vencedor == 1) {
            printf("Jogador 1 Venceu o jogo! Parabens\n");
            break;
         } else if (vencedor == 2) {
            printf("Jogador 2 Venceu o Jogo! Parabens\n");
            break;
         }
         rodada_jogador1 = !rodada_jogador1;
         rodada_computador = !rodada_computador;
        }

    } 
}
}
int main() {
    srand(time(NULL));
    int pontuacao1 = 999, pontuacao2 = 999, escolha;
    char again;

    menuInicial2();
    scanf("%d", &escolha);

    modo3(escolha, pontuacao1, pontuacao2);

    printf("Obrigado Por ter jogado Down To Zero, Gostaria de jogar novamente?\n Digite (S) Para Sim \n Digite (N) Para Não \n");
    scanf(" %c", &again);
    do {
        pontuacao1 = 999;
        pontuacao2 = 999;

        menuInicial2();
        scanf("%d", &escolha);
        modo3(escolha, pontuacao1, pontuacao2);
        printf("Obrigado Por ter jogado Down To Zero, Gostaria de jogar novamente?\n Digite (S) Para Sim \n Digite (N) Para Não \n");
        scanf(" %c", &again);
    } while (again == 'S');
    printf("Entendido. Até A Próxima.\n");

    return 0;
}