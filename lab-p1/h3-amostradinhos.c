#include <stdio.h>

int main() {
    int t, n, temp, primo, amostrado;

    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        temp = n;
        amostrado = 1;

        while (temp > 0) {
            primo = 1;

            if (temp < 2) {
                primo = 0;
            } 
            else {
                for (int j = 2; j * j <= temp; j++) {
                    if (temp % j == 0) {
                        primo = 0;
                        break;
                    }
                }
            }

            if (!primo) {
                amostrado = 0;
                break;
            }

            temp /= 10;
        }

        if (amostrado) {
            printf("S\n");
        } else {
            printf("N\n");
        }
    }

    return 0;
}