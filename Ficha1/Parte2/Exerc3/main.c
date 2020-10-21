
/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 21 de Outubro de 2020, 15:31
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int valor1, valor2 = 0;
    
    puts("Introduza um valor: ");
    scanf("%d", &valor1);
    puts("Introduza um valor: ");
    scanf("%d", &valor2);
    
    valor1 = valor1 + valor2;
    valor2 = valor1 - valor2;
    valor1 = valor1 - valor2;
    
    printf("Valor 1: %d\nValor 2: %d\n", valor1, valor2);
    return (EXIT_SUCCESS);
}

