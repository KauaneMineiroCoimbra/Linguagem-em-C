// 7. Nota de Corte
//----------------------------------------------------------------
#include <stdio.h>

int main() {

    float nota, corte, minima;

    printf("Nota do candidato: ");
    scanf("%f", &nota);

    printf("Nota de corte: ");
    scanf("%f", &corte);

    printf("Nota minima: ");
    scanf("%f", &minima);

    if (nota < corte) {
        printf("Situacao candidato: Reprovado");
    }
    else if (nota >= minima) {
        printf("Situacao candidato: Aprovado");
    }
    else {
        printf("Situacao candidato: Lista de Espera");
    }

    return 0;
}
