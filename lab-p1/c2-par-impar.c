#include <stdio.h>

int main() {
    int choice;
    int p1, p2;
    int f1, f2;
    char w1, w2;

    // jogo 1
    scanf("%d %d %d", &choice, &p1, &p2);
    if ((p1 + p2) % 2 == choice) {
        w1 = 'A';
    }
    else {
        w1 = 'B';
    }

    // jogo 2
    scanf("%d %d %d", &choice, &p1, &p2);
    if ((p1 + p2) % 2 == choice) {
        w2 = 'C';
    }
    else {
        w2 = 'D';
    }

    // final
    scanf("%d %d %d", &choice, &f1, &f2);
    if ((f1 + f2) % 2 == choice) {
        printf("%c\n", w1);
    }
    else {
        printf("%c\n", w2);
    }

    return 0;
}