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
    
    int i = 0;
    for (i; nome[i] != '\0'; i++) {
        pessoa.nome[i] = nome[i];
    }
    pessoa.nome[i] = '\0';

    pessoa.dtNascimento.dia = dt_nascimento % 100;
    pessoa.dtNascimento.mes = (dt_nascimento / 100) % 100;
    pessoa.dtNascimento.ano = dt_nascimento / 10000;

    return pessoa;
}