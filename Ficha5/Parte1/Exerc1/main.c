
/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 20 de Novembro de 2020, 16:29
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

int numero() 
{
    int num = 0;
    puts("Introduza um numero: ");
    scanf("%d", &num);
    return num;
}

int main(int argc, char** argv) {
    int num = 0;
    
    num = numero();
    
    puts("### Asteriscos ###");
    for (int i = 0; i < num; i++) 
    {
        printf("*");
    }
    puts("\n");
    
}

