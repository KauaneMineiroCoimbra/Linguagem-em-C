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
