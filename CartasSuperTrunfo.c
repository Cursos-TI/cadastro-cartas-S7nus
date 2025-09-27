#include <stdio.h>

int main(){
    char estado1[5], estado2[5];
    char codigo1[8], codigo2[8];
    char nome1[40], nome2[40];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontotur1, pontotur2;
    float densidade1, densidade2;
    float pibpercapita1, pibpercapita2;
    float superpoder1, superpoder2;

    printf ("Bem vindo ao Super Trunfo de Estados Brasileiros!\n");

    // Primeira carta
    printf("Primeira Carta:\n");
    printf("Escolha uma letra de A a H: ");
    scanf("%s", estado1);
    printf("Escolha um código (ex: A01): ");
    scanf("%s", codigo1);
    printf("Escolha o nome da cidade: ");
    scanf(" %[^\n]s", nome1);
    printf("Escolha a população do estado: ");
    scanf("%lu", &populacao1);
    printf("Escolha a área do estado (km²): ");
    scanf("%f", &area1);
    printf("Escolha o PIB do estado (R$): ");
    scanf("%f", &pib1);
    printf("Escolha a pontuação turística (0-100): ");
    scanf("%d", &pontotur1);

    // Segunda carta
    printf("\nSegunda Carta:\n");
    printf("Escolha uma letra de A a H: ");
    scanf("%s", estado2);
    printf("Escolha um código (ex: B02): ");
    scanf("%s", codigo2);
    printf("Escolha o nome da cidade: ");
    scanf(" %[^\n]s", nome2);
    printf("Escolha a população do estado: ");
    scanf("%lu", &populacao2);
    printf("Escolha a área do estado (km²): ");
    scanf("%f", &area2);
    printf("Escolha o PIB do estado (R$): ");
    scanf("%f", &pib2);
    printf("Escolha a pontuação turística (0-100): ");
    scanf("%d", &pontotur2);

    // Cálculos
    densidade1 = (float)populacao1 / area1;
    pibpercapita1 = pib1 / (float)populacao1;
    superpoder1 = populacao1 + area1 + pib1 + pontotur1 + pibpercapita1 + (1.0f / densidade1);

    densidade2 = (float)populacao2 / area2;
    pibpercapita2 = pib2 / (float)populacao2;
    superpoder2 = populacao2 + area2 + pib2 + pontotur2 + pibpercapita2 + (1.0f / densidade2);

    // Exibição das cartas
    printf("\nCarta 1:\nEstado: %s\nCódigo: %s\nNome: %s\nPopulação: %lu\nÁrea: %.2f\nPIB: %.2f\nPontos Turísticos: %d\nDensidade: %.2f\nPIB per capita: %.2f\nSuper Poder: %.2f\n",
           estado1, codigo1, nome1, populacao1, area1, pib1, pontotur1, densidade1, pibpercapita1, superpoder1);

    printf("\nCarta 2:\nEstado: %s\nCódigo: %s\nNome: %s\nPopulação: %lu\nÁrea: %.2f\nPIB: %.2f\nPontos Turísticos: %d\nDensidade: %.2f\nPIB per capita: %.2f\nSuper Poder: %.2f\n",
           estado2, codigo2, nome2, populacao2, area2, pib2, pontotur2, densidade2, pibpercapita2, superpoder2);

    // Comparações
    printf("\n=== RESULTADOS DAS COMPARAÇÕES ===\n");
    printf("População: %d\n", (populacao1 > populacao2) ? 1 : 0);
    printf("Área: %d\n", (area1 > area2) ? 1 : 0);
    printf("PIB: %d\n", (pib1 > pib2) ? 1 : 0);
    printf("Pontos Turísticos: %d\n", (pontotur1 > pontotur2) ? 1 : 0);
    printf("PIB per capita: %d\n", (pibpercapita1 > pibpercapita2) ? 1 : 0);
    printf("Densidade populacional: %d\n", (densidade1 < densidade2) ? 1 : 0);
    printf("Super Poder: %d\n", (superpoder1 > superpoder2) ? 1 : 0);

    return 0;
}