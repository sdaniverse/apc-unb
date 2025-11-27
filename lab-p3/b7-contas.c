#include <stdio.h>

int faz_conta_direito(int parcelas, char op) {
    int n, resultado;
    for (int i = 0; i < parcelas; i++) {
        scanf("%d", &n);

        if (i == 0)
            resultado = n;
        else if (op == '+')
            resultado += n;
        else if (op == '-')
            resultado -= n;
    }

    return resultado;
}