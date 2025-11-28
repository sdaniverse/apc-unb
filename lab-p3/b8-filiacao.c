#include <stdio.h>

struct tipoFiliacao {
    char nome[80];
    char nomeMae[80];
    char nomePai[80];
};

struct tipoFiliacao separaLinhaCSV(char linha[240]) {
    struct tipoFiliacao pessoa;
    int i = 0;
    int indice_nome = 0;
    
    for (i; linha[i] != ','; i++) {
        pessoa.nome[indice_nome] = linha[i];
        indice_nome++;
    }
    pessoa.nome[indice_nome] = '\0';
    
    i++;
    indice_nome = 0;
    for (i; linha[i] != ','; i++) {
        pessoa.nomeMae[indice_nome] = linha[i];
        indice_nome++;
    }
    pessoa.nomeMae[indice_nome] = '\0';
    
    i++;
    indice_nome = 0;
    for (i; linha[i] != '\0'; i++) {
        pessoa.nomePai[indice_nome] = linha[i];
        indice_nome++;
    }
    pessoa.nomePai[indice_nome] = '\0';

    return pessoa;
}