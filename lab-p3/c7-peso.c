#include <stdio.h>

int validaPeso (double pesoKg) {
    if (pesoKg < 0) {
        return 0;
    }
    return 1;
}

void fazTonelada (double pesoKg) {
    double toneladas = pesoKg / 1000;
    printf("%.4lf\n", toneladas);
}

void fazGrama (double pesoKg) {
    double gramas = pesoKg * 1000;
    printf("%.4lf\n", gramas);
}
