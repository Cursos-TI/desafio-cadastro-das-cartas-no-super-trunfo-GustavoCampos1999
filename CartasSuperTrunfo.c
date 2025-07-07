#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
int main() {
    //Carta 1
    char estado1[1];
    printf("Digite o Estado da carta 1 \n");
    scanf("%s", &estado1);

    char codigo1[4];
    printf("Digite o Código da carta 1 \n");
    scanf("%s", &codigo1);

    int populacao1;
    printf("Digite a população da carta 1 \n");
    scanf("%d", &populacao1);

    float area1;
    printf("Digite a área da carta 1 \n");
    scanf("%f", &area1);

    float pib1;
    printf("Digite o PIB da carta 1 \n");
    scanf("%f", &pib1);

    int pontost1;
    printf("Digite o número de pontos turístico da carta 1 \n");
    scanf("%d", &pontost1);

    float densidade1 = populacao1/area1;

    float perCapita1 = pib1/populacao1;

    //Carta 2
    char estado2[1];
    printf("Digite o Estado da carta 2 \n");
    scanf("%s", &estado2);

    char codigo2[4];
    printf("Digite o Código da carta 2 \n");
    scanf("%s", &codigo2);

    int populacao2;
    printf("Digite a população da carta 2 \n");
    scanf("%d", &populacao2);

    float area2;
    printf("Digite a área da carta 2 \n");
    scanf("%f", &area2);

    float pib2;
    printf("Digite o PIB da carta 2 \n");
    scanf("%f", &pib2);

    int pontost2;
    printf("Digite o número de pontos turístico da carta 2 \n");
    scanf("%d", &pontost2);

    float densidade2 = populacao2/area2;

    float perCapita2 = pib2/populacao2;

    printf("Carta 1 \n");
    printf("Estado: %s\n", estado1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turístico: %d\n", pontost1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", perCapita1);

    printf("Carta 2 \n");
    printf("Estado: %s\n", estado2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turístico: %d\n", pontost2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", perCapita2);
    return 0;
}
