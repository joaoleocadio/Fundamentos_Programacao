/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 2 de Novembro de 2020, 14:39
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int i, num = 0;
    
    while (num <= 0){
        puts("Introduza um inteiro positivo: ");
        scanf("%d", &num);
        
    }
    
    for (i = num; i >= 0; --i) {
        if (i % 2 != 0) {
            printf("Impar: %d\n", i);
        }
    }
}

