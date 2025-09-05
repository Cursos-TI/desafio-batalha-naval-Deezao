#include <stdio.h>

int main() {
    char letras[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int tabuleiro[10][10];

    // Tabuleiro com Agua = 0
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Navio horizontal
    for (int j = 2; j < 5 ; j++) {
        tabuleiro[2][j] = 3;
    }

    // Navio vertical
    for (int i = 5; i < 8; i++) {
        tabuleiro[i][4] = 3;
    }

    // Letras das colunas
    printf("   ");
    for (int j = 0; j < 10; j++) {
        printf(" %c ", letras[j]);
    }
    printf("\n");

    // Linhas com numeros e o tabuleiro
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i);
        for (int j = 0; j < 10; j++) {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
