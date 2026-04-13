#include <stdio.h>

void casastorre(int casas){
    if (casas > 0)
    {
        printf("Direita\n");
        casastorre(casas - 1);
    }
}
void casasbispo(int casas){
    if (casas > 0)
    {
        printf("Direita, Cima\n");
        casasbispo(casas - 1);
    }
} 
void casasrainha(int casas){
    if (casas > 0)
    {
        printf("Esquerda\n");
        casasrainha(casas - 1);
    }
} 
void casascavalo(int casas){
    if (casas > 0)
    {
        printf("Cima\n");
        printf("Cima\n");
        printf("Direita\n");
        printf("\n");
        casascavalo(casas - 1);
    }
}

int main(){

    printf("Movimentação Torre:\n");
    casastorre(5);
    printf("\n");
    printf("Movimentação Bispo:\n");
    casasbispo(5);
    printf("\n");
    printf("Movimentação Rainha:\n");
    casasrainha(8);
    printf("\n");
    printf("Movimentação Cavalo:\n");
    casascavalo(1);

    return 0;
}