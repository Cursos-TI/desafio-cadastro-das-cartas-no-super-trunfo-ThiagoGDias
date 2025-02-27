#include <stdio.h>

int main(){
    char nome1[25], nome2[25];
    int populacao1, populacao2, pontosturisticos1, pontosturisticos2;
    float area1, area2, PIB1, PIB2;
    float Den1, Den2, PIBC1, PIBC2;
    double SuperPoder1 , SuperPoder2;


    //Entrada para a primeira cidade
    printf("Digite o nome de sua cidade 1: ");
    scanf("%s", nome1);

    printf("Digite o número da sua população 1: ");
    scanf("%d", &populacao1);

    printf("Digite o número de pontos turísticos de sua cidade 1: ");
    scanf("%d", &pontosturisticos1);

    printf("Digite o tamanho em km² da sua cidade 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da sua cidade 1: ");
    scanf("%f", &PIB1);

    Den1 = populacao1 / area1;
    PIBC1 = PIB1 / populacao1;
    SuperPoder1 = populacao1 + area1 + PIB1 + pontosturisticos1 + Den1 + PIBC1;

    //Entrada para a segunda cidade
    printf("\nDigite o nome de sua cidade 2: ");
    scanf("%s", nome2);

    printf("Digite o número da sua população 2: ");
    scanf("%d", &populacao2);

    printf("Digite o número de pontos turísticos de sua cidade 2: ");
    scanf("%d", &pontosturisticos2);

    printf("Digite o tamanho em km² da sua cidade 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da sua cidade 2: ");
    scanf("%f", &PIB2);

    Den2 = populacao2 / area2;
    PIBC2 = PIB2 / populacao2;
    SuperPoder2 = populacao2 + pontosturisticos2 + area2 + PIB2 + Den2 + PIBC2;


    //Saída para a primeira cidade
    printf("\nNome da cidade 1 é: %s\n", nome1);
    printf("Número da sua população 1 é: %d\n", populacao1);
    printf("A quantidade de pontos turísticos 1: %d\n", pontosturisticos1);
    printf("A área de sua cidade 1 é: %fkm²\n", area1);
    printf("O PIB da sua cidade 1 é: %.2f\n", PIB1);
    printf("A densidade populacional é: %.2f\n", Den1);
    printf("O PIB da capital é: %.2f\n", PIBC1);

    //Saída para a segunda cidade
    printf("\nNome da cidade 2 é: %s\n", nome2);
    printf("Número da sua população 2 é: %d\n", populacao2);
    printf("A quantidade de pontos turísticos 2: %d\n", pontosturisticos2);
    printf("A área de sua cidade 2 é: %.2fkm²\n", area2);
    printf("O PIB da sua cidade 2 é: %.2f\n", PIB2);
    printf("A densidade populacional é: %.2f\n", Den2);
    printf("O PIB da capital é: %.2f\n", PIBC2);

    //Comparação das cidades
    printf("\nPopulação: Carta %d venceu\n", populacao1 > populacao2);
    printf("Pontos Turísticos: Carta %d venceu\n", pontosturisticos1 > pontosturisticos2);
    printf("Área: Carta %d venceu\n", area1 > area2);
    printf("PIB: Carta %d venceu\n", PIB1 > PIB2);
    printf("Dencidade populacional: Carta %d venceu\n", Den1 > Den2);
    printf("PIB da capital: Carta %d venceu\n", PIBC1 > PIBC2);
    printf("Super poder: Carta %d venceu\n", SuperPoder1 > SuperPoder2);

    return 0;
}