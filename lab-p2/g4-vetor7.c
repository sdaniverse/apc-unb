#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int vetor1[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor1[i]);
    }

    int vetor2[n], dif = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor2[i]);
        
        if (vetor2[i] != vetor1[i]) {
            dif = 1;
        }
    }

    if (dif)
        printf("nao\n");
    else
        printf("sim\n");

    return 0;
}