
/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 2 de Novembro de 2020, 14:31
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int num, soma, cont = 0;
    float media = 0.0;
    
    do {
        puts("Introduza um numero: ");
        scanf("%d", &num);
        soma += num;
        cont++;
    } while ( num!= 0);
    
    media = (float) soma / (cont - 1);
    printf("A media e: %.2f\n", media);
}

