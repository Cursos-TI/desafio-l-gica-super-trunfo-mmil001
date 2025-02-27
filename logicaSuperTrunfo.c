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

    // Exibição dos dados da Carta 1
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %s\n", estado_carta1);
    printf("Código: %d\n", codigo_carta1);
    printf("Nome da cidade: %s\n", nome_carta1);
    printf("População: %d\n", populacao_carta1);
    printf("Área: %.2f\n", area_carta1);
    printf("PIB: %.2f\n", pib_carta1);
    printf("Pontos turísticos: %d\n", pontos_turisticos_carta1);

    // Exibição dos dados da Carta 2
    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %s\n", estado_carta2);
    printf("Código: %d\n", codigo_carta2);
    printf("Nome da cidade: %s\n", nome_carta2);
    printf("População: %d\n", populacao_carta2);
    printf("Área: %.2f\n", area_carta2);
    printf("PIB: %.2f\n", pib_carta2);
    printf("Pontos turísticos: %d\n", pontos_turisticos_carta2);

    // Comparação das Cartas (exemplo: comparação pela população)
    printf("\n--- Comparação das Cartas ---\n");
    if (populacao_carta1 > populacao_carta2) {
        printf("Carta 1 venceu (população).\n");
    } else if (populacao_carta2 > populacao_carta1) {
        printf("Carta 2 venceu (população).\n");
    } else {
        printf("As cartas têm a mesma população.\n");
    }

    return 0;
}