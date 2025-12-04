#include <stdio.h>

int main() {
    char string[100];
    int letras = 0;

    while (scanf("%[^\n]", string) != EOF) {
        getchar();
        for (int i = 0; string[i] != '\0'; i++) {
            if (string[i] == 'o')
                letras++;
        }
    }

    printf("%d\n", letras);

    return 0;
}