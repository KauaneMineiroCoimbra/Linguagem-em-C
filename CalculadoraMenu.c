// 8. Calculadora com Menu
//----------------------------------------------------------------
#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {

    float n1, n2;

    char op[20];

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    printf("Digite a operacao: ");
    scanf("%s", op);

    if (strcmp(op, "1") == 0 || strcmp(op, "Soma") == 0) {

        printf("%.1f + %.1f = %.1f", n1, n2, n1 + n2);
    }

    else if (strcmp(op, "2") == 0 || strcmp(op, "Subtracao") == 0) {

        printf("%.1f - %.1f = %.1f", n1, n2, n1 - n2);
    }

    else if (strcmp(op, "3") == 0 || strcmp(op, "Multiplicacao") == 0) {

        printf("%.1f * %.1f = %.1f", n1, n2, n1 * n2);
    }

    else if (strcmp(op, "4") == 0 || strcmp(op, "Divisao") == 0) {

        printf("%.1f / %.1f = %.1f", n1, n2, n1 / n2);
    }

    else if (strcmp(op, "5") == 0 || strcmp(op, "Resto") == 0) {

        printf("%.1f mod %.1f = %.1f", n1, n2, fmod(n1, n2));
    }

    else if (strcmp(op, "6") == 0 || strcmp(op, "Potencia") == 0) {

        printf("%.1f ^ %.1f = %.1f", n1, n2, pow(n1, n2));
    }

    else {
        printf("Operacao nao suportada");
    }

    return 0;
}
