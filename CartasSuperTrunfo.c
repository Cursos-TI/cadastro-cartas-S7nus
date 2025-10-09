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
    int opcao;

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


    printf("\nAgora vamos exibir a carta vencedora com base no PIB!\n");
    printf("Pib da Carta 1: %.2f\n", pib1);
    printf("Pib da Carta 2: %.2f\n", pib2);       
    // Carta vencedora

    if (pib1 >pib2){
        printf("\nA carta vencedora é a Carta 1: %s com Pib: %.2f\n", nome1, pib1);
    } else if (pib2 > pib1){
        printf("\nA carta vencedora é a Carta 2: %s com Pib: %.2f\n", nome2, pib2);
    } else if (pib1 == pib2){
        printf("\nEmpate! Ambas as cartas têm o mesmo PIB.\n");
    }
// MENU INTERATIVO
    printf("\n===== COMPARE AS CARTAS =====\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    printf("Sua escolha: ");
    scanf("%d", &opcao);

    printf("\nComparando %s e %s...\n", nome1, nome2);

    // SWITCH COMPARATIVO
    switch (opcao) {
        case 1: // População
            printf("População: %s = %lu | %s = %lu\n", nome1, populacao1, nome2, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", nome1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 2: // Área
            printf("Área: %s = %.2f | %s = %.2f\n", nome1, area1, nome2, area2);
            if (area1 > area2)
                printf("Vencedor: %s\n", nome1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 3: // PIB
            printf("PIB: %s = %.2f | %s = %.2f\n", nome1, pib1, nome2, pib2);
            if (pib1 > pib2)
                printf("Vencedor: %s\n", nome1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 4: // Pontos Turísticos
            printf("Pontos Turísticos: %s = %d | %s = %d\n", nome1, pontotur1, nome2, pontotur2);
            if (pontotur1 > pontotur2)
                printf("Vencedor: %s\n", nome1);
            else if (pontotur2 > pontotur1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 5: // Densidade Demográfica (inverte a regra)
            printf("Densidade: %s = %.2f | %s = %.2f\n", nome1, densidade1, nome2, densidade2);
            if (densidade1 < densidade2)
                printf("Vencedor: %s (menor densidade)\n", nome1);
            else if (densidade2 < densidade1)
                printf("Vencedor: %s (menor densidade)\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 6: // PIB per capita
            printf("PIB per capita: %s = %.6f | %s = %.6f\n", nome1, pibpercapita1, nome2, pibpercapita2);
            if (pibpercapita1 > pibpercapita2)
                printf("Vencedor: %s\n", nome1);
            else if (pibpercapita2 > pibpercapita1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 7: // Super Poder
            printf("Super Poder: %s = %.2f | %s = %.2f\n", nome1, superpoder1, nome2, superpoder2);
            if (superpoder1 > superpoder2)
                printf("Vencedor: %s\n", nome1);
            else if (superpoder2 > superpoder1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida! Escolha um número de 1 a 7.\n");
            break;
    }

    printf("\n===== Fim da Partida =====\n");
    

    

    return 0;
}