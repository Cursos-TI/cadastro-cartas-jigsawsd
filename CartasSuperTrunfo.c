#include <stdio.h>

// Desafio Super Trunfo - Cidades Brasileiras
// Nível Mestre - Batalha de Cartas
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

    // Exibição das cartas completas
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

    // BATALHA - Comparações atributo por atributo
    printf("*** RESULTADO DA BATALHA ***\n");

    // População (maior vence)
    printf("Populacao Carta 1 venceu %d\n", populacao1 > populacao2);

    // Área (maior vence)
    printf("Area Carta 1 venceu %d\n", area1 > area2);

    // PIB (maior vence)
    printf("PIB Carta 1 venceu %d\n", pib1 > pib2);

    // Pontos turísticos (maior vence)
    printf("Pontos Turisticos Carta 1 venceu %d\n", pontos1 > pontos2);

    // Densidade (MENOR vence = inverte a lógica)
    printf("Densidade Populacional Carta 1 venceu %d\n", densidade1 < densidade2);

    // PIB per capita (maior vence)
    printf("PIB per Capita Carta 1 venceu %d\n", pib_per_capita1 > pib_per_capita2);

    // Super Poder (maior vence)
    printf("Super Poder Carta 1 venceu %d\n", super_poder1 > super_poder2);

    return 0;
}
