
/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 23 de Outubro de 2020, 10:45
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float num1 = 0, num2 = 0;
    char ch;
    
    puts("Escolha uma operacao (*|+|/|-)");
    scanf("%c", &ch);
    puts("Introduza um numero: ");
    scanf("%f", &num1);
    puts("Introduza outro numero: ");
    scanf("%f", &num2);
    
    
    switch (ch){
        case '*':
            printf("Multiplicacao: %f", num1 * num2);
            break;
        case '/':
            printf("Divisao: %f", num1 / num2);
            break;
        case '+':
            printf("Soma: %f", num1 + num2);
            break;
        case '-':
            printf("Subtracao: %f", num1 - num2);
        default:
            printf("Soma: %f", num1 + num2);
    }
}

