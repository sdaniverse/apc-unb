#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int mapa[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mapa[i][j]);
        }
    }

    int soma, maior = 0, coluna = 0;
    for (int i = 0; i < n; i++) {
        soma = 0;
        
        for (int j = 0; j < n; j++) {
            soma += mapa[j][i];
        }

        if (soma > maior) {
            coluna = i + 1;
            maior = soma;
        }   
    }

    printf("%d\n", coluna);

    return 0;
}