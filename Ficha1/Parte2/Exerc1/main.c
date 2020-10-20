
/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 16 de Outubro de 2020, 12:03
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    char ch, aux, ant;
    
    puts("Introduza um caracter: ");
    scanf("%c", &ch);
    
    printf("Antecessor: %c\n", ch-= 1);
    printf("Sucessor: %c\n", ch+= 2);
    
    return (EXIT_SUCCESS);
}

