//10 – Meta Pessoal ativ.10
#include <stdio.h>

int main() {
    char meta[100];

    float valorMeta, salario, despesas;
    float saldo, reserva, valorMetaMes, meses;

    getchar();
    fgets(meta, 100, stdin);

    scanf("%f", &valorMeta);
    scanf("%f", &salario);
    scanf("%f", &despesas);

    saldo = salario - despesas;
    reserva = saldo * 0.30;
    valorMetaMes = saldo - reserva;

    meses = valorMeta / valorMetaMes;

    printf("Meta: %s", meta);
    printf("(R$ %.2f)\n", valorMeta);

    printf("Salário: R$ %.2f - Despesas: R$ %.2f\n",
           salario, despesas);

    printf("Saldo após despesas: R$ %.2f\n", saldo);
    printf("Reserva fixa (30%%): R$ %.2f\n", reserva);

    printf("Valor disponível para a meta: R$ %.2f por mês\n",
           valorMetaMes);

    printf("Prazo estimado para atingir a meta: %.2f meses\n",
           meses);

    return 0;
}
