#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int vetor[n], par = 0, im = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0)
            par++;
        else
            im++;
    }

    for (int i = 0; i < n; i++) {
        if (vetor[i] % 2 == 0) {
            printf("%d", vetor[i]);
            par--;

            if (par != 0)
                printf(" ");
            else
                printf("\n");
        }
    }

    for (int i = 0; i < n; i++) {
        if (vetor[i] % 2 != 0) {
            printf("%d", vetor[i]);
            im--;

            if (im != 0)
                printf(" ");
            else
                printf("\n");
        }
    }

    return 0;
}