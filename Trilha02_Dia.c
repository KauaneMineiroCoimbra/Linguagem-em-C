// 3. Dia por Extenso
//----------------------------------------------------------------

#include <stdio.h>

int main() {
    int dia;

    printf("Digite o numero do dia: ");
    scanf("%d", &dia);

    switch(dia) {
        case 0:
            printf("Domingo");
            break;
        case 1:
            printf("Segunda-feira");
            break;
        case 2:
            printf("Terca-feira");
            break;
        case 3:
            printf("Quarta-feira");
            break;
        case 4:
            printf("Quinta-feira");
            break;
        case 5:
            printf("Sexta-feira");
            break;
        case 6:
            printf("Sabado");
            break;
        default:
            printf("Dia da semana invalido");
    }

    return 0;
}
