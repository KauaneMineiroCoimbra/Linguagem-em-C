/2 – exercicio 2 Churrasco de Domingo
#include <stdio.h>

int main() {
    int pessoas;

    scanf("%d", &pessoas);

    float carne = pessoas * 0.300;
    float linguica = pessoas * 0.200;
    float frango = pessoas * 0.150;

    float custoCarne = carne * 50;
    float custoLinguica = linguica * 28;
    float custoFrango = frango * 22;

    float total = custoCarne + custoLinguica + custoFrango;
    float porPessoa = total / pessoas;

    printf("Quantidades:\n");
    printf("Carne: %.1f kg - Linguiça: %.1f kg - Frango: %.1f kg\n",
           carne, linguica, frango);

    printf("Custo total:\n");
    printf("Carne: R$ %.2f - Linguiça: R$ %.2f - Frango: R$ %.2f\n",
           custoCarne, custoLinguica, custoFrango);

    printf("Custo total do churrasco: R$ %.2f\n", total);
    printf("Cada pessoa deve contribuir com: R$ %.2f\n", porPessoa);

    return 0;
}
