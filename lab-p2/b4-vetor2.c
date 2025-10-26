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

    printf("%d\n", i_menor);

    return 0;
}