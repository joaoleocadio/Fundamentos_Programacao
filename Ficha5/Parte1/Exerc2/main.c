
/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 20 de Novembro de 2020, 16:36
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int soma(int num1, int num2){
    return num1 + num2;
}

int subtracao(int num1, int num2){
    return num1 - num2;
}

float divisao (int num1, int num2){
    return (float) num1 / num2;
}

int multiplicacao (int num1, int num2){
    return num1 * num2;
} 

int main(int argc, char** argv) {
    int num1, num2, som, sub, multi = 0;
    float div = 0.0;
    char op;
    
    puts("Escolha a operação aritmética que deseja (/|*|-|+)");
    scanf("%c", &op);
    puts("Introduza um numero: ");
    scanf("%d", &num1);
    puts("Introduza outro numero: ");
    scanf("%d", &num2);
    
    
    switch (op) {
        case '+':
            som = soma(num1, num2);
            printf("A soma é: %d\n", som);
            break;
        case '-':    
            sub = subtracao(num1, num2);
            printf("A subtração é: %d\n", sub);
            break;
        case '/':
            div = divisao(num1, num2);
            printf("A divisão é: %.2f\n", (float) div);
            break;
        case '*':
            multi = multiplicacao(num1, num2);
            printf("A multiplicação é: %d\n", multi);
            break;
        default:
            puts("Operação Inválida!\n");
    }  
}