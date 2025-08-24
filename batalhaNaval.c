#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // 1. Matriz 5x5 para o tabuleiro e inicializa com 0.
    int tabuleiro[5][5] = {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };
    int i, j;

    // 2. Posiciona dois navios (representados pelo número 1).
    // Navio 1 (Horizontal, 3 posições)
    tabuleiro[1][1] = 1;
    tabuleiro[1][2] = 1;
    tabuleiro[1][3] = 1;

    // Navio 2 (Vertical, 2 posições)
    tabuleiro[3][3] = 1;
    tabuleiro[4][3] = 1;

    // 3. Coordenadas de cada parte dos navios.
    printf("Coordenadas dos navios posicionados:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (tabuleiro[i][j] == 1) {
                printf("Navio na posicao: [%d][%d]\n", i, j);
            }
        }
    }



    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

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

    return 0;
}
