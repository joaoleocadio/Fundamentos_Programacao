/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 23 de Outubro de 2020, 10:06
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int num1 = 0, num2 = 0;
    
    puts("Introduza um numero: ");
    scanf("%d", &num1);
    puts("Introduza outro numero: ");
    scanf("%d", &num2);
    
    if (num1 > num2){
        printf("Maior: %d, Menor: %d\n", num1, num2);
    }
    else if (num1 == num2){
        printf("Os numeros sao iguais!\n ");
    } else {
        printf("Maior: %d, Menor: %d\n", num2, num1);
    }
    
    return (EXIT_SUCCESS);
}

