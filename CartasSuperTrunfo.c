#include <stdio.h>

//Desafio Novato

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char nome1[25], nome2[25];
    int populacao1, populacao2, pontosturisticos1, pontosturisticos2;
    float area1, area2, PIB1, PIB2;

    // Entrada para cidade 1
    printf("Digite o nome de sua cidade 1: ");
    scanf("%s", nome1);

    printf("Digite o número da sua população 1: ");
    scanf("%d", &populacao1);

    printf("Digite o número de pontos turísticos de sua cidade 1: ");
    scanf("%d", &pontosturisticos1);

    printf("Digite o tamanho da sua cidade 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da sua cidade 1: ");
    scanf("%f", &PIB1);

    // Entrada para cidade 2
    printf("\nDigite o nome de sua cidade 2: ");
    scanf("%s", nome2);

    printf("Digite o número da sua população 2: ");
    scanf("%d", &populacao2);

    printf("Digite o número de pontos turísticos de sua cidade 2: ");
    scanf("%d", &pontosturisticos2);

    printf("Digite o tamanho da sua cidade 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da sua cidade 2: ");
    scanf("%f", &PIB2);

    // Saída para cidade 1
    printf("\nNome da cidade 1 é: %s\n", nome1);
    printf("Número da sua população 1 é: %d\n", populacao1);
    printf("A quantidade de pontos turísticos 1: %d\n", pontosturisticos1);
    printf("Tamanho de sua cidade 1 é: %f\n", area1);
    printf("O PIB da sua cidade 1 é: %f\n", PIB1);

    // Saída para a cidade 2
    printf("\nNome da cidade 2 é: %s\n", nome2);
    printf("Número da sua população 2 é: %d\n", populacao2);
    printf("A quantidade de pontos turísticos 2: %d\n", pontosturisticos2);
    printf("Tamanho de sua cidade 2 é: %f\n", area2);
    printf("O PIB da sua cidade 2 é: %f\n", PIB2);

    return 0;
}
