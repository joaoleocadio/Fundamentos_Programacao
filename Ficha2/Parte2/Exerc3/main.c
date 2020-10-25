/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 25 de Outubro de 2020, 22:06
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int op = 0;
    
    puts("Introduza a opcao: ");
    scanf("%d", &op);
    
    switch (op){
        case 1:
            puts("1. Criar");
            break;
        case 2: 
            puts("2. Atualizar");
            break;
        case 3:
            puts("3. Eliminar");
            break;
        case 4:
            puts("4. Sair");
            break;
        default:
            puts("fora das opcoes validas!");
    }
    return (EXIT_SUCCESS);
}

