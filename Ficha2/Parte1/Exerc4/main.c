/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 23 de Outubro de 2020, 10:24
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int num = 0;
    
    puts("Introduza um numero: ");
    scanf("%d", &num);
    
    if (num % 2 == 0){
        printf("O numero %d é par!\n", num);
    } else {
        printf("O numero %d é impar!\n", num);
    }
    
}

