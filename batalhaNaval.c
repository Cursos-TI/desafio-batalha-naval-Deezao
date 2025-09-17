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
    for (int j = 7; j < 10; j++){
        tabuleiro[8][j] = 3;
    }
    
    // Navio vertical
    for (int i = 5; i < 8; i++) {
        tabuleiro[i][4] = 3;
    }
    for (int i = 3; i < 6; i++)
    {
        tabuleiro[i][7] = 3;
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
    
    printf("  \n");

    //HABILIDADES CONE

    printf("%d", )












    
    //int skill;
    
    // Hora das habilidades
    //printf("Escolha qual habilidade deseja usar: \n");
    //printf("1. Formato em cone \n");
    //printf("2. Formato em octaedro \n");
    //printf("3. Formato em cruz \n");
    //scanf("%d", &skill);

    //switch(skill){
      //  case1:{
        //    printf("Habilidade em cone");
        //break;
        //}
        //case2: {
         //   printf("Habilidade em Octaedro");
         //   break;
       // }
        //case3 : {
          //  printf("Habilidade em cruz");
            //break;
        //}
        //default:
          //  break;
        //}
        
        
        
        
        
        return 0;
    }
