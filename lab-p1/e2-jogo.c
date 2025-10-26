#include <stdio.h>

int main() {
    int j1, j2;

    scanf("%d %d", &j1, &j2);

    if ((j1 == 0 && (j2 == 2 || j2 == 3)) || // pedra contra tesoura e lagarto
        (j1 == 1 && (j2 == 0 || j2 == 4)) || // papel contra pedra e spock
        (j1 == 2 && (j2 == 1 || j2 == 3)) || // tesoura contra papel e lagarto
        (j1 == 3 && (j2 == 1 || j2 == 4)) || // lagarto contra papel e spock
        (j1 == 4 && (j2 == 0 || j2 == 2)))   // spock contra pedra e tesoura 
        { 
            printf("A\n");
        } 
    else if (j1 == j2) {
        printf("empate\n");
    }
    else {
        printf("B\n");
    }

    return 0;
}