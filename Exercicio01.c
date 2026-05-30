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
