// 10. Ingressos para o Cinema
// ----------------------------------------------------------------
#include <stdio.h>
#include <string.h>

int main() {

    int inteiras, meias;
    float valor, total;

    char dia[20];
    char nacional[10];

    printf("Quantidade de inteiras: ");
    scanf("%d", &inteiras);

    printf("Quantidade de meias: ");
    scanf("%d", &meias);

    printf("Dia da semana: ");
    scanf("%s", dia);

    printf("Filme nacional? ");
    scanf("%s", nacional);

    if (strcmp(nacional, "Sim") == 0) {

        valor = 5.00;
    }

    else if (strcmp(dia, "Quarta-feira") == 0) {

        valor = 14.50;
    }

    else {

        valor = 28.50;
    }

    total = (inteiras * valor) + (meias * (valor / 2));

    printf("Total a pagar: R$ %.2f", total);

    return 0;
}
