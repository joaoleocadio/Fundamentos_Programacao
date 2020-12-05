#include <stdio.h>
/* 
 * File:   hearder.h
 * Author: joaoc
 *
 * Created on 30 de Novembro de 2020, 10:31
 */

#ifndef HEARDER_H
#define HEARDER_H

#ifdef __cplusplus
extern "C" {
#endif

void imprimirNome();
int escolherFuncionario();
void introduzirCodigo();
int preencherDias(int dias);
float valorIliquido(int op, int dias[], float iliquido[]);
float valorAlimentacao(int op, int dias[], float alimentacao[]);
float valorIRS(float iliquido[], float irs[]);
float valorSegSocial(int op, float iliquido[], float segSocial[]);
void calculoMes(float iliq[], float aliment[], float irs[], float segSocial[]);

#ifdef __cplusplus
}
#endif

#endif /* HEARDER_H */

