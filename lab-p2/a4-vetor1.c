#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int vetor[n], menor, i_menor;
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);

        if (i == 0 || vetor[i] < menor) {
            menor = vetor[i];
            i_menor = i;
        }
    }

    int sec_menor, i_sec_menor;
    for (int i = 0; i < n; i++) {
        if (i == 0 || (vetor[i] < sec_menor && i != i_menor)) {
            sec_menor = vetor[i];
            i_sec_menor = i;
        }
    }

    int thi_menor;
    for (int i = 0; i < n; i++) {
        if (i == 0 || (vetor[i] < thi_menor && i != i_menor && i != i_sec_menor)) {
            thi_menor = vetor[i];
        }
    }

    printf("%d\n%d\n", sec_menor, thi_menor);

    return 0;
}