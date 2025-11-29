#include <stdio.h>

int main() {

    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

//Carta1
    printf("CARTA 1.\n");
    printf("Digite o estado (De 'A' a 'H'): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (De '01' a '04'): ");
    scanf("%3s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n");

//Carta2
    printf("CARTA 2\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

//MOSTRAR CARTA1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("\n");

//MOSTRAR CARTA2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n\n", pontosTuristicos2);

    return 0;
}