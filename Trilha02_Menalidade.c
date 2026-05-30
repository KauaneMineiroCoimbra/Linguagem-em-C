// 9. Mensalidade Universidade
// ----------------------------------------------------------------
#include <stdio.h>
#include <string.h>

int main() {

    char curso[10];
    char isento[10];

    float desconto, valor = 0, final;

    printf("Digite a sigla do curso: ");
    scanf("%s", curso);

    printf("Isento? ");
    scanf("%s", isento);

    printf("Desconto: ");
    scanf("%f", &desconto);

    if (strcmp(curso, "SI") == 0) {
        valor = 900;
    }
    else if (strcmp(curso, "ADS") == 0) {
        valor = 750;
    }
    else if (strcmp(curso, "CS") == 0) {
        valor = 1150;
    }
    else if (strcmp(curso, "EC") == 0) {
        valor = 1300;
    }
    else if (strcmp(curso, "ES") == 0) {
        valor = 950;
    }
    else {
        printf("Curso nao encontrado");
        return 0;
    }

    if (strcmp(isento, "Sim") == 0) {
        final = 0;
    }
    else {
        final = valor - (valor * desconto / 100);
    }

    printf("Valor da mensalidade: R$ %.2f", final);

    return 0;
}
