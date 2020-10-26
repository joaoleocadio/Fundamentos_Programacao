
/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 26 de Outubro de 2020, 11:55
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int x = 0, y = 0;
    
    puts("Introduza o valor de x: ");
    scanf("%d", &x);
    puts("Introduza o valor de y: ");
    scanf("%d", &y);
    
    if (x > 0 && y > 0){
        puts("primeiro quadrante!");
    }
    else if (x < 0 && y > 0) {
        puts("segundo quandrante!");
    }
    else if (x < 0 && y < 0){
        puts("terceiro quadrante!");
    }
    else if (x > 0 && y < 0){
        puts("quarto quadrante!");
    } else {
        puts("Origem (0,0)");
    }
    
    return (EXIT_SUCCESS);
}

