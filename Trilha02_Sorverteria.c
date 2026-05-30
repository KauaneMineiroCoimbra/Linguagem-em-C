// 4. Sorveteria em Promocao
//----------------------------------------------------------------

#include <stdio.h>

int main() {
    float gramas, total, preco100g;

    printf("Digite o total de gramas: ");
    scanf("%f", &gramas);

    if (gramas <= 0) {
        printf("Peso invalido");
    } else {

        if (gramas >= 1000) {
            preco100g = 3.00;
        } else {
            preco100g = 3.50;
        }

        total = (gramas / 100) * preco100g;

        printf("O total e R$ %.2f", total);
    }

    return 0;
}
