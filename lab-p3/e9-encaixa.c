#include <stdio.h>

int encaixa(int a, int b) {
    if (b > a)
        return 0;

    while (b != 0) {
        if (b % 10 != a % 10)
            return 0;

        a /= 10;
        b /= 10;
    }

    return 1;
}

int segmento(int a, int b) {
    int maior, menor;
    if (a < b) {
        maior = b;
        menor = a;
    }
    else {
        maior = a;
        menor = b;
    }

    while (maior >= menor) {
        if (encaixa(maior, menor))
            return 1;
        
        maior /= 10;
    }

    return 0;
}