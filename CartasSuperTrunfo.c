#include <stdio.h>
#include <stdlib.h>

/*
 * ========================================
 * SUPER TRUNFO - NIVEL MESTRE
 * Comparacao com Multiplos Atributos
 * ========================================
 * 
 * Autor: Felipe de Lima Rodrigues
 * Curso: Analise e Desenvolvimento de Sistemas
 * 
 * OBJETIVO DO DESAFIO:
 * Permitir que o jogador escolha 2 atributos diferentes para comparar,
 * somar os valores desses atributos e declarar o vencedor com base na soma.
 * 
 * BIBLIOTECAS:
 * - stdio.h: scanf, printf (entrada/saida)
 * - stdlib.h: utilitarios basicos
 */

int main() {

    // ==========================================
    // SECAO 1: DECLARACAO DE VARIAVEIS DAS CARTAS
    // ==========================================

    /* Carta 1 - Sao Paulo */
    char estado1 = 'A';
    char codigo1[4] = "A01";
    char cidade1[30] = "Sao_Paulo";
    unsigned long int populacao1 = 12300000;
    float area1 = 1521.0;
    float pib1 = 443.6;  /* em bilhoes de reais */
    int pontos1 = 150;

    /* Carta 2 - Rio de Janeiro */
    char estado2 = 'B';
    char codigo2[4] = "B02";
    char cidade2[30] = "Rio_de_Janeiro";
    unsigned long int populacao2 = 6748000;
    float area2 = 1200.0;
    float pib2 = 190.2;  /* em bilhoes de reais */
    int pontos2 = 200;

    /* Calculos automaticos: densidade populacional e PIB per capita */
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    float pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    /* Variaveis para armazenar as escolhas e resultados */
    int atributo1, atributo2;
    float valor_carta1_atrib1, valor_carta2_atrib1;
    float valor_carta1_atrib2, valor_carta2_atrib2;
    float soma_carta1, soma_carta2;


    // ==========================================
    // SECAO 2: EXIBIR AS CARTAS
    // ==========================================

    printf("\n==========================================\n");
    printf("     SUPER TRUNFO - NIVEL MESTRE\n");
    printf("==========================================\n\n");

    printf("CARTA 1: %s (%c%s)\n", cidade1, estado1, codigo1);
    printf("  Populacao: %lu habitantes\n", populacao1);
    printf("  Area: %.2f km2\n", area1);
    printf("  PIB: R$ %.2f bilhoes\n", pib1);
    printf("  Pontos Turisticos: %d\n", pontos1);
    printf("  Densidade: %.2f hab/km2\n", densidade1);
    printf("  PIB per capita: R$ %.2f\n\n", pib_per_capita1);

    printf("CARTA 2: %s (%c%s)\n", cidade2, estado2, codigo2);
    printf("  Populacao: %lu habitantes\n", populacao2);
    printf("  Area: %.2f km2\n", area2);
    printf("  PIB: R$ %.2f bilhoes\n", pib2);
    printf("  Pontos Turisticos: %d\n", pontos2);
    printf("  Densidade: %.2f hab/km2\n", densidade2);
    printf("  PIB per capita: R$ %.2f\n\n", pib_per_capita2);


    // ==========================================
    // SECAO 3: ESCOLHER O PRIMEIRO ATRIBUTO
    // ==========================================

    printf("==========================================\n");
    printf("  ESCOLHA O PRIMEIRO ATRIBUTO\n");
    printf("==========================================\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("==========================================\n");
    printf("Digite o numero do atributo: ");
    scanf("%d", &atributo1);

    /* Switch para atribuir os valores do primeiro atributo escolhido */
    switch(atributo1) {
        case 1:
            valor_carta1_atrib1 = (float)populacao1;
            valor_carta2_atrib1 = (float)populacao2;
            printf("\nVoce escolheu: POPULACAO\n");
            break;
        case 2:
            valor_carta1_atrib1 = area1;
            valor_carta2_atrib1 = area2;
            printf("\nVoce escolheu: AREA\n");
            break;
        case 3:
            valor_carta1_atrib1 = pib1;
            valor_carta2_atrib1 = pib2;
            printf("\nVoce escolheu: PIB\n");
            break;
        case 4:
            valor_carta1_atrib1 = (float)pontos1;
            valor_carta2_atrib1 = (float)pontos2;
            printf("\nVoce escolheu: PONTOS TURISTICOS\n");
            break;
        case 5:
            valor_carta1_atrib1 = densidade1;
            valor_carta2_atrib1 = densidade2;
            printf("\nVoce escolheu: DENSIDADE POPULACIONAL\n");
            break;
        case 6:
            valor_carta1_atrib1 = pib_per_capita1;
            valor_carta2_atrib1 = pib_per_capita2;
            printf("\nVoce escolheu: PIB PER CAPITA\n");
            break;
        default:
            printf("\nOpcao invalida! Usando Populacao.\n");
            valor_carta1_atrib1 = (float)populacao1;
            valor_carta2_atrib1 = (float)populacao2;
            atributo1 = 1;
    }


    // ==========================================
    // SECAO 4: ESCOLHER O SEGUNDO ATRIBUTO
    // ==========================================

    printf("\n==========================================\n");
    printf("  ESCOLHA O SEGUNDO ATRIBUTO\n");
    printf("==========================================\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("==========================================\n");
    printf("Digite o numero do atributo: ");
    scanf("%d", &atributo2);

    /* Validacao simples: se escolheu o mesmo, pega o proximo */
    if (atributo2 == atributo1) {
        printf("\nAtencao: Voce escolheu o mesmo atributo!\n");
        printf("Selecionando automaticamente outro atributo...\n");
        atributo2 = (atributo1 % 6) + 1;
    }

    /* Switch para atribuir os valores do segundo atributo escolhido */
    switch(atributo2) {
        case 1:
            valor_carta1_atrib2 = (float)populacao1;
            valor_carta2_atrib2 = (float)populacao2;
            printf("Segundo atributo: POPULACAO\n");
            break;
        case 2:
            valor_carta1_atrib2 = area1;
            valor_carta2_atrib2 = area2;
            printf("Segundo atributo: AREA\n");
            break;
        case 3:
            valor_carta1_atrib2 = pib1;
            valor_carta2_atrib2 = pib2;
            printf("Segundo atributo: PIB\n");
            break;
        case 4:
            valor_carta1_atrib2 = (float)pontos1;
            valor_carta2_atrib2 = (float)pontos2;
            printf("Segundo atributo: PONTOS TURISTICOS\n");
            break;
        case 5:
            valor_carta1_atrib2 = densidade1;
            valor_carta2_atrib2 = densidade2;
            printf("Segundo atributo: DENSIDADE POPULACIONAL\n");
            break;
        case 6:
            valor_carta1_atrib2 = pib_per_capita1;
            valor_carta2_atrib2 = pib_per_capita2;
            printf("Segundo atributo: PIB PER CAPITA\n");
            break;
        default:
            printf("Opcao invalida! Usando Area.\n");
            valor_carta1_atrib2 = area1;
            valor_carta2_atrib2 = area2;
    }


    // ==========================================
    // SECAO 5: COMPARAR ATRIBUTOS INDIVIDUALMENTE
    // ==========================================

    printf("\n==========================================\n");
    printf("  COMPARACAO DOS ATRIBUTOS\n");
    printf("==========================================\n");

    /* Comparacao do primeiro atributo */
    printf("\nPrimeiro atributo:\n");
    printf("  %s: %.2f\n", cidade1, valor_carta1_atrib1);
    printf("  %s: %.2f\n", cidade2, valor_carta2_atrib1);

    /* Usando if-else simples para comparar */
    if (valor_carta1_atrib1 > valor_carta2_atrib1) {
        printf("  Vencedor: %s\n", cidade1);
    } else if (valor_carta2_atrib1 > valor_carta1_atrib1) {
        printf("  Vencedor: %s\n", cidade2);
    } else {
        printf("  Empate!\n");
    }

    /* Comparacao do segundo atributo */
    printf("\nSegundo atributo:\n");
    printf("  %s: %.2f\n", cidade1, valor_carta1_atrib2);
    printf("  %s: %.2f\n", cidade2, valor_carta2_atrib2);

    /* Usando if-else simples para comparar */
    if (valor_carta1_atrib2 > valor_carta2_atrib2) {
        printf("  Vencedor: %s\n", cidade1);
    } else if (valor_carta2_atrib2 > valor_carta1_atrib2) {
        printf("  Vencedor: %s\n", cidade2);
    } else {
        printf("  Empate!\n");
    }


    // ==========================================
    // SECAO 6: CALCULAR SOMA E DECLARAR VENCEDOR FINAL
    // ==========================================

    /* Soma simples dos dois atributos de cada carta */
    soma_carta1 = valor_carta1_atrib1 + valor_carta1_atrib2;
    soma_carta2 = valor_carta2_atrib1 + valor_carta2_atrib2;

    printf("\n==========================================\n");
    printf("  RESULTADO FINAL\n");
    printf("==========================================\n");
    printf("Soma %s: %.2f + %.2f = %.2f\n", 
           cidade1, valor_carta1_atrib1, valor_carta1_atrib2, soma_carta1);
    printf("Soma %s: %.2f + %.2f = %.2f\n", 
           cidade2, valor_carta2_atrib1, valor_carta2_atrib2, soma_carta2);

    /* Declaracao do vencedor usando if-else simples */
    printf("\n");
    if (soma_carta1 > soma_carta2) {
        printf("*** VENCEDOR: %s! ***\n", cidade1);
    } else if (soma_carta2 > soma_carta1) {
        printf("*** VENCEDOR: %s! ***\n", cidade2);
    } else {
        printf("*** EMPATE! ***\n");
    }
    printf("==========================================\n\n");

    return 0;
}
