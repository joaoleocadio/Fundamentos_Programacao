/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 11 de Novembro de 2020, 22:22
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {


    char frase[20];
    int i = 0;
    system("clear");

    printf("\nDigite a frase a ser encriptada:");

    scanf("%s", frase);

    printf("\n\nFrase encriptada com sucesso!\n\n");
    printf("Encriptacao:  ");
    for (i = 0; i < strlen(frase); i++) {
        int enc = (int) frase[i] + 4;
        printf("%c", (char) enc);
    }
    printf("\n\n");
}

