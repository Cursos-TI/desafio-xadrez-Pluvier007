#include <stdio.h>
    int main(){
        //mover a torre 5 casas pra direita
        printf("--TORRE--\n");
        for (int torre = 0; torre < 5; torre++ ) {
            printf("Direita\n");
        }
        printf("\n");

        //mover o bispo 5 casas pra diagonal direita
        printf("--BISPO--\n");
        int bispo = 0;
        while (bispo < 5){
            printf("Direita\n");
            printf("Cima\n");

            bispo++;
        }
        printf("\n");

        //mover a rainha 8 casas pra esquerda
        printf("--RAINHA--\n");
        int rainha = 0;
        do {
            printf("Esquerda\n");
            
            rainha++;

        }   while (rainha < 8);
        printf("\n");

        //mover o cavalo 2 casas pra baixo e 1 pra esquerda
        printf("--CAVALO--\n");
        int cavalo = 1;
        while (cavalo--)
            {
                for(int i = 0; i < 2; i++){
                    printf("Baixo\n");
                }
                printf("Esquerda\n");
            }
        printf("\n");
            
        return 0;
    }
