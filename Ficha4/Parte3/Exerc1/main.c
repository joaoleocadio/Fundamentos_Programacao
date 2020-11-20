
/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 15 de Novembro de 2020, 22:05
 */

#include <stdio.h>
#include <stdlib.h>
#define ANO 12
/*
 * 
 */
int main(int argc, char** argv) {
    int cod = 0;
    char nome, op;
    int dias[ANO];
    int iliquido[ANO];
    int alimentacao[ANO];
    int irs[ANO];
    int segSocial[ANO];
    float totalAno = 0.0;
    
    puts("Introduza o nome: ");
    scanf("%s", &nome);  
    
    puts("Escolha o tipo de funcionario:  ");
    puts("1. Empregado!");
    puts("2. Chefe!");
    puts("3. Administradores!");
    puts("-1. sair!");
    scanf("%d", &op);
    
    puts("Introduza o código do utilizador: ");
    scanf("%d", &cod);
    
    for (int i = 1; i <= ANO; i++) {
        printf("Introduza os dias que trabalhou no mes %d: ", i);
        scanf("%d", &dias[i]);
        
        if (op == 1 && dias[i] > 20) {
            iliquido[i] = 40 * dias[i] + (0.05 * (40 * dias[i]));
            alimentacao[i] = 5 * dias[i];
        } else if (op == 1 && dias[i] > 17) {
            iliquido[i] = 40 * dias[i] + (0.02 * (40 * dias[i]));
            alimentacao[i] = 5 * dias[i];
        } else if (op == 1) {
            iliquido[i] = 40 * dias[i];
            alimentacao[i] = 5 * dias[i];
        } else if (op == 2 && dias[i] > 20) {
            iliquido[i] = 60 * dias[i] + (0.05 * (60 * dias[i]));
            alimentacao[i] = 7.5 * dias[i];
        } else if (op == 2 && dias[i] > 17) {
            iliquido[i] = 60 * dias[i] + (0.02 * (60 * dias[i]));
            alimentacao[i] = 7.5 * dias[i];
        } else if (op == 2) {
            iliquido[i] = 60 * dias[i]; 
            alimentacao[i] = 7.5 * dias[i];
        } else if (op == 3 && dias[i] > 20) {
            iliquido[i] = 80 * dias[i] + (0.05 * (80 * dias[i]));
            alimentacao[i] = 7.5 * dias[i];
        } else if (op == 3 && dias[i] > 17) {
            iliquido[i] == 80 * dias[i] + (0.02 * (80 * dias[i]));
            alimentacao[i] = 7.5 * dias[i];
        } else if (op == 3) {
            iliquido[i] = 80 * dias[i];
            alimentacao[i] = 7.5 * dias[i];
        }
    }
    
    for ( int i = 1; i <= ANO; i++) {
        if (iliquido[i] < 1000) {
            irs[i] = 0.10 * iliquido[i];
        } else if (iliquido[i] < 2500) {
            irs[i] = 0.20 * iliquido[i];
        } else if (iliquido[i] >= 2500 ) {
            irs[i] = 0.30 * iliquido[i];
        }
    }
    
    for (int i = 1; i <= ANO; i++) {
        if (op == 3) {
            segSocial[i] = (0.09 * iliquido[i]) + (0.21 * iliquido[i]);
        } else if (op == 1 || op == 2) {
            segSocial[i] = (0.11 * iliquido[i] + (0.2375 * iliquido[i]));
        }
    }
    
    for (int i = 1; i <= ANO; i++) {
        puts("*** Cálculo do mês ***\n");
        printf("Mês %d\n", i);
        printf("Valor ilíquido a receber: %.2f\n", (float) iliquido[i]);
        printf("Total do subsídio de alimentação: %.2f\n", (float) alimentacao[i]);
        printf("Valor da retenção de IRS: %.2f\n", (float) irs[i]);
        printf("Valor a entregar à segurança social: %.2f\n", (float) segSocial[i]);
        printf("Valor líquido a receber: %.2f\n", (float) iliquido[i] + (float) alimentacao[i] - (float) irs[i] - (float) segSocial[i]);
        
        totalAno += (float) iliquido[i] + (float) alimentacao[i] - (float) irs[i] - (float) segSocial[i];
        printf("Valor total recebido durante o ano: %.2f\n", totalAno);
    }  
}

