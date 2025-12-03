#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int vetor[n], menor, indice_menor;
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);

        if (i == 0 || vetor[i] < menor) {
            menor = vetor[i];
            indice_menor = i;
        }
    }

    printf("%d\n", indice_menor);

    return 0;
}