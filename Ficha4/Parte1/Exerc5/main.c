
/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 12 de Novembro de 2020, 10:33
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * 
 */
int main(int argc, char** argv) {
    const int TAMANHO = 20;
    char string1[TAMANHO];
    char string2[TAMANHO];
    int resultado = 0;
    
    puts("Introduza uma string: ");
    scanf("%s", &string1);
    puts("Introduza outra string para comparar: ");
    scanf("%s", &string2);
    
    resultado = strcmp(string1, string2);
    
    if (resultado == 0) {
        printf("As strings são iguais!\n");
    } else {
        printf("As strings não são iguais!\n");
    }
}

