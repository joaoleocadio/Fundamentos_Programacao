/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 23 de Outubro de 2020, 10:30
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int a = 0;
    
    puts("Introduza um numero: ");
    scanf("%d", &a);
    
    switch (a){
        case 1:
            printf("Um\n");
            break;
        case 2:
            printf("Dois\n");
            break;
        case 3:
            printf("Tres\n");
            break;
        default:
            printf("Escolheu outro numero!\n ");
    }

    return (EXIT_SUCCESS);
}

