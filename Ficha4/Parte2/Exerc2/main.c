
/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 13 de Novembro de 2020, 13:34
 */

#include <stdio.h>
#include <stdlib.h>
/*
 * 
 */


int main(int argc, char** argv) {
    const int N = 5;
    
    int num, cont = 0;
    int vetor[N];
    
    for (int i = 0; i < N; i++) {
        puts("Introduza um numero: ");
        scanf("%d", &num);
        if (num % i == 0){
            ++cont;
        }
        if (cont == 2) {
            vetor[i] = num;
        }
    }
    
    for (int i = 1; i < cont; i++) {
        printf("%3d", vetor[i]);
    }
}

