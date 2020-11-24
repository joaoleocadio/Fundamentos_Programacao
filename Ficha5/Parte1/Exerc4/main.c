
/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 24 de Novembro de 2020, 17:49
 */

#include <stdio.h>
#include <stdlib.h>
#include "header.h"
/*
 * 
 */
int main(int argc, char** argv) {
    int matriz1[VALOR][VALOR];
    int matriz2[VALOR][VALOR];
    int somar[VALOR][VALOR];
    
    preencherMatriz(matriz1);
    imprimirLinha();
    puts("*** Vetor 2 ****");
    preencherMatriz(matriz2);
    imprimirLinha();
    puts("*** Soma das matrizes ***");
    somarMatriz(matriz1, matriz2, somar);
    imprimirLinha();
    printf("Somatório das duas matrizes %d\n", somatorio(matriz1, matriz2));
    
}

