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

    // Menu interativo
    int opcao;
    printf("\n--- Menu de Comparação ---\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("Escolha o atributo para comparação: ");
    scanf("%d", &opcao);

    // Comparação aninhada e switch
    printf("\n--- Comparação das Cartas ---\n");
    switch (opcao) {
        case 1:
            if (populacao_carta1 > populacao_carta2) {
                printf("Carta 1 venceu (população).\n");
            } else if (populacao_carta2 > populacao_carta1) {
                printf("Carta 2 venceu (população).\n");
            } else {
                printf("As cartas têm a mesma população.\n");
            }
            break;
        case 2:
            if (area_carta1 > area_carta2) {
                printf("Carta 1 venceu (área).\n");
            } else if (area_carta2 > area_carta1) {
                printf("Carta 2 venceu (área).\n");
            } else {
                printf("As cartas têm a mesma área.\n");
            }
            break;
        case 3:
            if (pib_carta1 > pib_carta2) {
                printf("Carta 1 venceu (PIB).\n");
            } else if (pib_carta2 > pib_carta1) {
                printf("Carta 2 venceu (PIB).\n");
            } else {
                printf("As cartas têm o mesmo PIB.\n");
            }
            break;
        case 4:
            if (pontos_turisticos_carta1 > pontos_turisticos_carta2) {
                printf("Carta 1 venceu (pontos turísticos).\n");
            } else if (pontos_turisticos_carta2 > pontos_turisticos_carta1) {
                printf("Carta 2 venceu (pontos turísticos).\n");
            } else {
                printf("As cartas têm o mesmo número de pontos turísticos.\n");
            }
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}
