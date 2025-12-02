#include <stdio.h>

struct tipoLogradouro {
    char tipo[80];
    char nome[80];
    char complemento[80];
};

void criaLinhaCSV(struct tipoLogradouro info, char linha[240]) {
    int car = 0;
    
    for (int i = 0; info.tipo[i] != '\0'; i++) {
        linha[car] = info.tipo[i];
        car++;
    }
    linha[car] = ';';
    car++;

    for (int i = 0; info.nome[i] != '\0'; i++) {
        linha[car] = info.nome[i];
        car++;
    }
    linha[car] = ';';
    car++;

    for (int i = 0; info.complemento[i] != '\0'; i++) {
        linha[car] = info.complemento[i];
        car++;
    }
    linha[car] = '\0';
}