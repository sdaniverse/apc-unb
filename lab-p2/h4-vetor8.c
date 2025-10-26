#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int vetor[n], soma = 0, media;
    for (int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }
    
    media = soma / n;

    int maior = 0;
    for (int i = 0; i < n; i++) {
        if (vetor[i] > media) {
            printf("%d ", vetor[i]);
            maior = 1;
        }
    }

    if (maior)
        printf("\n");
    else
        printf("0\n");

    return 0;
}