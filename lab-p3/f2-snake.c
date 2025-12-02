#include <stdio.h>

int main() {
    int tabuleiro[10][10];
    int linhaCabeca, colCabeca;
    int valorCabeca = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%d", &tabuleiro[i][j]);
            if (tabuleiro[i][j] > valorCabeca) {
                valorCabeca = tabuleiro[i][j];
                linhaCabeca = i;
                colCabeca = j;
            }
        }
    }

    char jogada;
    int perdeu = 0;
    while (scanf(" %c", &jogada) && jogada != 'p') {
        if (jogada == 'w') {
            if (linhaCabeca == 0) {
                printf("Bateu na parede\n");
                perdeu = 1;
                break;
            }
            else if (tabuleiro[linhaCabeca - 1][colCabeca] != 0) {
                printf("Bateu em si mesma\n");
                perdeu = 1;
                break;
            }
            else {
                printf("Nao bateu\n");
                
                for (int i = 0; i < 10; i++) {
                    for (int j = 0; j < 10; j++) {
                        if (tabuleiro[i][j] > 0) 
                            tabuleiro[i][j]--;
                    }
                }

                linhaCabeca--;
                tabuleiro[linhaCabeca][colCabeca] = valorCabeca;
            }
        }

        if (jogada == 'a') {
            if (colCabeca == 0) {
                printf("Bateu na parede\n");
                perdeu = 1;
                break;
            }
            else if (tabuleiro[linhaCabeca][colCabeca - 1] != 0) {
                printf("Bateu em si mesma\n");
                perdeu = 1;
                break;
            }
            else {
                printf("Nao bateu\n");
                
                for (int i = 0; i < 10; i++) {
                    for (int j = 0; j < 10; j++) {
                        if (tabuleiro[i][j] > 0) 
                            tabuleiro[i][j]--;
                    }
                }

                colCabeca--;
                tabuleiro[linhaCabeca][colCabeca] = valorCabeca;
            }
        }

        if (jogada == 's') {
            if (linhaCabeca == 9) {
                printf("Bateu na parede\n");
                perdeu = 1;
                break;
            }
            else if (tabuleiro[linhaCabeca + 1][colCabeca] != 0) {
                printf("Bateu em si mesma\n");
                perdeu = 1;
                break;
            }
            else {
                printf("Nao bateu\n");
                
                for (int i = 0; i < 10; i++) {
                    for (int j = 0; j < 10; j++) {
                        if (tabuleiro[i][j] > 0) 
                            tabuleiro[i][j]--;
                    }
                }

                linhaCabeca++;
                tabuleiro[linhaCabeca][colCabeca] = valorCabeca;
            }
        }

        if (jogada == 'd') {
            if (colCabeca == 9) {
                printf("Bateu na parede\n");
                perdeu = 1;
                break;
            }
            else if (tabuleiro[linhaCabeca][colCabeca + 1] != 0) {
                printf("Bateu em si mesma\n");
                perdeu = 1;
                break;
            }
            else {
                printf("Nao bateu\n");
                for (int i = 0; i < 10; i++) {
                    for (int j = 0; j < 10; j++) {
                        if (tabuleiro[i][j] > 0) 
                            tabuleiro[i][j]--;
                    }
                }

                colCabeca++;
                tabuleiro[linhaCabeca][colCabeca] = valorCabeca;
            }
        }
    }

    if (!perdeu)
        printf("Venceu\n");

    return 0;
}