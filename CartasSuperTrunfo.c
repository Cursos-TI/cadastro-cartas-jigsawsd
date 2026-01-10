#include <stdio.h>

// Desafio Super Trunfo - Cidades Brasileiras
// Nível Aventureiro - Interatividade + Menu de Batalha
// Aluno: Felipe de Lima Rodrigues

int main() {
    // Variáveis da Carta 1
    char estado1, codigo1[4], cidade1[30];
    unsigned long int populacao1;
    int pontos1;
    float area1, pib1, densidade1, pib_per_capita1, super_poder1;

    // Variáveis da Carta 2
    char estado2, codigo2[4], cidade2[30];
    unsigned long int populacao2;
    int pontos2;
    float area2, pib2, densidade2, pib_per_capita2, super_poder2;

    // === CADASTRO DAS CARTAS ===
    // Cadastro Carta 1
    printf("Cadastro da Carta 1\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado1);
    printf("Codigo da carta: ");
    scanf("%s", codigo1);
    printf("Nome da cidade (sem espacos): ");
    scanf("%s", cidade1);
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);

    // Cálculos Carta 1
    densidade1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0f) / populacao1;
    super_poder1 = (float)populacao1 + area1 + pib1 + pontos1 + pib_per_capita1 + (1.0f / densidade1);

    // Cadastro Carta 2
    printf("\nCadastro da Carta 2\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado2);
    printf("Codigo da carta: ");
    scanf("%s", codigo2);
    printf("Nome da cidade (sem espacos): ");
    scanf("%s", cidade2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);

    // Cálculos Carta 2
    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0f) / populacao2;
    super_poder2 = (float)populacao2 + area2 + pib2 + pontos2 + pib_per_capita2 + (1.0f / densidade2);

    // === EXIBIÇÃO DAS CARTAS ===
    printf("\n*** CARTA 1 ***\n");
    printf("Estado: %c | Codigo: %s | Cidade: %s\n", estado1, codigo1, cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bi\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);
    printf("Densidade: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\n*** CARTA 2 ***\n");
    printf("Estado: %c | Codigo: %s | Cidade: %s\n", estado2, codigo2, cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bi\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);
    printf("Densidade: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n\n", super_poder2);

    // === MENU INTERATIVO DE BATALHA ===
    int opcao;
    printf("\n=== MENU DE BATALHA ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populacao (maior vence)\n");
    printf("2 - Area (maior vence)\n");
    printf("3 - PIB (maior vence)\n");
    printf("4 - Pontos turisticos (maior vence)\n");
    printf("5 - Densidade (MENOR vence)\n");
    printf("6 - PIB per capita (maior vence)\n");
    printf("7 - Super Poder (maior vence)\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao);

    // === LÓGICA DE BATALHA COM SWITCH E IF/ELSE ===
    printf("\n*** RESULTADO DA BATALHA ***\n");

    switch(opcao) {
        case 1:
            // Comparação de População (maior vence)
            printf("Comparando POPULACAO...\n");
            if (populacao1 > populacao2) {
                printf("Carta 1 (%s) VENCEU!\n", cidade1);
                printf("%lu > %lu habitantes\n", populacao1, populacao2);
            } else if (populacao2 > populacao1) {
                printf("Carta 2 (%s) VENCEU!\n", cidade2);
                printf("%lu > %lu habitantes\n", populacao2, populacao1);
            } else {
                printf("EMPATE!\n");
                printf("Ambas com %lu habitantes\n", populacao1);
            }
            break;

        case 2:
            // Comparação de Área (maior vence)
            printf("Comparando AREA...\n");
            if (area1 > area2) {
                printf("Carta 1 (%s) VENCEU!\n", cidade1);
                printf("%.2f > %.2f km²\n", area1, area2);
            } else if (area2 > area1) {
                printf("Carta 2 (%s) VENCEU!\n", cidade2);
                printf("%.2f > %.2f km²\n", area2, area1);
            } else {
                printf("EMPATE!\n");
                printf("Ambas com %.2f km²\n", area1);
            }
            break;

        case 3:
            // Comparação de PIB (maior vence)
            printf("Comparando PIB...\n");
            if (pib1 > pib2) {
                printf("Carta 1 (%s) VENCEU!\n", cidade1);
                printf("%.2f > %.2f bilhoes\n", pib1, pib2);
            } else if (pib2 > pib1) {
                printf("Carta 2 (%s) VENCEU!\n", cidade2);
                printf("%.2f > %.2f bilhoes\n", pib2, pib1);
            } else {
                printf("EMPATE!\n");
                printf("Ambas com %.2f bilhoes\n", pib1);
            }
            break;

        case 4:
            // Comparação de Pontos Turísticos (maior vence)
            printf("Comparando PONTOS TURISTICOS...\n");
            if (pontos1 > pontos2) {
                printf("Carta 1 (%s) VENCEU!\n", cidade1);
                printf("%d > %d pontos\n", pontos1, pontos2);
            } else if (pontos2 > pontos1) {
                printf("Carta 2 (%s) VENCEU!\n", cidade2);
                printf("%d > %d pontos\n", pontos2, pontos1);
            } else {
                printf("EMPATE!\n");
                printf("Ambas com %d pontos\n", pontos1);
            }
            break;

        case 5:
            // Comparação de Densidade (MENOR vence - regra invertida)
            printf("Comparando DENSIDADE (menor vence)...\n");
            if (densidade1 < densidade2) {
                printf("Carta 1 (%s) VENCEU!\n", cidade1);
                printf("%.2f < %.2f hab/km²\n", densidade1, densidade2);
            } else if (densidade2 < densidade1) {
                printf("Carta 2 (%s) VENCEU!\n", cidade2);
                printf("%.2f < %.2f hab/km²\n", densidade2, densidade1);
            } else {
                printf("EMPATE!\n");
                printf("Ambas com %.2f hab/km²\n", densidade1);
            }
            break;

        case 6:
            // Comparação de PIB per capita (maior vence)
            printf("Comparando PIB PER CAPITA...\n");
            if (pib_per_capita1 > pib_per_capita2) {
                printf("Carta 1 (%s) VENCEU!\n", cidade1);
                printf("R$ %.2f > R$ %.2f\n", pib_per_capita1, pib_per_capita2);
            } else if (pib_per_capita2 > pib_per_capita1) {
                printf("Carta 2 (%s) VENCEU!\n", cidade2);
                printf("R$ %.2f > R$ %.2f\n", pib_per_capita2, pib_per_capita1);
            } else {
                printf("EMPATE!\n");
                printf("Ambas com R$ %.2f\n", pib_per_capita1);
            }
            break;

        case 7:
            // Comparação de Super Poder (maior vence)
            printf("Comparando SUPER PODER...\n");
            if (super_poder1 > super_poder2) {
                printf("Carta 1 (%s) VENCEU!\n", cidade1);
                printf("%.2f > %.2f pontos\n", super_poder1, super_poder2);
            } else if (super_poder2 > super_poder1) {
                printf("Carta 2 (%s) VENCEU!\n", cidade2);
                printf("%.2f > %.2f pontos\n", super_poder2, super_poder1);
            } else {
                printf("EMPATE!\n");
                printf("Ambas com %.2f pontos\n", super_poder1);
            }
            break;

        default:
            // Opção inválida
            printf("OPCAO INVALIDA! Escolha entre 1 e 7.\n");
            break;
    }

    return 0;
}
