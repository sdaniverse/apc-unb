#include <stdio.h>

int main() {
    float p[3], l[5], t, ml, mf;

    for (int i = 0; i < 3; i++) {
        scanf("%f", &p[i]);
    }

    scanf("%f", &t);

    ml = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%f", &l[i]);
        ml += l[i];
    }
    ml /= 10;

    mf = (p[0] + 2*p[1] + 3*p[2] + 2*t) / 8 + ml;

    printf("%.2f\n", mf);
}