#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int vetor[n], par = 0, im = 0;
    for (int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0)
            par++;
        else
            im++;
    }

    int pares[par], impares[im];
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (vetor[j] % 2 == 0) {
                pares[i] = vetor[j];
                break;
            }
            else {
                impares[i] = vetor[j];
                break;
            }
        }
    }

    for (int i = 0; i < par; i++) {
        printf("%d ", pares[i]);
    }
    printf("\n");
    for (int i = 0; i < im; i++) {
        printf("%d", impares[i]);
    }
    printf("\n");

    return 0;
}