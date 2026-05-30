// 5. Boletim Aluno
//----------------------------------------------------------------

#include <stdio.h>

int main() {
    float n1, n2, n3, media;
    int faltas;

    printf("Nota 1: ");
    scanf("%f", &n1);

    printf("Nota 2: ");
    scanf("%f", &n2);

    printf("Nota 3: ");
    scanf("%f", &n3);

    printf("Faltas: ");
    scanf("%d", &faltas);

    media = (n1 + n2 + n3) / 3;

    if ((n1 < 0 || n1 > 10) ||
        (n2 < 0 || n2 > 10) ||
        (n3 < 0 || n3 > 10) ||
        faltas < 0) {

        printf("Parametros invalidos");
    }
    else {

        printf("Media: %.1f\n", media);

        if (faltas > 4) {
            printf("Situacao: Reprovado por Falta");
        }
        else if (media == 0) {
            printf("Situacao: Desistente");
        }
        else if (media >= 8) {
            printf("Situacao: Aprovado com sucesso");
        }
        else if (media >= 6) {
            printf("Situacao: Aprovado");
        }
        else {
            printf("Situacao: Recuperacao");
        }
    }

    return 0;
}
