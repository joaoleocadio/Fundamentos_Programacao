
/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 13 de Novembro de 2020, 14:20
 */

#include <stdio.h>
#include <stdlib.h>
#define VALOR 3
/*
 * 
 */
int main(int argc, char** argv) {
    int vetor[VALOR][VALOR]; 
    
    for (int i = 0; i < VALOR; i++) {
        for (int j = 0; j < VALOR; j++) {
            printf("Introduza o elemento [%d][%d]: ", i, j);
            scanf("%d", &vetor[i][j]);
        }
    }
    
    printf("*** Matriz ***\n ");
    for (int i = 0; i < VALOR; i++) {
        for (int j = 0; j < VALOR; j++) {           
            printf("%3d", vetor[i][j]);
        }
        puts("\n");
    }
    
    printf("*** Matriz transposta ***\n ");
    for (int i = 0; i < VALOR; i++) {
        for (int j = 0; j < VALOR; j++) {         
            printf("%3d", vetor[j][i]);
        }
        puts("\n");
    }
}