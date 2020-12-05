
/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 25 de Novembro de 2020, 15:09
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int num1, num2 = 0;
    
    puts("Introduza um numero: ");
    scanf("%d", &num1);
    puts("Introduza outro numero: ");
    scanf("%d", &num2);
    
    printf("Maior: %d\n", maior(num1, num2));
    printf("Menor: %d\n", menor(num1, num2));
}

