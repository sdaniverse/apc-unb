#include <stdio.h>

int main() {
    char string[1000];
    scanf("%s", string);

    int n = 0;
    for (int i = 0; string[i] != '\0'; i++) {
        n++;
    }

    printf("%d\n", n);

    return 0;
}