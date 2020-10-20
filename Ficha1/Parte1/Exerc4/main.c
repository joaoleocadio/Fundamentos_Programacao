/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 16 de Outubro de 2020, 11:47
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    float comp, largura;
    
    puts("Introduza o comprimento do retangulo");
    scanf("%f", &comp);
    puts("Introdiza a largura do retangulo");
    scanf("%f", &largura);
    
    float area = comp * largura;
    float perimetro = (largura * 2) + (comp * 2);
    
    printf("A área é: %.2f\n", area);
    printf("O Perimetro é: %.2f\n", perimetro);
    return (EXIT_SUCCESS);
}

