#include <stdio.h>

int main() {
    int opcao;
    int peca;
    int direcao;
    int casas;

    do {
        printf("=== JOGO DE XADREZ ===\n");
        printf("1 - Ver Regras\n");
        printf("2 - Jogar\n");
        printf("3 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("\nREGRAS:\n");
            printf("Escolha uma peca e uma direcao para mover.\n");
            printf("Voce pode mover de 1 a 8 casas.\n\n");
        }

        if (opcao == 2) {
            printf("\nEscolha a peca:\n");
            printf("1 - Torre\n");
            printf("2 - Bispo\n");
            printf("3 - Rainha\n");
            printf("4 - Cavalo\n");
            scanf("%d", &peca);

            printf("Escolha a direcao:\n");
            if (peca == 1 || peca == 3) {
                printf("1 - Direita\n2 - Esquerda\n");
            } 
            if (peca == 2 || peca == 3) {
                printf("3 - Diagonal Direita\n4 - Diagonal Esquerda\n");
            } 
            if (peca == 4) {
                printf("5 - 2 Cima e 1 Direita\n6 - 2 Cima e 1 Esquerda\n");
            }
            scanf("%d", &direcao);

            if (peca == 4) {
                casas = 1; // Cavalo sempre move uma vez
            } else {
                printf("Quantas casas (1 a 8)? ");
                scanf("%d", &casas);
            }

            if (casas < 1 || casas > 8) {
                printf("Numero invalido de casas!\n\n");
                continue;
            }

            printf("\nMovimento:\n");

            if (peca == 1) { // TORRE - usa for
                for (int i = 0; i < casas; i++) {
                    if (direcao == 1)
                        printf("Torre -> Direita\n");
                    else if (direcao == 2)
                        printf("Torre -> Esquerda\n");
                    else {
                        printf("Direcao invalida para Torre.\n");
                        break;
                    }
                }
            }

            else if (peca == 2) { // BISPO - usa while
                int i = 0;
                while (i < casas) {
                    if (direcao == 3)
                        printf("Bispo -> Diagonal Direita\n");
                    else if (direcao == 4)
                        printf("Bispo -> Diagonal Esquerda\n");
                    else {
                        printf("Direcao invalida para Bispo.\n");
                        break;
                    }
                    i++;
                }
            }

            else if (peca == 3) { // RAINHA - usa do while
                int i = 0;
                do {
                    if (direcao == 1)
                        printf("Rainha -> Direita\n");
                    else if (direcao == 2)
                        printf("Rainha -> Esquerda\n");
                    else if (direcao == 3)
                        printf("Rainha -> Diagonal Direita\n");
                    else if (direcao == 4)
                        printf("Rainha -> Diagonal Esquerda\n");
                    else {
                        printf("Direcao invalida para Rainha.\n");
                        break;
                    }
                    i++;
                } while (i < casas);
            }

            else if (peca == 4) { // CAVALO - usa do while 
                int i = 0;
                do {
                    if (direcao == 5)
                        printf("Cavalo -> 2 Cima, 1 Direita\n");
                    else if (direcao == 6)
                        printf("Cavalo -> 2 Cima, 1 Esquerda\n");
                    else {
                        printf("Direcao invalida para Cavalo.\n");
                        break;
                    }
                    i++;
                } while (i < 1); // Apenas 1 movimento do cavalo
            }

            else {
                printf("Peca invalida.\n");
            }

            printf("\n");
        }

        if (opcao == 3) {
            printf("Saindo do jogo...\n");
        }

    } while (opcao != 3);

    return 0;
}
