
/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 12 de Novembro de 2020, 10:05
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    const int COLUNA = 3;
    const int LINHA = 3;
    int vetor[LINHA][COLUNA];
    int maior, menor;
    
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            printf("Introduza o elemento [%d][%d]: ", i, j);
            scanf("%d", &vetor[i][j]);
        }
    }
    
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            if (i == 0 && j == 0) {
                menor = vetor[0][0];
                maior = vetor[0][0];
            }
            if (vetor[i][j] > maior) {
                maior = vetor[i][j];
            } else if (vetor[i][j] < menor) {
                menor = vetor[i][j];
            }
        }
    }
    printf("Maior Número da matriz: %d\n", maior);
    printf("Menor número da matriz: %d\n", menor);
    
    
    puts("\n***Matriz Completa***\n");
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            printf("%4d", vetor[i][j]);
        }
        puts("\n");
    }
}

