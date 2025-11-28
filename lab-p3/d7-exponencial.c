#include <stdio.h>

double elevar(int x, int expoente);
double calcularFatorial(int n);

double exp_natural(int x, int n) {
    double exp = 1;
    for (int i = 1; i <= n; i++) {
        double elevado = elevar(x, i);
        double fatorial = calcularFatorial(i);
        exp += elevado / fatorial;
    }
    return exp;
}

double elevar(int x, int expoente) {
    double resultado = 1;
    for (int i = 0; i < expoente; i++) {
        resultado *= x;
    }

    return resultado;
} 

double calcularFatorial(int n) {
    double fatorial = n;
    for (int i = n; i > 1; i--) {
        fatorial *= i - 1;
    }

    return fatorial;
}