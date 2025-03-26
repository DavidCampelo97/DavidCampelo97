#include <stdio.h>

int main() {
    int populacao, numero_de_pontos_turisticos;
    char carta_1[1], carta_2[1], estado[50], codigo_da_carta[50], nome_da_cidade[50];
    float pib, area_em_km, densidade_populacional, pib_per_capita;

    // Carta 1
    printf("Carta 1: \n");

    printf("Digite o estado: \n");
    scanf("%s", estado);

    printf("codigo da carta: \n");
    scanf("%s", codigo_da_carta);

    printf("nome da cidade: \n");
    scanf("%s", nome_da_cidade);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao);

    printf("area em km²: \n");
    scanf("%f", &area_em_km); 

    printf("Digite o pib: \n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &numero_de_pontos_turisticos);

    // Calculando a densidade populacional
    densidade_populacional = populacao / area_em_km;

    // Calculando o PIB per capita
    pib_per_capita = pib / populacao;

    // Exibindo as informações da Carta 1
    printf("Carta 1: %s\n", carta_1);
    printf("estado: %s\n", estado);
    printf("codigo da carta: %s\n", codigo_da_carta);
    printf("nome da cidade: %s\n", nome_da_cidade);
    printf("população: %d\n", populacao);
    printf("area em km²: %.2f\n", area_em_km); 
    printf("pib: %.2f\n", pib); 
    printf("numero de pontos turisticos: %d\n", numero_de_pontos_turisticos);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade_populacional);
    printf("PIB per capita: %.2f\n\n", pib_per_capita);

    // Carta 2
    printf("Carta 2: \n");

    printf("Digite o estado: \n");
    scanf("%s", estado);

    printf("codigo da carta: \n");
    scanf("%s", codigo_da_carta);

    printf("nome da cidade: \n");
    scanf("%s", nome_da_cidade);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao);

    printf("area em km²: \n");
    scanf("%f", &area_em_km); 

    printf("Digite o pib: \n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &numero_de_pontos_turisticos);

    // Calculando a densidade populacional
    densidade_populacional = populacao / area_em_km;

    // Calculando o PIB per capita
    pib_per_capita = pib / populacao;

    // Exibindo as informações da Carta 2
    printf("Carta 2: %s\n", carta_2);
    printf("estado: %s\n", estado);
    printf("codigo da carta: %s\n", codigo_da_carta);
    printf("nome da cidade: %s\n", nome_da_cidade);
    printf("população: %d\n", populacao);
    printf("area em km²: %.2f\n", area_em_km); 
    printf("pib: %.2f\n", pib); 
    printf("numero de pontos turisticos: %d\n", numero_de_pontos_turisticos);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade_populacional);
    printf("PIB per capita: %.2f\n", pib_per_capita);

    return 0;
}
