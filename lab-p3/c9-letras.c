#include <stdio.h>

int main() {
    char letra;
    char texto[1000];

    scanf("%c", &letra);
    getchar();
    scanf("%[^\n]", texto);

    int palavras = 0, contem = 0, palavraContem = 0;
    for (int i = 0; ; i++) {
        if (texto[i] == ' ' || texto[i] == '\0') {
            palavras++;

            if (contem)
                palavraContem++;

            contem = 0;

            if (texto[i] == '\0') {
                break;
            }
        }
        else if (texto[i] == letra) {
            contem = 1;
        }
    }

    float pctg = (palavraContem * 100.0) / palavras;
    printf("%.1f\n", pctg);

    return 0;
}