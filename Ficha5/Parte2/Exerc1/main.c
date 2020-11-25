
/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 24 de Novembro de 2020, 22:10
 */

#include <stdio.h>
#include <stdlib.h>

#include "myIntLib.h"

/*
 * 
 */
int main(int argc, char** argv) {
    int num = 0;
    
    linha();
    num = numero();
    imprimirAsteriscos(num);
}

