#include <stdio.h>

int main() {
    int n, maior, primeiro = 1;

    while (scanf("%d", &n) != EOF) {
        if (primeiro) {
            maior = n;
            primeiro = 0;
        }
        else if (n > maior) {
            maior = n;
        }
    }

    printf("%d\n", maior);
    
    return 0;
}