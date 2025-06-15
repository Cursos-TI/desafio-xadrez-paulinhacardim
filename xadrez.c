// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

#include <stdio.h>

// Constantes para os movimentos
#define BISPO_MOVIMENTOS 5
#define TORRE_MOVIMENTOS 5
#define RAINHA_MOVIMENTOS 8
#define PASSOS_CAVALO_CIMA 2
#define PASSOS_CAVALO_DIREITA 1

// Função recursiva para movimentar a Torre (direita)
void moverTorre(int passo) {
    if(passo > TORRE_MOVIMENTOS) {
        return;  // Condição de parada
    }
    printf("Direita\n");
    moverTorre(passo + 1);
}

// Função para movimentar a Rainha (esquerda)
void moverRainha(int passo) {
    if(passo > RAINHA_MOVIMENTOS) {
        return;  // Condição de parada
    }
    printf("Esquerda\n");
    moverRainha(passo + 1);
}

// Função  para movimentação do Cavalo (um L: Cima, Cima, Direita)
void moverCavaloRecursivo(int etapa) {
    if(etapa == 1 || etapa == 2) {
        printf("Cima\n");
        moverCavaloRecursivo(etapa + 1);
    }
    else if(etapa == 3) {
        printf("Direita\n");
    }
}

// Função para movimentação do Bispo 
void moverBispo() {
    int i, j;

    printf("===== Movimentação do Bispo =====\n");
    for(i = 1; i <= BISPO_MOVIMENTOS; i++) {
        for(j = 1; j <= 2; j++) {  // Duas direções: Cima + Direita
            if(j == 1) {
                printf("Cima\n");
            }
            else if(j == 2) {
                printf("Direita\n");
            }

            // Exemplo de uso de continue:
            if(i == 3 && j == 1) {
                continue;
            }

            // Exemplo de uso de break:
            if(i == 4 && j == 2) {
                break;  // No quarto movimento, interrompe o segundo loop antes de completar
            }
        }
    }
    printf("\n");
}

int main() {
    printf("========= NÍVEL MESTRE =========\n\n");

    // Bispo com loops aninhados, múltiplas variáveis, break/continue
    moverBispo();

    // Torre com recursão
    printf("===== Movimentação da Torre =====\n");
    moverTorre(1);
    printf("\n");

    // Rainha com recursão
    printf("===== Movimentação da Rainha =====\n");
    moverRainha(1);
    printf("\n");

    // Cavalo com recursão (movimento em L: cima, cima, direita)
    printf("===== Movimentação do Cavalo (Recursivo) =====\n");
    moverCavaloRecursivo(1);
    printf("\n");

    return 0;
}




