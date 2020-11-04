
/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 4 de Novembro de 2020, 15:11
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int op = 0;
    
    do {
        puts("1. Criar");
        puts("2. Atualizar");
        puts("3. Eliminar");
        puts("4. Sair");
        puts("Escolha a opcao desejada: ");
        scanf("%d", &op);
        
        switch (op) {
            case 1:
                puts("Criado\n");
                break;
            case 2:
                puts("Atualizado\n");
                break;
            case 3:
                puts("Eliminado\n");
                break;
            case 4:
                puts("Saiu!\n");
                break;
            default:
                puts("Introduza 4 para sair!");
        }
    } while (op != 4); 
}

