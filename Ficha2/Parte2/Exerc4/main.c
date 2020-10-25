/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 25 de Outubro de 2020, 22:20
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int nota1 = 0, nota2 = 0;
    float media = 0;
    
    puts("Introduza a nota: ");
    scanf("%d", &nota1);
    puts("Introduza a nota: ");
    scanf("%d", &nota2);
    
    if ( (nota1 < 0 || nota1 > 20) || (nota2 < 0 || nota2 > 20)){
        puts("Notas Invalidas!");
        media = 0.0;
    } else {
        media = nota1 * 0.40 + nota2 * 0.60;
    }
    
    if (media >= 9.5){
        puts("O aluno foi aprovado!");
    }
    else if (media == 0.0){
        puts("Media invalida por notas invalidas!");   
    } else {
        puts("O aluno foi reprovado!");
    }
    return (EXIT_SUCCESS);
}

