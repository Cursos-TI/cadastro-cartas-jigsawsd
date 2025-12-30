#include <stdio.h>

// Desafio Super Trunfo - Cidades Brasileiras
// Tema 2 - Densidade Populacional e PIB per Capita
// Aluno: Felipe de Lima Rodrigues

int main() {

    // Variáveis da carta 1
    char estado1;
    char codigo1[4];
    char cidade1[30];
    int populacao1;
    int pontos1;
    float area1, pib1;
    float densidade1, pib_per_capita1;

    // Variáveis da carta 2
    char estado2;
    char codigo2[4];
    char cidade2[30];
    int populacao2;
    int pontos2;
    float area2, pib2;
    float densidade2, pib_per_capita2;

    // Cadastro da carta 1
    printf("Cadastro da carta 1\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado1);
    printf("Codigo da carta: ");
    scanf("%s", codigo1);
    printf("Nome da cidade (sem espacos): ");
    scanf("%s", cidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);

    // Cálculos para carta 1
    densidade1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0f) / populacao1;

    // Cadastro da carta 2
    printf("\nCadastro da carta 2\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado2);
    printf("Codigo da carta: ");
    scanf("%s", codigo2);
    printf("Nome da cidade (sem espacos): ");
    scanf("%s", cidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);

    // Cálculos para carta 2
    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0f) / populacao2;

    // Exibição da carta 1
    printf("\n*** CARTA 1 ***\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita1);

    // Exibição da carta 2
    printf("\n*** CARTA 2 ***\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita2);

    return 0;
}
