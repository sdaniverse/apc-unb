#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int vetor[n];
    long int soma = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    int media = soma / n;

    int maior = 0;
    for (int i = 0; i < n; i++) {
        if (vetor[i] > media) {
            maior++;
        }
    }

    if (!maior) {
        printf("%d\n", maior);
    }
    else {
        for (int i = 0; i < n; i++) {
            if (vetor[i] > media) {
                printf("%d", vetor[i]);
                maior--;

                if (maior)
                    printf(" ");
                else
                    printf("\n");
            }
        }
    }

    return 0;
}