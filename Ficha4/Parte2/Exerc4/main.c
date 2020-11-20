
/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 14 de Novembro de 2020, 15:54
 */

#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 4
/*
 * 
 */
int main(int argc, char** argv) {
    int vetor[TAMANHO][TAMANHO];
    
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("Introduza o elemento [%d][%d]: ", i, j);
            scanf("%d", &vetor[i][j]);
        }
    }
    
    puts("*** Matriz Inserida ***");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%3d", vetor[i][j]);
        }
        puts("\n");
    }
    
    puts("*** Matriz rotacionada 90 graus ***\n ");
    for (int j = 0; j < TAMANHO; j++) {
        for (int i = 3; i >= 0; i--) {         
            printf("%3d", vetor[i][j]);
        }
        puts("\n");
    }
    
}

