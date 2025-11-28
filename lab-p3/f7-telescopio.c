#include <stdio.h>

int contarEstrelas(int qtd, int abertura) {
    int fluxo, visiveis = 0;
    for (int i = 0; i < qtd; i++) {
        scanf("%d", &fluxo);

        if (fluxo * abertura >= 40000000) {
            visiveis++;
        }
    }

    return visiveis;
}