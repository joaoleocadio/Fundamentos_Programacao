
/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 30 de Outubro de 2020, 11:07
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int code, numDias = 0;
    float valorIliq, alimentacao, irs, segSocial, total = 0.0;
    char op;
    
    
    puts("Escolha o tipo de funcionario:  ");
    scanf("%s", &op);
    
    puts("Introduza o código do funcionário: ");
    scanf("%d", &code);
    puts("Introduza o número de dias que trabalhou: ");
    scanf("%d", &numDias);
    
    switch (op){
        case 'e':
        case 'E':  
            puts("Empregado! ");
            valorIliq = numDias * 40;
            alimentacao = numDias * 5;
            
            if (valorIliq < 1000){
                irs = valorIliq * 0.10;
            } else {
                irs = valorIliq * 0.20;
            }
            
            segSocial = valorIliq * 0.11 + valorIliq * 0.2375;
            total = valorIliq + alimentacao - irs - segSocial;
            
            printf("Valor ilíquido a receber: %.2f\n", valorIliq);
            printf("Total subsidio de alimentacao: %.2f\n", alimentacao);
            printf("Valor da retencao do irs: %.2f\n", irs);
            printf("Valor total a entregar Seguranca Social: %.2f\n", segSocial);
            printf("Valor liquido a receber pelo funcionario: %.2f\n", total);
            break;
        case 'c':
        case 'C':
            puts("Chefe! ");
            valorIliq = numDias * 60;
            alimentacao = numDias * 7.5;
            
            if (valorIliq < 1000){
                irs = valorIliq * 0.10;
            } else {
                irs = valorIliq * 0.20;
            }
            
            segSocial = valorIliq * 0.09 + valorIliq * 0.21;
            total = valorIliq + alimentacao - irs - segSocial;
            
            printf("Valor ilíquido a receber: %.2f\n", valorIliq);
            printf("Total subsidio de alimentacao: %.2f\n", alimentacao);
            printf("Valor da retencao do irs: %.2f\n", irs);
            printf("Valor total a entregar Seguranca Social: %.2f\n", segSocial);
            printf("Valor liquido a receber pelo funcionario: %.2f\n", total);
            break;
        case 'a':
        case 'A':
            puts("Administradores! ");
            valorIliq = numDias * 80;
            alimentacao = numDias * 7.5;
            
            if (valorIliq < 1000){
                irs = valorIliq * 0.10;
            } else {
                irs = valorIliq * 0.20;
            }
            
            segSocial = valorIliq * 0.09 + valorIliq * 0.21;
            total = valorIliq + alimentacao - irs - segSocial;
            
            printf("Valor ilíquido a receber: %.2f\n", valorIliq);
            printf("Total subsidio de alimentacao: %.2f\n", alimentacao);
            printf("Valor da retencao do irs: %.2f\n", irs);
            printf("Valor total a entregar Seguranca Social: %.2f\n", segSocial);
            printf("Valor liquido a receber pelo funcionario: %.2f\n", total);
            break;
        default:
            printf("Utilizador Inválido! ");
    }
}