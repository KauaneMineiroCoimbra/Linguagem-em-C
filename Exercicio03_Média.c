//3 Média de Notas exercicio3
#include <stdio.h>

int main() {
    char nome[50];
    float n1, n2, n3, media;

    scanf("%s", nome);

    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    printf("O(A) estudante %s ficou com média %.1f\n", nome, media);

    return 0;
}
