// 6. Qual e a Cor
//----------------------------------------------------------------
#include <stdio.h>
#include <string.h>

int main() {

    char cor1[20], cor2[20];

    printf("Digite a primeira cor: ");
    scanf("%s", cor1);

    printf("Digite a segunda cor: ");
    scanf("%s", cor2);

    if (
        (strcmp(cor1, "Vermelho") != 0 &&
         strcmp(cor1, "Azul") != 0 &&
         strcmp(cor1, "Amarelo") != 0)

        ||

        (strcmp(cor2, "Vermelho") != 0 &&
         strcmp(cor2, "Azul") != 0 &&
         strcmp(cor2, "Amarelo") != 0)
       ) {

        printf("Apenas cores primarias sao aceitas.");
    }

    else if (
        (strcmp(cor1, "Vermelho") == 0 && strcmp(cor2, "Azul") == 0) ||
        (strcmp(cor1, "Azul") == 0 && strcmp(cor2, "Vermelho") == 0)
    ) {

        printf("A combinacao resulta em: Roxo");
    }

    else if (
        (strcmp(cor1, "Vermelho") == 0 && strcmp(cor2, "Amarelo") == 0) ||
        (strcmp(cor1, "Amarelo") == 0 && strcmp(cor2, "Vermelho") == 0)
    ) {

        printf("A combinacao resulta em: Laranja");
    }

    else if (
        (strcmp(cor1, "Azul") == 0 && strcmp(cor2, "Amarelo") == 0) ||
        (strcmp(cor1, "Amarelo") == 0 && strcmp(cor2, "Azul") == 0)
    ) {

        printf("A combinacao resulta em: Verde");
    }

    else {
        printf("As cores sao iguais.");
    }

    return 0;
}
