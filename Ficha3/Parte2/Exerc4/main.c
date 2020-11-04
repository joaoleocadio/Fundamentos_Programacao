/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 4 de Novembro de 2020, 16:26
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int i, num;
    int cont = 0;

    do {
        system("clear");
        printf("Digite um número inteiro e positivo: ");
        scanf("%d", &num);
    } while (num <= 0);

    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            cont++;
        }
    }

    if (cont == 2){
        puts("Numero primo! ");
    } else {
        puts("Não é primo! ");
    }

    return 0;
}

