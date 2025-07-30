#include <stdio.h>

void torre(int casas);
void bispo(int vertical, int horizontal);
void rainha(int casas);
void cavalo();

int main() {
    // Mover a torre 5 casas pra direita
    printf("--TORRE--\n");
    torre(5);
    printf("\n");

    // Mover o bispo 5 casas na diagonal direita
    printf("--BISPO--\n");
    bispo(5, 5);
    printf("\n");

    // Mover a rainha 8 casas para a esquerda
    printf("--RAINHA--\n");
    rainha(8);
    printf("\n");

    // Mover o cavalo 2 casas pra cima e 1 pra direita
    printf("--CAVALO--\n");
    cavalo();
    printf("\n");

    return 0;
}

// TORRE
void torre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    torre(casas - 1);
}

// BISPO
void bispo(int vertical, int horizontal) {
    if (vertical <= 0 || horizontal <= 0) return;

    for (int i = 0; i < 1; i++) { 
        printf("Cima\n");

        for (int j = 0; j < 1; j++) {
            printf("Direita\n");
        }
    }

    bispo(vertical - 1, horizontal - 1);
}

// RAINHA
void rainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    rainha(casas - 1);
}

// CAVALO
void cavalo() {
    const int movimentos = 3;

    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Cima\n");
            if (j == 1) break;
        }

        for (int k = 0; k < 2; k++) {
            if (k == 0) {
                printf("Direita\n");
                continue;
            }
        }
    }
}
