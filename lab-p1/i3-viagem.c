#include <stdio.h>

int main() {
    int r;
    int cod, nota;
    int melhor_cod, melhor_nota; 
    int dia = 1;

    while (scanf("%d", &r) != EOF) {

        melhor_nota = -1;
        melhor_cod = 0;

        for (int i = 0; i < r; i++) {
            scanf("%d %d", &cod, &nota);

            if (nota > melhor_nota) {
                melhor_nota = nota;
                melhor_cod = cod;
            }
            else if (nota == melhor_nota && cod < melhor_cod) {
                melhor_cod = cod;
            }
        }

        printf("Dia %d\n", dia);
        printf("%d\n\n", melhor_cod);

        dia++;
    }

    return 0;
}