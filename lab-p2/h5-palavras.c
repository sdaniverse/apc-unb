#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char palavra[42];
    for (int i = 0; i < n; i++) {
        scanf("%s", palavra);

        for (int j = 0; palavra[j] != '\0'; j++) {
            if (palavra[j] >= 'A' && palavra[j] <= 'Z') {
                palavra[j] -= 'A' - 'a';
            }
        }

        char ordenada = 'O';
        for (int k = 0; palavra[k + 1] != '\0'; k++) {
            if (!(palavra[k] < palavra[k + 1])) {
                ordenada = 'N';
                break;
            }
        }

        printf("%s: %c\n", palavra, ordenada);
    }

    return 0;
}