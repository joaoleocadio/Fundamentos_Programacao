
/* 
 * File:   main.c
 * Author: joaoc
 *
 * Created on 4 de Novembro de 2020, 16:44
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int op, cont0, cont1, cont2, cont3 = 0;
    int cont4, cont5, cont9;
    float soma = 0.0;
    
    cont0 = cont1 = cont2 = cont3 = cont4 = cont5 = cont9 = 0;
    
    do {
        puts("Introduza o seu voto: ");
        scanf("%d", &op);
        
        switch (op) {
            case 0:
                puts("Voto em branco!");
                cont0++;
                break;
            case 1:
                puts("Voto para a lista 1!");
                cont1++;
                break;
            case 2:
                puts("Voto para a lista 2!");
                cont2++;
                break;
            case 3:
                puts("Voto para a lista 3!");
                cont3++;
                break;
            case 4:
                puts("Voto para a lista 4!");
                cont4++;
                break;
            case 5:
                puts("Voto para a lista 5!");
                cont5++;
                break;
            case 9:
                puts("Voto nulo!");
                cont9++;
                break;
            default:
                puts("Introduza um voto válido!");
                break;
        }
    } while (op != -1);
    
    soma = cont0 + cont1 + cont2 + cont3 + cont4 + cont5 + cont9;

    printf("Total de votos: %.2f\n", soma);
    printf("Lista 1: %.2f%%\n", (float) (cont1 / soma) * 100);
    printf("Lista 2: %.2f%%\n", (float) (cont2 / soma) * 100);
    printf("Lista 3: %.2f%%\n", (float) (cont3 / soma) * 100);
    printf("Lista 4: %.2f%%\n", (float) (cont4 / soma) * 100);
    printf("Lista 5: %.2f%%\n", (float) (cont5 / soma) * 100);
    printf("Votos em Branco: %.2f%%\n", (float) (cont0 / soma) * 100);
    printf("Votos Nulos: %.2f%%\n", (float) (cont9 / soma) * 100);
}

