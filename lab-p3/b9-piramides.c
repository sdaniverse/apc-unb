#include <stdio.h>

void printEspaco(int n, int espacos);
void printAst(int n, int ast);

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printEspaco(n, i);
        printAst(n, i);
        printf("\n");
    }
}

void printEspaco(int n, int espacos) {
    for (int i = 0; i < (n - espacos); i++) {
        printf(" ");
    }
}

void printAst(int n, int ast) {
    for (int i = 0; i < (2 * ast + 1); i++) {
        printf("*");
    }
}