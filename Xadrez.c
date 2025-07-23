#include <stdio.h>
    int main(){
        //mover a torre 5 casas pra direita
        printf("--TORRE--\n");
        for (int torre = 0; torre < 5; torre++ ) {
            printf("Direita\n");
        }
        
        //mover o bispo 5 casas pra diagonal direita
        printf("--BISPO--\n");
        int bispo = 0;
        while (bispo < 5){
            printf("Direita\n");
            printf("Cima\n");

            bispo++;
        }

        //mover a rainha 8 casas pra esquerda
        printf("--RAINHA--\n");
        int rainha = 0;
        do {
            printf("Esquerda\n");
            
            rainha++;

        }   while (rainha < 8);

        return 0;
    }