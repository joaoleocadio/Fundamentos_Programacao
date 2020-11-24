
#include <stdio.h>

#include "header.h"

void preencherMatriz(int matriz[VALOR][VALOR]){
    
    for (int i = 0; i < VALOR; i++) {
        for (int j = 0; j < VALOR; j++) {
            printf("Introduza o elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimirLinha(){
    puts("**************************");
}

int somarMatriz(int matriz[VALOR][VALOR], int matriz1[VALOR][VALOR], int somar[VALOR][VALOR]) {
    for (int i = 0; i < VALOR; i++) {
        for (int j = 0; j < VALOR; j++) {
            somar[i][j] = matriz[i][j] + matriz1[i][j];
        }
    }
    
    for (int i = 0; i < VALOR; i++) {
        for (int j = 0; j <  VALOR; j++) {
            printf("%3d", somar[i][j]);
        }
        puts("\n");
    }
}

int somatorio(int matriz[VALOR][VALOR], int matriz1[VALOR][VALOR]) {
    int somatorio = 0;
    
    for (int i = 0; i < VALOR; i++) {
        for (int j = 0; j < VALOR; j++) {
            somatorio += matriz[i][j];
        }
    }
    
    for (int i = 0; i < VALOR; i++) {
        for (int j = 0; j < VALOR; j++) {
            somatorio += matriz1[i][j];
        }
    }
    return somatorio;
}

