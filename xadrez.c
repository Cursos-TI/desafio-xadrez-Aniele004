#include <stdio.h>


void moverTorre(int i){
    if(i == 0){
        return;
    } printf("DIREITA\n");
    moverTorre(i - 1);
}

void moverBispo(int vertical, int horizontal) {
    if (vertical == 0) {
        return; // Condição de parada: sem mais casas para mover
    }

    printf("CIMA\n");
    for (int h = 1; h <= horizontal; h++) { // Movendo horizontalmente
        printf("DIREITA\n");
    }

    // Chamada recursiva para o próximo movimento vertical
    moverBispo(vertical - 1, horizontal);
}

void moverRainha(int r){
    if(r == 0){
        return;
    } printf("CIMA\n");
    moverRainha(r - 1); // movimento para cima
}

void moverCavalo() {
    for (int i = 1; i <= 2; i++) {  // Loop para mover o cavalo 2 casas para cima
        printf("CIMA\n");

        if (i == 2) {
            printf("DIREITA\n");
        }

        if (i == 2) {
            break;  // Interrompe o loop externo, pois o cavalo já fez seu movimento "L"
        }
     } 
}


int main() {
    
    // torre move-se apenas horizontalmente ou verticalmente

    // bispo move-se diagonalmente em qualquer uma das quatro direções diagonais 
    //(cima/direita, cima/esquerda, baixo/direita, baixo/esquerda.)

    // rainha Combina os movimentos da Torre e do Bispo, podendo mover-se 
    // em qualquer direção: horizontal, vertical ou diagonal.


    // torre
    printf("Movimentação da TORRE (3 casas para a direita)\n");
    moverTorre(3);

    printf("\n");

    // bispo
    printf("Movimentação do BISPO (6 casas para cima/direita)\n");
    moverBispo(6, 1);

    printf("\n");

    // rainha
    printf("Movimentação da RAINHA (9 casas para cima)\n");
    moverRainha(9);

    printf("\n");

    //cavalo 
    printf("Movimentação do CAVALO (2 casas para baixo e 1 para a esquerda)\n");
    moverCavalo();

    return 0;
}
