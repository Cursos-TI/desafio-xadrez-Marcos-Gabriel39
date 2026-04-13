#include <stdio.h>

int main() {
    
    int i;
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int casasCavalo = 1;

    // ================================
    // MOVIMENTO DA TORRE (FOR)
    // Torre: 5 casas para a direita
    // ================================
    printf("Movimento da Torre:\n");

    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // Linha em branco para separar as saídas
    printf("\n");

    // ================================
    // MOVIMENTO DO BISPO (WHILE)
    // Bispo: 5 casas na diagonal
    // para cima e à direita
    // ================================
    printf("Movimento do Bispo:\n");

    i = 1;
    while (i <= casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }

    // Linha em branco para separar as saídas
    printf("\n");

    // ================================
    // MOVIMENTO DA RAINHA (DO-WHILE)
    // Rainha: 8 casas para a esquerda
    // ================================
    printf("Movimento da Rainha:\n");

    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= casasRainha);

    // ================================
    // MOVIMENTO DA CAVALO (WHILE e FOR)
    // Torre: 2 casas para a baixo e 1 pra esquerda
    // ================================
    printf("Movimento do Cavalo:\n");

    while (casasCavalo--){
        for(i = 0; i < 2; i++){

        printf("Baixo\n");
    }
        printf("Esquerda\n");
    }

    return 0;
}