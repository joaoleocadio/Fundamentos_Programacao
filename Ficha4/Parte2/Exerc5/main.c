/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 14 de Novembro de 2020, 16:57
 */

#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 50
/*
 * 
 */
int main(int argc, char** argv) {
    char str1[50], str2[50]; //define os vetores e tamanho
    int i, j = 0;
    gets(str1);//copia a string str1
    
    for(i = (strlen(str1) - 1); i >= 0; i--) { //a função strlen inverte a string str1 de foma decrescente, enquanto I>=0, I -- decresce I? porque?[/COLOR]
        str2[j] = str1[i];// atribuiu os indexadores as strings[/COLOR]
        j++; //soma +1 ao indexador[/COLOR]
    }
    str2[j] = 0;
    printf("String invertida: %s\n", str2); //escreve a string invertida[/COLOR]
    return 0;
    
}

