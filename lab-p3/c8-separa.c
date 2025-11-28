#include <stdio.h>

struct tipoData {
    int dia, mes, ano;
};

struct tipoPessoa {
    char nome[80];
    struct tipoData dtNascimento;
};

struct tipoPessoa separaInfo(char nome[80], int dt_nascimento) {
    struct tipoPessoa pessoa;
    
    int indice = 0;
    for (indice; nome[indice] != '\0'; indice++) {
        pessoa.nome[indice] = nome[indice];
    }
    pessoa.nome[indice] = '\0';

    pessoa.dtNascimento.dia = dt_nascimento % 100;
    dt_nascimento /= 100;

    pessoa.dtNascimento.mes = dt_nascimento % 100;
    dt_nascimento /= 100;

    pessoa.dtNascimento.ano = dt_nascimento;

    return pessoa;
}