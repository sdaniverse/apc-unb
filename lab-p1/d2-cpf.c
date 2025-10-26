#include <stdio.h>

int main() {
    long long int cpf, digitos;
    int v1, v2, vf1, vf2, soma;

    scanf("%lld", &cpf);
    
    // extrair digitos verficadores do cpf original
    v1 = (cpf / 10) % 10;;
    v2 =  cpf % 10;

    // primeira soma com pesos
    soma = 0, digitos = cpf / 100;
    for (int i = 2; i <= 10; i++){
        soma += i * (digitos % 10);
        digitos /= 10;
    }
    
    // calcular primeiro digito verificador
    vf1 = 11 - (soma % 11);
    if(11 - (soma % 11) > 9) {
        vf1 = 0;
    }

    // segunda soma com pesos
    soma = 0, digitos = cpf / 100;
    for (int i = 2; i <= 11; i++){
        if (i == 2) {
            soma += i * vf1;
        }
        else {
            soma += i * (digitos % 10);
            digitos /= 10;
        }
    }

    // calcular segundo digito verificador
    vf2 = 11 - (soma % 11);
    if(11 - (soma % 11) > 9) {
        vf2 = 0;
    }

    // comparar digitos verificadores para validar o cpf
    if (v1 == vf1 && v2 == vf2) {
        printf("valido\n");
    }
    else {
        printf("invalido\n");
    }
    
    return 0;
}