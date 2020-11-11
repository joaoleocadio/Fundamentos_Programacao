/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 5 de Novembro de 2020, 14:15
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int code, numDias = 0;
    float valorIliq, alimentacao, irs, segSocial, total = 0.0;
    int op = 0;

    while (op != -1) {
        puts("");
        puts("Introduza o código do funcionário: ");
        scanf("%d", &code);
        
        puts("Introduza o número de dias que trabalhou: ");
        scanf("%d", &numDias);
        
        puts("Escolha o tipo de funcionario:  ");
        puts("1. Empregado!");
        puts("2. Chefe!");
        puts("3. Administradores!");
        puts("-1. sair!");
        scanf("%d", &op);

        switch (op) {
            case 1:
                puts("Empregado! ");
                valorIliq = numDias * 40;
                alimentacao = numDias * 5;

                if (valorIliq < 1000) {
                    irs = valorIliq * 0.10;
                } 
                else if (valorIliq < 2500) {
                    irs = valorIliq * 0.20;
                } else {
                    irs = valorIliq * 0.30;
                }

                segSocial = valorIliq * 0.11 + valorIliq * 0.2375;
                total = valorIliq + alimentacao - irs - segSocial;

                printf("Valor ilíquido a receber: %.2f\n", valorIliq);
                printf("Total subsidio de alimentacao: %.2f\n", alimentacao);
                printf("Valor da retencao do irs: %.2f\n", irs);
                printf("Valor total a entregar Seguranca Social: %.2f\n", segSocial);
                printf("Valor liquido a receber pelo funcionario: %.2f\n", total);
                break;
            case 2:
                puts("Chefe! ");
                valorIliq = numDias * 60;
                alimentacao = numDias * 7.5;

                if (valorIliq < 1000) {
                    irs = valorIliq * 0.10;
                } 
                else if (valorIliq < 2500) {
                    irs = valorIliq * 0.20;
                } else {
                    irs = valorIliq * 0.30;
                }

                segSocial = valorIliq * 0.09 + valorIliq * 0.21;
                total = valorIliq + alimentacao - irs - segSocial;

                printf("Valor ilíquido a receber: %.2f\n", valorIliq);
                printf("Total subsidio de alimentacao: %.2f\n", alimentacao);
                printf("Valor da retencao do irs: %.2f\n", irs);
                printf("Valor total a entregar Seguranca Social: %.2f\n", segSocial);
                printf("Valor liquido a receber pelo funcionario: %.2f\n", total);
                break;
            case 3:
                puts("Administradores! ");
                valorIliq = numDias * 80;
                alimentacao = numDias * 7.5;

                if (valorIliq < 1000) {
                    irs = valorIliq * 0.10;
                } 
                else if (valorIliq < 2500) {
                    irs = valorIliq * 0.20;
                } else {
                    irs = valorIliq * 0.30;
                }

                segSocial = valorIliq * 0.09 + valorIliq * 0.21;
                total = valorIliq + alimentacao - irs - segSocial;

                printf("Valor ilíquido a receber: %.2f\n", valorIliq);
                printf("Total subsidio de alimentacao: %.2f\n", alimentacao);
                printf("Valor da retencao do irs: %.2f\n", irs);
                printf("Valor total a entregar Seguranca Social: %.2f\n", segSocial);
                printf("Valor liquido a receber pelo funcionario: %.2f\n", total);
                break;
            case -1: 
                puts("Saiu!");
                break;
            default:
                printf("Utilizador Inválido! ");
        }
    }    
}

