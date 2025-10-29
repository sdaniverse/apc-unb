#include <stdio.h>

int main() {
    char risada[60];
    scanf("%s", risada);

    int vogais = 0;
    for (int i = 0; risada[i] != '\0'; i++) {
        if (risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] == 'u')
            vogais++;
    }

    if (!vogais) {
        printf("Valor invalido!\n");
        return 0;
    }
    
    int n = 0;
    char ris_vogais[vogais];
    for (int i = 0; risada[i] != '\0'; i++) {
        if (risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] == 'u') {
            ris_vogais[n] = risada[i];
            n++;
        }
    }

    int engracada = 1;
    for (int i = 0; i <= (n / 2); i++) {
        if (ris_vogais[i] != ris_vogais[n - i - 1]){
            engracada = 0;
            break;
        }
    }

    if (engracada)
        printf("S\n");
    else
        printf("N\n");

    return 0;
}