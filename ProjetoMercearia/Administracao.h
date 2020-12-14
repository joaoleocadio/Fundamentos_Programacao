#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXPRODUTOS 30
#define MAXNOMES 25


/* 
 * File:   Administração.h
 * Author: joaoc
 *
 * Created on 13 de Dezembro de 2020, 22:21
 */

typedef struct Produtos {
    int codigo;
    char nome[MAXNOMES];
    int quantidade;
    float preco;
} produtos;

//produtos VetorProdutos[MAXPRODUTOS];

#ifndef UTILS_H
#define UTILS_H

#ifdef __cplusplus
extern "C" {
#endif
    
void primeiraInteracao();
void ultimaInteracao();
void primeiroMenu();
void menuAdministracao();
void menuGestaoProdutos();
int inserirProdutos(produtos VetorProdutos[]); 
int procurarProduto(int codigo);
void listarProdutos(produtos VetorProdutos[]);


#ifdef __cplusplus
}
#endif

#endif /* UTILS_H */

