#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    char seq1[n][80];
    char seq2[m][80];

    for (int i = 0; i < n; i++) {
        scanf("%s", seq1[i]);
    }

    for (int i = 0; i < m; i++) {
        scanf("%s", seq2[i]);
    }

    int existe = 0;
    for (int i = 0; i < m; i++) {
        int pertence = 0;

        for (int j = 0; j < n; j++) {
            int iguais = 1;
            
            int k = 0;
            while (seq2[i][k] != '\0' && seq1[j][k] != '\0') {
                if (seq1[j][k] != seq2[i][k]) {
                    iguais = 0;
                    break;
                }
                k++;
            }

            if (iguais && seq1[j][k] != seq2[i][k]) {
                iguais = 0;
            }

            if (iguais) {
                pertence = 1;
                break;
            }
        }

        if (pertence) {
            existe = 1;
            break;
        }
    }

    printf("%d\n", existe);

    return 0;
}