#include <stdio.h>

int main() {
    char frase[10000];
    scanf("%[^\n]", frase);

    char antiga[40], substituta[40];
    scanf("%s", antiga);
    scanf("%s", substituta);

    int n_antiga = 0;
    for (int i = 0; antiga[i] != '\0'; i++) {
        n_antiga++;
    }

    for (int i = 0; frase[i] != '\0'; i++) {
        int igual = 0;
        
        if (i == 0 || frase[i - 1] == ' ')
            igual = 1;

        int encontrada = 1;
        if (igual) {
            for (int j = 0; antiga[j] != '\0'; j++) {
                if (antiga[j] != frase[i + j] || frase[i + j] == '\0') {
                    encontrada = 0;
                    break;
                }
            }
        }
        else {
            encontrada = 0;
        }

        int final = 1;
        if (encontrada) {
            if ((frase[i + n_antiga] >= 'a' && frase[i + n_antiga] <= 'z') || (frase[i + n_antiga] >= 'A' && frase[i + n_antiga] <= 'Z')) {
                final = 0;
            }
        }

        if (igual && encontrada && final) {
            for (int k = 0; substituta[k] != '\0'; k++) {
                printf("%c", substituta[k]);
            }

            i += n_antiga - 1;
        }
        else {
            printf("%c", frase[i]);
        }
    }

    printf("\n");

    return 0;
}