#include <stdio.h>

int main() {
    int j1, j2, j3;

    scanf("%d %d %d", &j1, &j2, &j3);

    if (j1 != j2 && j1 != j3) {
        printf("A\n");
    }
    else if (j2 != j1 && j2 != j3) {
        printf("B\n");
    }
    else if (j3 != j1 && j3 != j2) {
        printf("C\n");
    }
    else {
        printf("empate\n");
    }
    
    return 0;
}