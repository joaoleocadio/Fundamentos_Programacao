/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 2 de Novembro de 2020, 14:19
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    char ch;
    
    puts("Maisculas ou minusculas? (M/m)");
    scanf("%c", &ch);
    
    switch(ch){
        case 'M':
            for(char i = 65; i <= 90; i++){
                printf("%c", i);
            }
            break;
        case 'm':
            for(char i = 97; i <= 122; i++){
                printf("%c", i);
            }
            break;         
        default: 
            printf("Caracter invalido!");
    }
            
    return (EXIT_SUCCESS);
}

