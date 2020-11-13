
/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 12 de Novembro de 2020, 10:48
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    const int TAMANHO = 10;
    
    int vetor[TAMANHO];
    int maior = vetor[0];

    for (int i = 1; i <= TAMANHO; i++) {
        printf("Introduza o elemento %d:", i);
        scanf("%d", &vetor[i]);
    }
    
    for (int i = 1; i <= TAMANHO; i++) {
        if ((vetor[i] % 2 == 0) && (vetor[i] > maior)) {
            maior = vetor[i];
        }
    }    
    printf("O maior número par presente na matriz: %3d\n", maior);
}

