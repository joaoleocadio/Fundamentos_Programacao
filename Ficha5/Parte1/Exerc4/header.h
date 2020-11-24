
/* 
 * File:   header.h
 * Author: joaoc
 *
 * Created on 24 de Novembro de 2020, 17:49
 */

#ifndef HEADER_H
#define HEADER_H
#define VALOR 4
#ifdef __cplusplus
extern "C" {
#endif

void preencherMatriz(int matriz[VALOR][VALOR]);
void imprimirLinha();
int somatorio(int matriz[VALOR][VALOR], int matriz1[VALOR][VALOR]);

#ifdef __cplusplus
}
#endif

#endif /* HEADER_H */

