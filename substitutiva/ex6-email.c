#include <stdio.h>

int main() {
    char nome[100];
    scanf("%[^\n]", nome);

    int indice_ultimo;
    for (int i = 0; nome[i] != '\0'; i++) {
        if (nome[i] >= 'A' && nome[i] <= 'Z') {
            nome[i] += ('a' - 'A');
        }
        
        if (nome[i] == ' ')
            indice_ultimo = i + 1;
    }

    for (int i = 0; nome[i] != ' '; i++) {
        printf("%c", nome[i]);
    }
    printf(".");
    
    for (int i = indice_ultimo; nome[i] != '\0'; i++) {
        printf("%c", nome[i]);
    }
    printf("@unb.br\n");

    return 0;
}