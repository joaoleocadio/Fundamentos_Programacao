
/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 16 de Outubro de 2020, 15:27
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int min, segundo, min2, seg2, min3, seg3, min4, seg4, min5, seg5;
    
    puts("Introduza a duracao da 1ª música em mm:ss: ");
    scanf("%d%d", &min, &segundo);
    puts("Introduza a duracao da 2ª música em mm:ss: ");
    scanf("%d%d", &min2, &seg2);
    puts("Introduza a duracao da 3ª música em mm:ss: ");
    scanf("%d%d", &min3, &seg3);
    puts("Introduza a duracao da 4ª música em mm:ss: ");
    scanf("%d%d", &min4, &seg4);
    puts("Introduza a duracao da 5ª música em mm:ss: ");
    scanf("%d%d", &min5, &seg5);
    
    int totalMin = (min + min2 + min3 + min4 + min5);
    int totalSeg = segundo + seg2 + seg3 + seg4 + seg5 + (totalMin * 60);
    
    printf("%dh:%dm:%ds\n", totalSeg / 3600, (totalSeg % 3600) / 60, (totalSeg % 3600) % 60);
      
}

