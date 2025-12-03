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

    int sec_menor, indice_sec;
    for (int i = 0; i < n; i++) {
        if (i == 0 || (vetor[i] < sec_menor && i != indice_menor)) {
            sec_menor = vetor[i];
            indice_sec = i;
        }
    }

    int thi_menor;
    for (int i = 0; i < n; i++) {
        if (i == 0 || (vetor[i] < thi_menor && i != indice_menor && i != indice_sec)) {
            thi_menor = vetor[i];
        }
    }
    
    printf("%d\n%d\n", sec_menor, thi_menor);

    return 0;
}