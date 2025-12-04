#include <stdio.h>

struct tipoFiliacao {
    char nome[80];
    char nomeMae[80];
    char nomePai[80];
};

struct tipoFiliacao separaLinhaCSV(char linha[240]) {
    struct tipoFiliacao pessoa;
    
    int i = 0, car = 0;
    for (i; linha[i] != ','; i++) {
        pessoa.nome[car] = linha[i];
        car++;
    }
    pessoa.nome[car] = '\0';

    i++; car = 0;
    for (i; linha[i] != ','; i++) {
        pessoa.nomeMae[car] = linha[i];
        car++;
    }
    pessoa.nomeMae[car] = '\0';

    i++; car = 0;
    for (i; linha[i] != '\0'; i++) {
        pessoa.nomePai[car] = linha[i];
        car++;
    }
    pessoa.nomePai[car] = '\0';

    return pessoa;
}