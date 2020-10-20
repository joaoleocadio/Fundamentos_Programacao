/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 16 de Outubro de 2020, 11:31
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int n1, n2;
    
    puts("Introduza 2 numeros: ");
    scanf("%d%d", &n1, &n2);
    printf("A soma é: %d\n", n1 + n2);
    return (EXIT_SUCCESS);
}

