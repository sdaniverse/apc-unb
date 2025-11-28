#include <stdio.h>

struct tipoPonto {
    int x, y;
};

double distancia(struct tipoPonto pa, struct tipoPonto pb) {
    double diferenca = (pb.x - pa.x) * (pb.x - pa.x) + (pb.y - pa.y) * (pb.y - pa.y);
    
    double raiz = diferenca / 2;
    double temp = 0;

    while (raiz != temp) {
        temp = raiz;
        raiz = (diferenca / temp + temp) / 2;
    }
    
    return raiz;
}