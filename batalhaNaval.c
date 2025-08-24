#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // 1. Expande o tabuleiro para uma matriz 10x10 e inicializa com 0.
    int tabuleiro[10][10] = {0};
    int i, j;

    // 2. Posiciona quatro navios (usando o valor 3), incluindo dois na diagonal.
    // Navio 1 (Horizontal)
    tabuleiro[1][1] = 3;
    tabuleiro[1][2] = 3;
    tabuleiro[1][3] = 3;

    // Navio 2 (Vertical)
    tabuleiro[3][8] = 3;
    tabuleiro[4][8] = 3;
    tabuleiro[5][8] = 3;

    // Navio 3 (Diagonal Principal)
    tabuleiro[3][2] = 3;
    tabuleiro[4][3] = 3;
    tabuleiro[5][4] = 3;

    // Navio 4 (Diagonal Secundária)
    tabuleiro[8][1] = 3;
    tabuleiro[7][2] = 3;
    tabuleiro[6][3] = 3;

    // 3. Exibe o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.
    printf("Tabuleiro 10x10:\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }   
        printf("\n"); // Pula para a próxima linha ao final de cada fileira
    }
    return 0;
}

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

