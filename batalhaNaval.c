#include <stdio.h>

#define TAMANHO_TABULEIRO 10
   
   void inicializar_Tabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]){
    for (int i =0;i < TAMANHO_TABULEIRO; i++){
        for(int j= 0; j < TAMANHO_TABULEIRO;j++){
            tabuleiro[i][j] = 0;
        }
    }
   }

   void posicionarNavios(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]){
    //Navio horizontal:
    tabuleiro[2][3]=3;
    tabuleiro[2][4]=3;
    tabuleiro[2][5]=3;

    //Navio Vertical:
    tabuleiro[5][7]=3;
    tabuleiro[6][7]=3;
    tabuleiro[7][7]=3;

    //Navio diagonal:
    tabuleiro[1][1]=3;
    tabuleiro[2][2]=3;
    tabuleiro[3][3]=3;

     //Navio diagonal:
     tabuleiro[8][2]=3;
     tabuleiro[7][3]=3;
     tabuleiro[6][4]=3;
   }

   void exibirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]){
    for(int i=0; i < TAMANHO_TABULEIRO; i++){
        for(int j = 0; j<TAMANHO_TABULEIRO;j++){
            printf("%d",tabuleiro[i][j]);
        }
        printf("\n");
    }
   }

int main() {
    
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    inicializar_Tabuleiro(tabuleiro);
    posicionarNavios(tabuleiro);
    exibirTabuleiro(tabuleiro);

    return 0;
}
