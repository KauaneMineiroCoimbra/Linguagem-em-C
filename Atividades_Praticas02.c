// 1. Orçamento Familiar

#include <stdio.h>

int main() {
    float ganhos, gastos;

    printf("Digite os ganhos: ");
    scanf("%f", &ganhos);

    printf("Digite os gastos: ");
    scanf("%f", &gastos);

    if (ganhos >= gastos) {
        printf("Voce esta dentro do orcamento!");
    } else {
        printf("Voce esta fora do orcamento! Nao gaste mais!");
    }

    return 0;
}

// 2. Semaforo
//----------------------------------------------------------------

#include <stdio.h>
#include <string.h>

int main() {
    char cor[20];

    printf("Digite a cor do semaforo: ");
    scanf("%s", cor);

    if (strcmp(cor, "Vermelho") == 0) {
        printf("Espere");
    } else if (strcmp(cor, "Verde") == 0) {
        printf("Atravesse");
    } else {
        printf("Farol inoperante");
    }

    return 0;
}

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

// 7. Nota de Corte
//----------------------------------------------------------------
#include <stdio.h>

int main() {

    float nota, corte, minima;

    printf("Nota do candidato: ");
    scanf("%f", &nota);

    printf("Nota de corte: ");
    scanf("%f", &corte);

    printf("Nota minima: ");
    scanf("%f", &minima);

    if (nota < corte) {
        printf("Situacao candidato: Reprovado");
    }
    else if (nota >= minima) {
        printf("Situacao candidato: Aprovado");
    }
    else {
        printf("Situacao candidato: Lista de Espera");
    }

    return 0;
}

// 8. Calculadora com Menu
//----------------------------------------------------------------
#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {

    float n1, n2;

    char op[20];

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    printf("Digite a operacao: ");
    scanf("%s", op);

    if (strcmp(op, "1") == 0 || strcmp(op, "Soma") == 0) {

        printf("%.1f + %.1f = %.1f", n1, n2, n1 + n2);
    }

    else if (strcmp(op, "2") == 0 || strcmp(op, "Subtracao") == 0) {

        printf("%.1f - %.1f = %.1f", n1, n2, n1 - n2);
    }

    else if (strcmp(op, "3") == 0 || strcmp(op, "Multiplicacao") == 0) {

        printf("%.1f * %.1f = %.1f", n1, n2, n1 * n2);
    }

    else if (strcmp(op, "4") == 0 || strcmp(op, "Divisao") == 0) {

        printf("%.1f / %.1f = %.1f", n1, n2, n1 / n2);
    }

    else if (strcmp(op, "5") == 0 || strcmp(op, "Resto") == 0) {

        printf("%.1f mod %.1f = %.1f", n1, n2, fmod(n1, n2));
    }

    else if (strcmp(op, "6") == 0 || strcmp(op, "Potencia") == 0) {

        printf("%.1f ^ %.1f = %.1f", n1, n2, pow(n1, n2));
    }

    else {
        printf("Operacao nao suportada");
    }

    return 0;
}


// 9. Mensalidade Universidade
// ----------------------------------------------------------------
#include <stdio.h>
#include <string.h>

int main() {

    char curso[10];
    char isento[10];

    float desconto, valor = 0, final;

    printf("Digite a sigla do curso: ");
    scanf("%s", curso);

    printf("Isento? ");
    scanf("%s", isento);

    printf("Desconto: ");
    scanf("%f", &desconto);

    if (strcmp(curso, "SI") == 0) {
        valor = 900;
    }
    else if (strcmp(curso, "ADS") == 0) {
        valor = 750;
    }
    else if (strcmp(curso, "CS") == 0) {
        valor = 1150;
    }
    else if (strcmp(curso, "EC") == 0) {
        valor = 1300;
    }
    else if (strcmp(curso, "ES") == 0) {
        valor = 950;
    }
    else {
        printf("Curso nao encontrado");
        return 0;
    }

    if (strcmp(isento, "Sim") == 0) {
        final = 0;
    }
    else {
        final = valor - (valor * desconto / 100);
    }

    printf("Valor da mensalidade: R$ %.2f", final);

    return 0;
}


// 10. Ingressos para o Cinema
// ----------------------------------------------------------------
#include <stdio.h>
#include <string.h>

int main() {

    int inteiras, meias;
    float valor, total;

    char dia[20];
    char nacional[10];

    printf("Quantidade de inteiras: ");
    scanf("%d", &inteiras);

    printf("Quantidade de meias: ");
    scanf("%d", &meias);

    printf("Dia da semana: ");
    scanf("%s", dia);

    printf("Filme nacional? ");
    scanf("%s", nacional);

    if (strcmp(nacional, "Sim") == 0) {

        valor = 5.00;
    }

    else if (strcmp(dia, "Quarta-feira") == 0) {

        valor = 14.50;
    }

    else {

        valor = 28.50;
    }

    total = (inteiras * valor) + (meias * (valor / 2));

    printf("Total a pagar: R$ %.2f", total);

    return 0;
}