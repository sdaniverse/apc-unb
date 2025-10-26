#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int vetor1[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor1[i]);
    }

    int vetor2[n], soma[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor2[i]);
        soma[i] = vetor1[i] + vetor2[i];
    }

    for (int i = 0; i < n; i++) {
        printf("%d", soma[i]);
        
        if (i < (n - 1))
            printf(" ");
        else
            printf("\n");
    }
    
    return 0;
}