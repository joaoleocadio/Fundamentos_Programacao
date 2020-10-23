/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 23 de Outubro de 2020, 10:14
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int num1 = 0, num2 = 0, num3 = 0;
    
    puts("Introduza um numero: ");
    scanf("%d", &num1);
    puts("Introduza outro numero: ");
    scanf("%d", &num2);
    puts("Introduza outro numero: ");
    scanf("%d", &num3);
    
    if (num1 < num2 && num1 < num3){
        printf("Menor: %d", num1);
    } else if (num2 < num1 && num2 < num3) {
        printf("Menor: %d", num2);
    } else {
        printf("Menor: %d", num3);
    }
    
    return (EXIT_SUCCESS);
}

