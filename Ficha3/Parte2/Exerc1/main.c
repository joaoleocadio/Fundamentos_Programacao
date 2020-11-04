/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 4 de Novembro de 2020, 14:36
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int num1, num2, soma, subtr = 0;
    float div, mult = 0.0;
    char op, continuar;

    do {
        puts("Introduza a operacao (*|/|-|+)");
        scanf("%s", &op);

        puts("Introduza um numero: ");
        scanf("%d", &num1);
        puts("Introduza um numero: ");
        scanf("%d", &num2);
        
        switch (op) {
            case '+':
                soma = num1 + num2;
                printf("Soma: %d\n", soma);
                puts("Deseja continuar? (s/n)");
                scanf("%s", &continuar);
                break;
            case '/':
                div = num1 / num2;
                printf("Divisao: %.2f\n", div);
                puts("Deseja continuar? (s/n)");
                scanf("%s", &continuar);
                break;
            case '*':
                mult = num1 * num2;
                printf("Multiplicacao: %.2f\n", mult);
                puts("Deseja continuar? (s/n)");
                scanf("%s", &continuar);
                break;
            case '-':
                subtr = num1 - num2;
                printf("Subtracao: %d\n", subtr);
                puts("Deseja continuar? (s/n)");
                scanf("%s", &continuar);
                break;
            default:
                soma = num1 + num2;
                printf("Soma: %d\n", soma);
                puts("Deseja continuar? (s/n)");
                scanf("%s", &continuar);
        }
    } while (continuar != 'n');
}