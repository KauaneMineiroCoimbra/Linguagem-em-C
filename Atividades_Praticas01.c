//1 atividade 1. trilha 1
#include <stdio.h>

int main() {
    char nome[50], curso[50], hobby[50];
    int semestre;

    fgets(nome, 50, stdin);
    fgets(curso, 50, stdin);
    scanf("%d", &semestre);
    getchar();
    fgets(hobby, 50, stdin);

    printf("Prazer, eu sou o(a) %s", nome);
    printf("Atualmente estou no %dº semestre de %s", semestre, curso);
    printf("e meu hobby favorito é %s", hobby);

    return 0;
}
//2 – exercicio 2 Churrasco de Domingo
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
//4 – compras no exterior ativ.4
#include <stdio.h>

int main() {
    float real, dolar;

    scanf("%f", &real);

    dolar = real / 5.42;

    printf("Valor em real R$ %.2f.\n", real);
    printf("Valor em dólar $ %.2f.\n", dolar);

    return 0;
}
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
//6 – cuidando da saude ativ.6
#include <stdio.h>
#include <math.h>

int main() {
    char nome[50];
    float altura, peso, imc;

    scanf("%s", nome);
    scanf("%f", &altura);
    scanf("%f", &peso);

    imc = peso / pow(altura, 2);

    printf("%s, seu IMC é de %.4f\n", nome, imc);

    return 0;
}
//7 – Você le rápido? ativ.7 
#include <stdio.h>

int main() {
    char nome[50];
    char livro[100];
    int paginas, tempoSegundos;

    float horas;

    scanf("%s", nome);
    getchar();

    fgets(livro, 100, stdin);

    scanf("%d", &paginas);
    scanf("%d", &tempoSegundos);

    horas = (paginas * tempoSegundos) / 3600.0;

    printf("%s, você finalizará a leitura do livro %s", nome, livro);
    printf("em aproximadamente %.2f horas.\n", horas);

    return 0;
}
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
//9 – Piloto Kart ativ.9
#include <stdio.h>

int main() {
    float pista, tempoVolta;
    int voltas;

    float distanciaKm, tempoMin;

    scanf("%f", &pista);
    scanf("%d", &voltas);
    scanf("%f", &tempoVolta);

    distanciaKm = (pista * voltas) / 1000;
    tempoMin = (tempoVolta * voltas) / 60;

    printf("Análise Preditiva Concluída\n");
    printf("--\n");

    printf("Distância total a ser percorrida: %.2f km.\n", distanciaKm);
    printf("Previsão de conclusão: %.1f minutos.\n", tempoMin);

    return 0;
}
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