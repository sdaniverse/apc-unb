#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {    
            printf("%02d ", i + 1);
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            printf("%02d ", j + 1);
        }
        printf("\n");
    }
    
    return 0;
}