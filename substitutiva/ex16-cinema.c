#include <stdio.h>

int main() {
    int fil, lug;
    scanf("%d %d", &fil, &lug);

    int sala[fil][lug];
    for (int i = 0; i < fil; i++) {
        for (int j = 0; j < lug; j++) {
            sala[i][j] = 0;
        }
    }
    
    char letra;
    int letra_num, numero;
    while (scanf(" %c %d", &letra, &numero) != EOF) {
        letra_num = letra - 'A';
        numero--;
        
        sala[letra_num][numero] = 1;
    }

    printf(" ");
    for (int i = 0; i < lug; i++) {
        printf(" %02d", i + 1);
    }
    printf("\n");
    
    for (int i = fil; i > 0; i--) {
        letra = 'A' + i - 1;
        printf("%c ", letra);

        for (int j = 0; j < lug; j++) {
            if (sala[i - 1][j])
                printf("XX ");
            else
                printf("-- ");
        }
        printf("\n");
    }

    return 0;
}