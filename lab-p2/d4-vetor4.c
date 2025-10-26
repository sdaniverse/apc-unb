#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int vetor[n], par = 0, im = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2)
            im++;
        else
            par++;
    }

    for (int i = 0; i < n; i++) {
        if (!(vetor[i] % 2)) {
            printf("%d", i);
            par--;

            if (par)
                printf(" ");
            else
                printf("\n");
        }
    }

    for (int i = 0; i < n; i++) {
        if (vetor[i] % 2) {
            printf("%d", i);
            im--;

            if (im)
                printf(" ");
            else
                printf("\n");
        }
    }

    return 0;
}