#include <stdio.h>

int main() {
    char string[100];
    int o_lidos = 0;

    while (scanf("%[^\n]", string) != EOF) {
        getchar();
        for (int i = 0; string[i] != '\0'; i++) {
            if (string[i] == 'o')
                o_lidos++;
        }
    }

    printf("%d\n", o_lidos);

    return 0;
}