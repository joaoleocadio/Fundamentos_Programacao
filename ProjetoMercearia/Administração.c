
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Administracao.h"

produtos VetorProdutos[MAXPRODUTOS];

int contador = 0;


void primeiraInteracao() {
    puts("*************************");
    puts("*                       *");
    puts("*     Bem vindo!        *");
    puts("*                       *");
    puts("*************************");
    puts("Pressione Enter para continuar!!");
    getchar();
}

void ultimaInteracao() {
    puts("******************************");
    puts("*                            *");
    puts("*       Volte Sempre!        *");
    puts("*                            *");
    puts("******************************");
    puts("Pressione Enter para continuar!!");
    getchar();
}

/*
 *    Menu inicial
 */
void primeiroMenu() {
    int op;

    do {
        do {
            puts("1. Menu Administração");
            puts("2. Menu Vendas");
            puts("0. Sair");
            scanf("%d", &op);

            if (op < 0 || op > 2) {
                puts("Opção Inválida! Escolha outra opção");
            }
            
        } while (op < 0 || op > 2);

        switch (op) {
            case 1:
                menuAdministracao();
                break;
            case 2:
                break;
            case 0:
                ultimaInteracao();
                break;
        }
    } while (op != 0);
}

/*
 * Menu Administração
 */
void menuAdministracao() {
    int op;

    do {
        do {
            puts("1. Gestão de Produtos");
            puts("2. Vendas Realizadas");
            puts("0. Voltar para menu anterior");
            scanf("%d", &op);
            
            if (op < 0 || op > 2) {
                puts("Opção Inválida!");
            }        
        } while (op < 0 || op > 2);

        switch (op) {
            case 1:
                menuGestaoProdutos();
                break;
            case 2:
                break;
            case 3:
                break;
        }
    } while (op != 0);
}

/*
 * Menu Gestão de Produtos
 */

void menuGestaoProdutos() {
    int op;

    do {
        do {
            puts("1. Inserir Produtos");
            puts("2. Remover Produtos");
            puts("3. Alterar Produtos");
            puts("4. Listagem e consultas de Produtos");
            scanf("%d", &op);
            
            if (op < 0 || op > 4) {
                puts("Opção Inválida!");
            }
        } while (op < 0 || op > 4);
        
        switch (op) {
            case 1:
                inserirProdutos(VetorProdutos);
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                listarProdutos(VetorProdutos);
                break;
        }
    } while (op != 0);
}

void clean_buffer() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

int lerString(char *string, int max) {
    if (fgets(string, max, stdin) != NULL) {
        int tamanho = strlen(string) - 1;
        if (string[tamanho] == '\n') {
            string[tamanho] = '\0';
        } else {
            clean_buffer();
        }
        return 1;
    }
    return 0;
}

int procurarProduto(int codigo) {
    
    for(int i = 0; i < contador; i++) {
        if(VetorProdutos[i].codigo == codigo) {
            return i;
        }
    }
    return -1;
}

int inserirProdutos(produtos VetorProdutos[]) {
    produtos NovoProduto;

    if (contador == MAXPRODUTOS) {
        puts("Lista de produtos Cheia!");
        return contador;
    }
      
    puts("");
    
    do {
        puts("Introduza o código do novo produto: ");
        scanf("%d", &NovoProduto.codigo);
        clean_buffer();
    } while (!procurarProduto(NovoProduto.codigo));
      
    puts("Introduza o nome do novo produto: ");
    lerString(NovoProduto.nome, MAXNOMES);
    
    puts("Introduza a quantidade do novo produto: ");
    scanf("%d", &NovoProduto.quantidade);
    
    puts("Introduza o preço do novo produto: ");
    scanf("%f", &NovoProduto.preco);
    
    VetorProdutos[contador] = NovoProduto;
    ++contador;
    
    return contador;
}

void listarProdutos(produtos VetorProdutos[]) {

    puts("codigo |      nome      | quantidade |   preco");
    
    for(int i = 0; i < contador; i++) {
        puts("");
        printf("%2d", VetorProdutos[i].codigo);
        printf("%18s", VetorProdutos[i].nome);
        printf("%9d", VetorProdutos[i].quantidade);
        printf("%16.2f", VetorProdutos[i].preco);
        puts("\n");
    }
}