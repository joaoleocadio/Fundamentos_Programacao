/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 4 de Novembro de 2020, 15:58
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int num1, num2, cont = 0;
    
    do {
        puts("Jogador 1 - Introduza um numero entre 0 e 100");
        scanf("%d", &num1);
    } while (num1 < 0 || num1 > 100);
    
    do {
        puts("Jogar 2 - Tente adivinhar o numero introduzido pelo utilizador 1");
        scanf("%d", &num2);
        cont++;
    } while (num1 != num2);
    
    printf("Acertou!\nTentativas: %d\n", cont);
    
}

