#include <stdio.h>

int main() {
    char risada[60];
    scanf("%s", risada);

    char ris_vogais_normal[60];
    int i = 0, vogais = 0, car = 0, igual = 1;
    for (i; risada[i] != '\0'; i++) {
        if (risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] == 'u') {
            ris_vogais_normal[car] = risada[i];
            car++;
            vogais++;
        }
    }
    
    if (!vogais) {
        printf("Valor invalido!\n");
        return 0;
    }
    
    ris_vogais_normal[car] = '\0';

    char ris_vogais_invertida[60];
    car = 0;
    for (i; i >= 0; i--) {
        if (risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] == 'u') {
            ris_vogais_invertida[car] = risada[i];

            if (ris_vogais_invertida[car] != ris_vogais_normal[car]) {
                igual = 0;
                break;
            }

            car++;
        }
    }

    if (igual)
        printf("S\n");
    else
        printf("N\n");

    return 0;
}