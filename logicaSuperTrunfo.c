#include <stdio.h>

int main() {
    // Declaração das variáveis para a Carta 1
    char estado_carta1[50];
    int codigo_carta1;
    char nome_carta1[50];
    int populacao_carta1;
    float area_carta1;
    float pib_carta1;
    int pontos_turisticos_carta1;

    // Declaração das variáveis para a Carta 2
    char estado_carta2[50];
    int codigo_carta2;
    char nome_carta2[50];
    int populacao_carta2;
    float area_carta2;
    float pib_carta2;
    int pontos_turisticos_carta2;

    // Leitura dos dados da Carta 1
    printf("--- Carta 1 ---\n");
    printf("Estado: ");
    scanf(" %[^\n]s", estado_carta1);
    printf("Código: ");
    scanf("%d", &codigo_carta1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]s", nome_carta1);
    printf("População: ");
    scanf("%d", &populacao_carta1);
    printf("Área: ");
    scanf("%f", &area_carta1);
    printf("PIB: ");
    scanf("%f", &pib_carta1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos_carta1);

    // Leitura dos dados da Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: ");
    scanf(" %[^\n]s", estado_carta2);
    printf("Código: ");
    scanf("%d", &codigo_carta2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]s", nome_carta2);
    printf("População: ");
    scanf("%d", &populacao_carta2);
    printf("Área: ");
    scanf("%f", &area_carta2);
    printf("PIB: ");
    scanf("%f", &pib_carta2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos_carta2);

    // Menu dinâmico para escolha dos atributos
    int atributo1, atributo2;
    printf("\n--- Menu de Comparação ---\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &atributo1);
    printf("Escolha o segundo atributo: ");
    scanf("%d", &atributo2);

    // Lógica de decisão complexa com operadores ternários
    printf("\n--- Comparação das Cartas ---\n");
    int resultado1 = 0, resultado2 = 0;

    switch (atributo1) {
        case 1: resultado1 = (populacao_carta1 > populacao_carta2) ? 1 : (populacao_carta1 < populacao_carta2) ? -1 : 0; break;
        case 2: resultado1 = (area_carta1 > area_carta2) ? 1 : (area_carta1 < area_carta2) ? -1 : 0; break;
        case 3: resultado1 = (pib_carta1 > pib_carta2) ? 1 : (pib_carta1 < pib_carta2) ? -1 : 0; break;
        case 4: resultado1 = (pontos_turisticos_carta1 > pontos_turisticos_carta2) ? 1 : (pontos_turisticos_carta1 < pontos_turisticos_carta2) ? -1 : 0; break;
    }

    switch (atributo2) {
        case 1: resultado2 = (populacao_carta1 > populacao_carta2) ? 1 : (populacao_carta1 < populacao_carta2) ? -1 : 0; break;
        case 2: resultado2 = (area_carta1 > area_carta2) ? 1 : (area_carta1 < area_carta2) ? -1 : 0; break;
        case 3: resultado2 = (pib_carta1 > pib_carta2) ? 1 : (pib_carta1 < pib_carta2) ? -1 : 0; break;
        case 4: resultado2 = (pontos_turisticos_carta1 > pontos_turisticos_carta2) ? 1 : (pontos_turisticos_carta1 < pontos_turisticos_carta2) ? -1 : 0; break;
    }

    // Determinação da carta vencedora
    if (resultado1 > resultado2) {
        printf("Carta 1 venceu (%s e %s).\n", (atributo1 == 1) ? "população" : (atributo1 == 2) ? "área" : (atributo1 == 3) ? "PIB" : "pontos turísticos", (atributo2 == 1) ? "população" : (atributo2 == 2) ? "área" : (atributo2 == 3) ? "PIB" : "pontos turísticos");
    } else if (resultado2 > resultado1) {
        printf("Carta 2 venceu (%s e %s).\n", (atributo1 == 1) ? "população" : (atributo1 == 2) ? "área" : (atributo1 == 3) ? "PIB" : "pontos turísticos", (atributo2 == 1) ? "população" : (atributo2 == 2) ? "área" : (atributo2 == 3) ? "PIB" : "pontos turísticos");
    } else {
        printf("Empate (%s e %s).\n", (atributo1 == 1) ? "população" : (atributo1 == 2) ? "área" : (atributo1 == 3) ? "PIB" : "pontos turísticos", (atributo2 == 1) ? "população" : (atributo2 == 2) ? "área" : (atributo2 == 3) ? "PIB" : "pontos turísticos");
    }

    return 0;
}