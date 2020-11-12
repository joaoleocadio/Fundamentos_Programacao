/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 11 de Novembro de 2020, 22:44
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    const int LINHA = 4;
    const int COLUNA = 5;

    int matriz[LINHA][COLUNA];
    int num, cont = 0;


    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            printf("Introduza o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    puts("Introduza o numero a procurar: ");
    scanf("%d", &num);
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            if (num == matriz[i][j]) {
                cont++;
            }
        }
    }
    
    printf("O numero %d existe %d vezes na matriz!\n ", num, cont);
    puts("\n****Matriz Completa****\n");

    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            printf("%3d", matriz[i][j]);
        }
        printf("\n");
    }
}

