#include <stdio.h>

int main() {
    int l, c;

    scanf("%d %d", &l, &c);

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            printf("[%03d, %03d]", i, j);
        }

        printf("\n");
    }
    
    return 0;
}