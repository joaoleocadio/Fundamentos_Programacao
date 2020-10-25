/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 23 de Outubro de 2020, 11:02
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float saldo = 0, total = 0;
    char op;
    
    puts("Introduza o seu saldo: ");
    scanf("%f", &saldo);
    puts("Introduza a operacao");
    scanf("%s", &op);
    
    switch (op){
        case 'd':
        case 'D':
            puts("Introduza o valor a debitar: ");
            scanf("%f", &total);
            if (total > saldo){
                puts("Operacao impossivel!");
            } else {
            saldo -= total;
            printf("Saldo: %.2f\n", saldo);
            }
            break;
        case 'c':
        case 'C':
            puts("Introduza o valor a creditar: ");
            scanf("%f", &total);
            saldo += total;
            printf("Saldo: %.2f\n", saldo);
            break;  
    }
    return (EXIT_SUCCESS);
}

