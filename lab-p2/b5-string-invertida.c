#include <stdio.h>

int main() {
    char string[100];
    scanf("%[^\n]", string);

    int n = 0;
    for (int i = 0; string[i] != '\0'; i++) {
        n++;
    }

    for (int i = n - 1; i >= 0; i--) {
        printf("%c - %d\n", string[i], string[i]);
    }

    return 0;
}