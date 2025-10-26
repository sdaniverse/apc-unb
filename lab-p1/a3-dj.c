#include <stdio.h>

int main() {
    int n, repeat;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        if ((i + 1) % 2 == 0)
            repeat = 6;
        else
            repeat = 3;

        for (int j = 0; j < repeat; j++) {
            printf("THUMS ");
        }

        printf("\n");
    }
    
    return 0;
}