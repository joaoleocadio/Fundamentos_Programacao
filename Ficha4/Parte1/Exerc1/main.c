/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 11 de Novembro de 2020, 10:53
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    const int TAM_ARRAY = 10;
    float vetor[TAM_ARRAY], soma = 0;       
    
    for (int i = 1; i <= TAM_ARRAY; i++){
        printf("Introduza o preço do produto %d:", i);
        scanf("%f", &vetor[i]);
        soma+= vetor[i];
    }

    printf("Valor total dos produtos: %.2f\n", soma);
}