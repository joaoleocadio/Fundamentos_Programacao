/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 16 de Outubro de 2020, 13:50
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    float num1, num2, num3;
    
    num1 = num2 = num3 = 0;
    
    puts("Introduza um valor: ");
    scanf("%f", &num1);
    puts("Introduza um valor: ");
    scanf("%f", &num2);
    puts("Introduza um valor: ");
    scanf("%f", &num3);
    
    float media = ((num1 * 0.20) + (num2 * 0.30) + (num3 * 0.50));
    
    printf("A média é: %.2f\n", media);
    
    return (EXIT_SUCCESS);
}

