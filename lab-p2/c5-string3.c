#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int maior;
    for (int i = 0; i < n; i++) {
        char string[100];
        scanf("%s", string);

        int size = 0;
        for (int j = 0; string[j] != '\0'; j++) {
            size++;
        }

        if (i == 0 || size > maior) {
            maior = size;
        }
    }

    printf("%d\n", maior);

    return 0;
}