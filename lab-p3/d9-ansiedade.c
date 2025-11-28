#include <stdio.h>

int main() {
    char resposta[10];
    int contador = 0, sim = 0, triagem = 0;
    while (scanf("%s", resposta) != EOF) {
        getchar();
        if (resposta[0] == 's' && resposta[1] == 'i' && resposta[2] == 'm')
            sim++;

        contador++;

        if (contador == 10) {
            if (sim >= 2) {
                triagem++;
            }
            sim = 0;
            contador = 0;
        }
    }

    printf("%d\n", triagem);

    return 0;
}