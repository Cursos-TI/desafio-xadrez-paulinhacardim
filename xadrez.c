// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

#include <stdio.h>

// Definição de constantes para os movimentos
#define BISPO_MOVIMENTOS 5
#define TORRE_MOVIMENTOS 5
#define RAINHA_MOVIMENTOS 8
#define PASSOS_BAIXO 2
#define PASSOS_ESQUERDA 1
#define REPETICOES_L 3  // Quantas vezes o Cavalo fará o movimento em L

int main() {
    int i, j;

    // NÍVEL NOVATO - Movimentação das Peças
    // Movimentação do Bispo: 5 casas na diagonal superior direita (Cima + Direita)
    printf("===== Movimentação do Bispo =====\n");
    for(i = 1; i <= BISPO_MOVIMENTOS; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n");

    // Movimentação da Torre: 5 casas para a direita
    printf("===== Movimentação da Torre =====\n");
    i = 1;
    while(i <= TORRE_MOVIMENTOS) {
        printf("Direita\n");
        i++;
    }
    printf("\n");

    // Movimentação da Rainha: 8 casas para a esquerda
    printf("===== Movimentação da Rainha =====\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while(i <= RAINHA_MOVIMENTOS);
    printf("\n");

    // NÍVEL AVENTUREIRO - Movimentação do Cavalo (em L)

    printf("===== Movimentação do Cavalo (em L - Baixo + Esquerda) =====\n");

    // Loop externo (for): controla quantas vezes o Cavalo vai fazer o movimento em L
    for(i = 1; i <= REPETICOES_L; i++) {
        printf("Movimento L número %d:\n", i);

        // Primeiro movimento: dois passos para baixo (while)
        j = 1;
        while(j <= PASSOS_BAIXO) {
            printf("Baixo\n");
            j++;
        }

        // Segundo movimento: um passo para a esquerda (while)
        j = 1;
        while(j <= PASSOS_ESQUERDA) {
            printf("Esquerda\n");
            j++;
        }

        printf("\n");  // Espaço entre os movimentos L
    }

    return 0;
}



