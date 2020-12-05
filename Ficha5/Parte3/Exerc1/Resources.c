
#include <stdio.h>
#define ANO 12
#define HEADER "---------------------------------------------------------------"

void imprimeLinhaHeader() {
    puts(HEADER);
}

void imprimirNome(char nome) {

    puts("Introduza um nome: ");
    scanf("%s", &nome);
    
    return nome;
}

int escolherFuncionario() {
    int op;
    
    puts("Escolha o tipo de funcionario:  ");
    puts("1. Empregado!");
    puts("2. Chefe!");
    puts("3. Administradores!");
    puts("-1. sair!");
    scanf("%d", &op);
    
    return op;
}

void introduzirCodigo() {
    int cod = 0;

    puts("Introduza o código do funcionário: ");
    scanf("%d", &cod);
}

int preencherDias(int mes) {
    int num_dias;
    
    printf("Introduza o número de dias trabalhados no mês %d: ", mes + 1);
    scanf("%d", &num_dias);
    return num_dias;
}

float valorIliquido(int op, int dias[], float iliquido[]) {
    
    for (int i = 0; i < ANO; i++) {
        if (op == 1 && dias[i] > 20) {
            iliquido[i] = 40 * dias[i] + (0.05 * (40 * dias[i]));
        } else if (op == 1 && dias[i] > 17) {
            iliquido[i] = 40 * dias[i] + (0.02 * (40 * dias[i]));
        } else if (op == 1) {
            iliquido[i] = 40 * dias[i];
        } else if (op == 2 && dias[i] > 20) {
            iliquido[i] = 60 * dias[i] + (0.05 * (60 * dias[i]));
        } else if (op == 2 && dias[i] > 17) {
            iliquido[i] = 60 * dias[i] + (0.02 * (60 * dias[i]));
        } else if (op == 2) {
            iliquido[i] = 60 * dias[i]; 
        } else if (op == 3 && dias[i] > 20) {
            iliquido[i] = 80 * dias[i] + (0.05 * (80 * dias[i]));
        } else if (op == 3 && dias[i] > 17) {
            iliquido[i] == 80 * dias[i] + (0.02 * (80 * dias[i]));
        } else if (op == 3) {
            iliquido[i] = 80 * dias[i];
        }
    }
}

float valorAlimentacao(int op, int dias[], float alimentacao[]) {
    
    for (int i = 0; i < ANO; i++) {
        if (op == 1 && dias[i] > 20) {
            alimentacao[i] = 5 * dias[i];
        } else if (op == 1 && dias[i] > 17) {
            alimentacao[i] = 5 * dias[i];
        } else if (op == 1) {
            alimentacao[i] = 5 * dias[i];
        } else if (op == 2 && dias[i] > 20) {
            alimentacao[i] = 7.5 * dias[i];
        } else if (op == 2 && dias[i] > 17) {
            alimentacao[i] = 7.5 * dias[i];
        } else if (op == 2) {
            alimentacao[i] = 7.5 * dias[i];
        } else if (op == 3 && dias[i] > 20) {
            alimentacao[i] = 7.5 * dias[i];
        } else if (op == 3 && dias[i] > 17) {
            alimentacao[i] = 7.5 * dias[i];
        } else if (op == 3) {
            alimentacao[i] = 7.5 * dias[i];
        }
    }
}

float valorIRS(float iliquido[], float irs[]) {
    for (int i = 0; i < ANO; i++) {
        if (iliquido[i] < 1000) {
            irs[i] = 0.10 * iliquido[i];
        } 
        else if (iliquido[i] < 2500) {
            irs[i] = 0.20 * iliquido[i];
        }
        else if (iliquido[i] >= 2500) {
            irs[i] = 0.30 * iliquido[i];
        }
    }
}

float valorSegSocial(int op, float iliquido[], float segSocial[]) {
    for (int i = 0; i < ANO; i++) {
        if (op == 3) {
            segSocial[i] = (0.09 * iliquido[i]) + (0.21 * iliquido[i]);
        }
        else if (op == 1 || op == 2) {
            segSocial[i] = (0.11 * iliquido[i] + (0.2375 * iliquido[i]));
        }
    }
}

void calculoMes(float iliq[], float aliment[], float irs[], float segSocial[]) {
    float totalAno = 0.0;
    
    for (int i = 0; i < ANO; i++) {
        puts("*** Cálculo do mês ***\n");
        printf("Mês %d\n", i + 1);
        printf("Valor ilíquido a receber: %.2f\n", (float) iliq[i]);
        printf("Total do subsídio de alimentação: %.2f\n", (float) aliment[i]);
        printf("Valor do IRS: %.2f\n", (float) irs[i]);
        printf("Valor a entregar à segurança social: %.2f\n", (float) segSocial[i]);
        printf("Valor líquido a receber: %.2f\n", (float) iliq[i] + (float) aliment[i] - (float) irs[i] - (float) segSocial[i]);
        
        totalAno += (float) iliq[i] + (float) aliment[i] - (float) irs[i] - (float) segSocial[i];
        printf("Valor total recebido durante o ano: %.2f\n", totalAno);
    }
}