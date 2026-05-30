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
