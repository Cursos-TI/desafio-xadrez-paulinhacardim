// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

#include <stdio.h>

// Constantes para a quantidade de movimentos de cada peça
#define BISPO_MOVIMENTOS 5
#define TORRE_MOVIMENTOS 5
#define RAINHA_MOVIMENTOS 8

int main() {

    int i, j;
    // Movimentação do Bispo
    // Direção: Diagonal Superior Direita -> combinação de Cima + Direita
    // Estrutura de repetição usada: for
    
    printf("Movimentação do Bispo:\n");
    for(i = 1; i <= BISPO_MOVIMENTOS; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n");

  
    // Movimentação da Torre
    // Direção: Direita (movendo 5 casas)
    // Estrutura de repetição usada: while
   
    printf("Movimentação da Torre:\n");
    i = 1; // Resetando o contador
    while(i <= TORRE_MOVIMENTOS) {
        printf("Direita\n");
        i++;
    }
    printf("\n");

    // Movimentação da Rainha
    // Direção: Esquerda (movendo 8 casas)
    // Estrutura de repetição usada: do...while
    
    printf("Movimentação da Rainha:\n");
    i = 1; // Resetando o contador
    do {
        printf("Esquerda\n");
        i++;
    } while(i <= RAINHA_MOVIMENTOS);
    printf("\n");

    return 0;
}


