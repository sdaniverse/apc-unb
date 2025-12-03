#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int vetor1[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor1[i]);
    }

    int vetor2[n], igual = 1;
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor2[i]);

        if (vetor2[i] != vetor1[i])
            igual = 0;
    }

    if (igual)
        printf("sim\n");
    else
        printf("nao\n");

    return 0;
}