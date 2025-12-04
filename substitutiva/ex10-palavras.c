#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char palavra[42];
    for (int i = 0; i < n; i++) {
        scanf("%s", palavra);
        printf("%s: ", palavra);
        
        for (int j = 0; palavra[j] != '\0'; j++) {
            if (palavra[j] >= 'A' && palavra[j] <= 'Z')
                palavra[j] += 'a' - 'A';
        }

        int ordenada = 1;
        for (int j = 0; palavra[j] != '\0' && palavra[j + 1] != '\0'; j++) {
            if (palavra[j] >= palavra[j + 1]) {
                ordenada = 0;
                break;
            }
        }

        if (ordenada)
            printf("O\n");
        else
            printf("N\n");
    }

    return 0;
}