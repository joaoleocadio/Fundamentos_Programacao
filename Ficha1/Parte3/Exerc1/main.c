
/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 21 de Outubro de 2020, 15:47
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int code, numDias = 0;
    
    puts("Introduza o código do funcionário: ");
    scanf("%d", &code);
    puts("Introduza o número de dias que trabalhou: ");
    scanf("%d", &numDias);
    
    int total = 40 * numDias;
    int alimentacao = 5 * numDias;
    float irs = total * 0.10;
    float segSocial = total * 0.11;
    printf("Valor ilíquido a receber: %d\n", total);
    printf("Total subsidio de alimentacao: %d\n", alimentacao);
    printf("Valor da retencao do irs: %.2f\n", irs);
    printf("Valor total a entregar Seguranca Social: %.2f\n", (float)(segSocial + (total * 0.2375)));
    printf("Valor liquido a receber pelo funcionario: %.2f\n", (float)(total + alimentacao - irs - segSocial));
    return (EXIT_SUCCESS);
}