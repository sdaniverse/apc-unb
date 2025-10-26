#include <stdio.h>

int main() {
    int conta, digito = 0;

    scanf("%d", &conta);

    for (int i = 2; i <= 7; i++) {
        digito += (conta % 10) * i;
        conta /= 10;
    }

    digito %= 11;
    digito = 11 - digito;

    printf("%d\n", digito);
    
    return 0;
}