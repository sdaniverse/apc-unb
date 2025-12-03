#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];
    long int soma = 0, media;
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        soma += nums[i];
    }

    media = soma / n;

    int existe = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] > media) {
            if (existe)
                printf(" ");
            
            printf("%d", nums[i]);
            existe = 1;
        }
    }
    printf("\n");
    
    if (!existe)
        printf("0\n");

    return 0;
}