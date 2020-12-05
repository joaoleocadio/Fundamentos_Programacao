/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 30 de Novembro de 2020, 10:29
 */

#include <stdio.h>
#include <stdlib.h>

#include "hearder.h"
#define ANO 12
/*
 * 
 */
int main(int argc, char** argv) {
    int op;
    char nome;
    int dias[ANO];
    float iliquido[ANO];
    float alimentacao[ANO];
    float irs[ANO];
    float segSocial[ANO];
    
    imprimirNome(nome);
    imprimeLinhaHeader();
    op = escolherFuncionario();
    introduzirCodigo();
    
    for (int i = 0; i < ANO; i++) {
        dias[i] = preencherDias(i);
    }
    
    valorIliquido(op, dias, iliquido);
    valorAlimentacao(op, dias, alimentacao);
    valorIRS(iliquido, irs);
    valorSegSocial(op, iliquido, segSocial);
    calculoMes(iliquido, alimentacao, irs, segSocial);
}

