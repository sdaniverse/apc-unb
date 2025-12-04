#include <stdio.h>

int main() {
    char string[1000];
    scanf("%s", string);

    int size = 0;
    for (int i = 0; string[i] != '\0'; i++) {
        size++;
    }

    printf("%d\n", size);

    return 0;
}