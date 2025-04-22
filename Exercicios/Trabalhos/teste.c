void jogadorVsjogador(int pontuacao1, int pontuacao2) {
    int rodada_jogador1 = 1; // 1 se for a vez do Jogador 1, 0 caso contrário
    int rodada_jogador2 = 0; // 1 se for a vez do Jogador 2, 0 caso contrário
    int d1, d2, d3, escolha, valorSubtrair, num_de_dados;

    printf("Modo Jogador vs Jogador iniciado!\n");
    printf("Pontuacao inicial: Jogador 1 = %d, Jogador 2 = %d\n", pontuacao1, pontuacao2);

    // Loop principal do jogo
    while (pontuacao1 > 0 && pontuacao2 > 0) {
        if (rodada_jogador1) {
            printf("\n--- Turno do Jogador 1 ---\n");
        } else {
            printf("\n--- Turno do Jogador 2 ---\n");
        }

        // Escolher quantos dados rolar
        printf("Quantos dados deseja rolar? (1, 2 ou 3): ");
        scanf("%d", &num_de_dados);

        if (num_de_dados < 1 || num_de_dados > 3) {
            printf("Numero de dados invalido! Perdeu a vez.\n");
            rodada_jogador1 = !rodada_jogador1;
            rodada_jogador2 = !rodada_jogador2;
        } else {
            // Rolar os dados
            if (num_de_dados >= 1) d1 = Rolardados();
            if (num_de_dados >= 2) d2 = Rolardados();
            if (num_de_dados == 3) d3 = Rolardados();

            printf("Dados rolados: ");
            if (num_de_dados >= 1) printf("%d ", d1);
            if (num_de_dados >= 2) printf("%d ", d2);
            if (num_de_dados == 3) printf("%d", d3);
            printf("\n");

            // Exibir combinações possíveis
            if (num_de_dados == 3) {
                combinacoes(d1, d2, d3);
            }

            // Permitir que o jogador escolha uma combinação
            printf("Escolha uma combinacao para subtrair da sua pontuacao:\n");
            printf("1. Usar o valor do dado 1 (%d)\n", d1);
            if (num_de_dados >= 2) printf("2. Usar o valor do dado 2 (%d)\n", d2);
            if (num_de_dados == 3) printf("3. Usar o valor do dado 3 (%d)\n", d3);
            printf("4. Usar a soma dos dados rolados (%d)\n", d1 + d2 + d3);
            printf("Digite sua escolha: ");
            scanf("%d", &escolha);

            processarEscolha(&pontuacao1, &pontuacao2, rodada_jogador1, escolha, d1, d2, d3, num_de_dados);

            // Verificar se há um vencedor
            int vencedor = verificarvencedor(pontuacao1, pontuacao2);
            if (vencedor == 1) {
                printf("\nJogador 1 venceu!\n");
                break;
            } else if (vencedor == 2) {
                printf("\nJogador 2 venceu!\n");
                break;
            }

            // Alternar a vez
            rodada_jogador1 = !rodada_jogador1;
            rodada_jogador2 = !rodada_jogador2;

            // Exibir o placar atual
            placar(pontuacao1, pontuacao2);
        }
    }
}


// Calcular o valor a ser subtraído
int escolhaValida = 1;
if (escolha == 1) {
    valorSubtrair = d1;
} else if (escolha == 2) {
    if (num_de_dados >= 2) {
        valorSubtrair = d2;
    } else {
        printf("Escolha invalida! Perdeu a vez.\n");
        escolhaValida = 0;
    }
} else if (escolha == 3) {
    if (num_de_dados == 3) {
        valorSubtrair = d3;
    } else {
        printf("Escolha invalida! Perdeu a vez.\n");
        escolhaValida = 0;
    }
} else if (escolha == 4) {
    valorSubtrair = d1 + d2 + d3;
} else {
    printf("Escolha invalida! Perdeu a vez.\n");
    escolhaValida = 0;
}

// Verificar se a subtração é válida
if (escolhaValida) {
    if (rodada_jogador1) {
        if (pontuacao1 - valorSubtrair < 0) {
            printf("Subtracao invalida! Pontuacao nao pode ser negativa. Perdeu a vez.\n");
        } else {
            pontuacao1 -= valorSubtrair;
            printf("Pontuacao do Jogador 1: %d\n", pontuacao1);
        }
    } else {
        if (pontuacao2 - valorSubtrair < 0) {
            printf("Subtracao invalida! Pontuacao nao pode ser negativa. Perdeu a vez.\n");
        } else {
            pontuacao2 -= valorSubtrair;
            printf("Pontuacao do Jogador 2: %d\n", pontuacao2);
        }
    }
} else {
    rodada_jogador1 = !rodada_jogador1;
    rodada_jogador2 = !rodada_jogador2;
}