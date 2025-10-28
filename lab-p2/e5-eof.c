#include <stdio.h>

int main() {
    int n, quantidade = 0;
    while (scanf("%d", &n) != EOF) {
        quantidade++;
    }

    printf("%d\n", quantidade);

    return 0;
}