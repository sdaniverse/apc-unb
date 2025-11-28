#include <stdio.h>

double calculaVelocidadeMedia(int tA, int tB, double distancia) {
    double tempo = (tB - tA) / 3600.0;
    return distancia / tempo;
}

int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima) {
    if (calculaVelocidadeMedia(tA, tB, distancia) > velocidadeMaxima) {
        return 1;
    }
    return 0;
}