#include <stdio.h>

void imprimir_matriz(int n, int matriz[15][15]);

int main() {
    int n;
    scanf("%d", &n);

    int matriz[15][15];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int continuar = 1;
    while (continuar) {
        for (int i = 0; i < n; i++) {
            int soma = 0;

            for (int j = 0; j < n; j++) {
                soma += matriz[i][j];
            }

            if (soma == n) {
                for (int k = 0; k < n; k++) {
                    matriz[i][k] = 0;
                }
            }
        }

        imprimir_matriz(n, matriz);

        for (int j = 0; j < n; j++) {
            int base = n - 1;
            
            for (int i = n - 1; i >= 0; i--) {
                if (matriz[i][j] == 1) {
                    matriz[i][j] = 0;
                    matriz[base][j] = 1;

                    base--;
                }
            }
        }

        printf("\n");
        imprimir_matriz(n, matriz);

        continuar = 0;
        for (int i = 0; i < n; i++) {
            int soma = 0;

            for (int j = 0; j < n; j++) {
                soma += matriz[i][j];
            }

            if (soma == n) {
                continuar = 1;
                break;
            }
        }

        if (continuar)
            printf("\n");
    }
    
    return 0;
}

void imprimir_matriz(int n, int matriz[15][15]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}