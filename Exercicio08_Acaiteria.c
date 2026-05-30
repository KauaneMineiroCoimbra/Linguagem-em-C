//8 – Açaiteria ativ.8
#include <stdio.h>

int main() {
    int p, m, g;
    float desconto, total;

    scanf("%d", &p);
    scanf("%d", &m);
    scanf("%d", &g);
    scanf("%f", &desconto);

    total = (p * 13.5) + (m * 15.0) + (g * 17.5);

    total = total - (total * desconto / 100);

    printf("Seu pedido foi registrado.\n");
    printf("- Açaí P: %d\n", p);
    printf("- Açaí M: %d\n", m);
    printf("- Açaí G: %d\n", g);

    printf("Desconto de %.0f%% aplicado.\n", desconto);
    printf("Total R$ %.2f\n", total);

    return 0;
}
