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
