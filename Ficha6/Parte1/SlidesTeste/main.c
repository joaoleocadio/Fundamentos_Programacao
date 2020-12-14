/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 6 de Dezembro de 2020, 22:28
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    /*int idade = 20;
    printf("\nIdade: %d", idade);
    printf("\nEndereço: %p", &idade);
    return 0;*/
    int idade = 20, *pIdade;
    pIdade = &idade;
    printf("\nIdade: %d \nEndereço: %p", idade, &idade);
    printf("\npIdade: %p", pIdade);

}


