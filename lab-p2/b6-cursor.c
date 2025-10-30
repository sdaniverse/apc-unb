#include <stdio.h>

int main() {
    int l;
    scanf("%d", &l);
    getchar();

    char linhas[l][1000];
    int tamanhos[l];
    for (int i = 0; i < l; i++) {
        scanf("%[^\n]", linhas[i]);
        getchar();

        int size = 0;
        while (linhas[i][size] != '\0') {
            size++;
        }
        
        tamanhos[i] = size;
    }

    int cur_l, cur_c;
    scanf("%d %d", &cur_l, &cur_c);

    char comando;
    while (scanf(" %c", &comando) != EOF) {
        if (comando == 'j') {
            if (cur_l < l) {
                cur_l++;
            }
        }
        else if (comando == 'k') {
            if (cur_l > 1) {
                cur_l--;
            }
        }

        int col_final;
        char char_final;

        int size_linha_atual = tamanhos[cur_l - 1];
        if (cur_c > size_linha_atual) {
            col_final = size_linha_atual;
            char_final = linhas[cur_l - 1][size_linha_atual - 1];
        }
        else {
            col_final = cur_c;
            char_final = linhas[cur_l - 1][cur_c - 1];
        }
        
        printf("%d %d %c\n", cur_l, col_final, char_final);
    }

    return 0;
}