#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);

    int vetor[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    int x, pertence = 0;
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (vetor[i] == x) {
            printf("pertence\n");
            pertence = 1;
        }
    }

    if (!pertence) {
        printf("nao pertence\n");
    }

    return 0;
}