/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 16 de Outubro de 2020, 14:03
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    float preco1, preco2, preco3, total, desconto;
    
    preco1 = preco2 = preco3 = total = desconto = 0.0;
    
    puts("Introduza 3 preços: ");
    scanf("%f%f%f", &preco1, &preco2, &preco3);
    
    desconto = (preco1 + preco2 + preco3) * 0.10;
    
    total = (preco1 + preco2 + preco3) - desconto;
    
    printf("Valor total: %.2f\n", total);
    
    return (EXIT_SUCCESS);
}

