#include <stdio.h>

int main() {
    int f, l;
    scanf("%d %d", &f, &l);

    int sala[f][l];

    for (int i = 0; i < f; i++) {
        for (int j = 0; j < l; j++) {
            sala[i][j] = 0;
        }
    }

    char fileira;
    int lugar;
    while (scanf(" %c%d", &fileira, &lugar) != EOF) {
        int i = fileira - 'A';
        int j = lugar - 1;

        sala[i][j] = 1;
    }

    printf("  ");
    for (int i = 0; i < l; i++) {
        printf("%02d ", i + 1);
    }
    printf("\n");

    for (int i = f - 1; i >= 0; i--) {
        char letra = 'A' + i;
        printf("%c ", letra);
        
        for (int j = 0; j < l; j++) {
            if (sala[i][j] == 1)
                printf("XX ");
            else
                printf("-- ");
        }

        printf("\n");
    }

    return 0;
}