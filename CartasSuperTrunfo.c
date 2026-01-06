#include <stdio.h>

// Desafio Super Trunfo - Cidades Brasileiras
// Nível Mestre - Batalha de Cartas + LÓGICA DO JOGO
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

    // CADASTRO E CÁLCULOS
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

    // Exibição das cartas completas (mantido igual)
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

    //  NOVA LÓGICA DO JOGO
    printf("*** BATALHA SUPER TRUNFO ***\n");
    int vitorias1 = 0, vitorias2 = 0, empates = 0;

    // 1. População (maior vence)
    if (populacao1 > populacao2) {
        printf("POPULAÇÃO: %s VENCE! (%lu > %lu)\n", cidade1, populacao1, populacao2);
        vitorias1++;
    } else if (populacao2 > populacao1) {
        printf("POPULAÇÃO: %s VENCE! (%lu > %lu)\n", cidade2, populacao2, populacao1);
        vitorias2++;
    } else {
        printf("POPULAÇÃO: EMPATE! (%lu)\n", populacao1);
        empates++;
    }

    // 2. Área (maior vence)
    if (area1 > area2) {
        printf("ÁREA: %s VENCE! (%.0f > %.0f km²)\n", cidade1, area1, area2);
        vitorias1++;
    } else if (area2 > area1) {
        printf("ÁREA: %s VENCE! (%.0f > %.0f km²)\n", cidade2, area2, area1);
        vitorias2++;
    } else {
        printf("ÁREA: EMPATE! (%.0f km²)\n", area1);
        empates++;
    }

    // 3. PIB (maior vence)
    if (pib1 > pib2) {
        printf("PIB: %s VENCE! (%.1f > %.1f bi)\n", cidade1, pib1, pib2);
        vitorias1++;
    } else if (pib2 > pib1) {
        printf("PIB: %s VENCE! (%.1f > %.1f bi)\n", cidade2, pib2, pib1);
        vitorias2++;
    } else {
        printf("PIB: EMPATE! (%.1f bi)\n", pib1);
        empates++;
    }

    // 4. Pontos turísticos (maior vence)
    if (pontos1 > pontos2) {
        printf("TURISMO: %s VENCE! (%d > %d pts)\n", cidade1, pontos1, pontos2);
        vitorias1++;
    } else if (pontos2 > pontos1) {
        printf("TURISMO: %s VENCE! (%d > %d pts)\n", cidade2, pontos2, pontos1);
        vitorias2++;
    } else {
        printf("TURISMO: EMPATE! (%d pts)\n", pontos1);
        empates++;
    }

    // 5. Densidade (MENOR vence)
    if (densidade1 < densidade2) {
        printf("DENSIDADE: %s VENCE! (%.0f < %.0f hab/km²)\n", cidade1, densidade1, densidade2);
        vitorias1++;
    } else if (densidade2 < densidade1) {
        printf("DENSIDADE: %s VENCE! (%.0f < %.0f hab/km²)\n", cidade2, densidade2, densidade1);
        vitorias2++;
    } else {
        printf("DENSIDADE: EMPATE! (%.0f hab/km²)\n", densidade1);
        empates++;
    }

    // 6. PIB per capita (maior vence)
    if (pib_per_capita1 > pib_per_capita2) {
        printf("PIB/CAP: %s VENCE! (R$%.0f > R$%.0f)\n", cidade1, pib_per_capita1, pib_per_capita2);
        vitorias1++;
    } else if (pib_per_capita2 > pib_per_capita1) {
        printf("PIB/CAP: %s VENCE! (R$%.0f > R$%.0f)\n", cidade2, pib_per_capita2, pib_per_capita1);
        vitorias2++;
    } else {
        printf("PIB/CAP: EMPATE! (R$%.0f)\n", pib_per_capita1);
        empates++;
    }

    // RESULTADO FINAL
    printf("\n*** PLACAR FINAL ***\n");
    printf("%s: %d vitórias\n", cidade1, vitorias1);
    printf("%s: %d vitórias\n", cidade2, vitorias2);
    printf("Empates: %d\n", empates);

    if (vitorias1 > vitorias2) {
        printf("\n %s É A VENCEDORA GERAL! \n", cidade1);
    } else if (vitorias2 > vitorias1) {
        printf("\n %s É A VENCEDORA GERAL! \n", cidade2);
    } else {
        printf("\n EMPATE GERAL! \n");
    }

    return 0;
}