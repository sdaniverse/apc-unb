#include <stdio.h>

int main() {
    int qtdC1, qtdC2, casos;
    scanf("%d %d %d", &qtdC1, &qtdC2, &casos);

    char frasesC1[100][81];
    for (int i = 0; i < qtdC1; i++) {
        scanf(" %[^\n]", frasesC1[i]);
    }

    char frasesC2[100][81];
    for (int i = 0; i < qtdC2; i++) {
        scanf(" %[^\n]", frasesC2[i]);
    }

    int loc, palavra, letra;
    for (int i = 0; i < casos; i++) {
        scanf("%d %d %d", &loc, &palavra, &letra);
        palavra -= 1;

        if (loc == 1) {
            for (int j = letra; frasesC1[palavra][j] != '\0'; j++) {
                printf("%c", frasesC1[palavra][j]);
            }
            printf("\n");
        }
        else {
            for (int j = letra; frasesC2[palavra][j] != '\0'; j++) {
                printf("%c", frasesC2[palavra][j]);
            }
            printf("\n");
        }
    }

    return 0;
}