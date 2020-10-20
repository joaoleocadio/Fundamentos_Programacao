
/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 16 de Outubro de 2020, 11:38
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int n1, n2;
    float soma, multiplicacao, subtracao, divisao;
    
    soma = multiplicacao = subtracao = divisao = 0.0;
    
    puts("Introduza 2 numeros: ");
    scanf("%d%d", &n1, &n2);
    
    soma = n1 + n2;
    multiplicacao = n1 *n2;
    subtracao = n1 - n2;
    divisao = n1 / n2;
    
    printf("Soma = %.2f\n", soma);
    printf("Multiplicacao = %.2f\n", multiplicacao);
    printf("Subtracao = %.2f\n", subtracao);
    printf("Divisao = %.2f\n", divisao);
    return (EXIT_SUCCESS);
}

