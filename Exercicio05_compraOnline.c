//5 – Compra Online ativ. 5
#include <stdio.h>

int main() {
    char nome[50];
    float valor, desconto, total;

    scanf("%s", nome);
    scanf("%f", &valor);
    scanf("%f", &desconto);

    total = valor - (valor * desconto / 100);

    printf("Olá %s, sua compra de R$ %.2f foi confirmada!\n", nome, valor);
    printf("Foi aplicado um desconto de %.1f%%.\n", desconto);
    printf("O total final ficou em R$ %.2f\n", total);

    return 0;
}
