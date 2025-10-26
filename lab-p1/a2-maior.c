#include <stdio.h>

int main() {
    int n[4], maior;
    int primeiro = 1;
    
    for (int i = 0; i < 4; i++) {
        scanf("%d", &n[i]);

        if (primeiro || n[i] > maior) {
            maior = n[i];
        }
    }

    printf("%d\n", maior);
    
    return 0;
}