#include <stdio.h>



int main() {
    
    // torre move-se apenas horizontalmente ou verticalmente

    // bispo move-se diagonalmente em qualquer uma das quatro direções diagonais 
    //(cima/direita, cima/esquerda, baixo/direita, baixo/esquerda.)

    // rainha Combina os movimentos da Torre e do Bispo, podendo mover-se 
    // em qualquer direção: horizontal, vertical ou diagonal.


    // torre
    printf("Movimentação da TORRE (5 casas para a direita)\n");
    for(int i =0; i < 5; i++){
        printf("DIREITA\n");
    }

    printf("\n");

    // bispo
    int b = 0;
    printf("Movimentação do BISPO (3 casas para cima/direita)\n");
    while(b < 3){
        printf("CIMA/DIREITA\n");
        b++;
    }

    printf("\n");

    // rainha
    int r = 0;
    printf("Movimentação da RAINHA (6 casas para cima)\n");
    do {
        printf("CIMA\n");
        r++;
    }while(r < 6);

    return 0;
}
