
#include <stdio.h>
#include <math.h>

int numero() {
    int num = 0;

    while (num <= 0) {
        puts("Introduza um numero de alunos: ");
        scanf("%d", &num);
    }
    return num;
}

void linha() {
    puts("**************");
}

void imprimirAsteriscos(int num) {
    puts("### Asteriscos ###");
    for (int i = 0; i < num; i++) {
        printf("*");
    }
    puts("\n");
}

int notas(int num) {
    int notas[num];
    int i, soma = 0;
    float media = 0.0;
    
    for (i = 0; i < num; i++) {
        printf("Introduza a nota %d: ", i + 1);
        scanf("%d", &notas[i]);
        soma += notas[i];
    }
    
    media = (float) soma / num;
    printf("Média dos alunos: %.2f\n", (float) media);
}

int maior(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int menor(int num1, int num2) {
    if(num2 > num1) {
        return num1;
    } else {
        return num2;
    }
}

