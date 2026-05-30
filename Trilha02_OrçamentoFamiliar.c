// 1. Orçamento Familiar

#include <stdio.h>

int main() {
    float ganhos, gastos;

    printf("Digite os ganhos: ");
    scanf("%f", &ganhos);

    printf("Digite os gastos: ");
    scanf("%f", &gastos);

    if (ganhos >= gastos) {
        printf("Voce esta dentro do orcamento!");
    } else {
        printf("Voce esta fora do orcamento! Nao gaste mais!");
    }

    return 0;
}
