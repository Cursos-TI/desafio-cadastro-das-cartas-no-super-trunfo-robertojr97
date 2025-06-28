#include <stdio.h>

int main () {
    // Variáveis para armazenar os nomes das cidades.
    char estado1 [10];
    char codigo1 [5]; // Código da Cidade. Ex: A01, A02...
    char cidade1 [20]; // Nome da Cidade.
    unsigned long int populacao1; // População da cidade
    float area1; // Área da cidade em km2
    float pib1; // PIB da cidade em bilhões
    int turistico1; // Número de pontos turísticos
    float densidade1; // Calculado como população / área
    float capita1; // Calculado como PIB / população
    float poder1; // Soma de população, área, pib, pib per capita, densidade invertida e número de pontos turísticos.

    char estado2 [10];
    char codigo2 [5];
    char cidade2 [20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int turistico2;
    float densidade2;
    float capita2;
    float poder2;

    int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7;
    int densidadeinverso1;
    int densidadeinverso2;

    // Carta 1
    densidade1 = 1 / densidade1;
    densidade2 = 1 / densidade2;
    poder1 = populacao1 + area1 + pib1 + capita1 + turistico1 + densidade1; // Cálculo do super poder
    
    // Dados da cidade
    printf ("Estado: \n", estado1);
    scanf (" %s", &estado1);

    printf ("Código: \n", codigo1);
    scanf (" %s", &codigo1);

    printf ("Nome da Cidade: \n", cidade1);
    scanf (" %s", &cidade1);

    printf ("População: \n", populacao1);
    scanf (" %d", &populacao1);

    printf ("Área (km²): \n", area1);
    scanf (" %f", &area1);

    printf ("PIB (em bilhões): \n", pib1);
    scanf (" %f", &pib1);

    printf ("Número de Pontos Turísticos: \n", turistico1);
    scanf (" %d", &turistico1);

    // Cálculo Densidade e PIB per capita
    densidade1 = populacao1 / area1;
    capita1 = pib1 / populacao1;

    // Função para listar carta cadastrada
    printf ("*** Carta 1! ***\n");
    printf ("Estado: %s \n", estado1);
    printf ("Código: %s%s \n", estado1, codigo1);
    printf ("Nome da Cidade: %s\n", cidade1);
    printf ("População: %d\n", populacao1);
    printf ("Área (km²): %.2f\n", area1);
    printf ("PIB (em bilhões): %.2f\n", pib1);
    printf ("Número de Pontos Turísticos: %d\n", turistico1);
    printf ("Densidade Populacional: %.2f\n", densidade1);
    printf ("PIB per Capita: %.2f\n", capita1);
    printf ("Super Poder: %.2f\n", poder1);

    // Carta 2
    poder2 = populacao2 + area2 + pib2 + capita2 + turistico2 + densidade2; // Cálculo do super poder

    // Dados da cidade
    printf ("Estado: \n", estado2);
    scanf (" %s", &estado2);

    printf ("Código: \n", codigo2);
    scanf (" %s", &codigo2);

    printf ("Nome da Cidade: \n", cidade2);
    scanf (" %s", &cidade2);

    printf ("População: \n", populacao2);
    scanf (" %d", &populacao2);

    printf ("Área (km²): \n");
    scanf (" %f", &area2);

    printf ("PIB (em bilhões): \n", pib2);
    scanf (" %f", &pib2);

    printf ("Número de Pontos Turísticos: \n", turistico2);
    scanf (" %d", &turistico2);

    // Cálculo Densidade e PIB per capita
    densidade2 = populacao2 / area2;
    capita2 = pib2 / populacao2;

    // Função para listar carta cadastrada
    printf ("*** Carta 2! ***\n");
    printf ("Estado: %s \n", estado2);
    printf ("Código: %s%s \n", estado2, codigo2);
    printf ("Nome da Cidade: %s\n", cidade2);
    printf ("População: %d\n", populacao2);
    printf ("Área (km²): %.2f\n", area2);
    printf ("PIB (em bilhões): %.2f\n", pib2);
    printf ("Número de Pontos Turísticos: %d\n", turistico2);
    printf ("Densidade Populacional: %.2f\n", densidade2);
    printf ("PIB per Capita: %.2f\n", capita2);
    printf ("Super Poder: %.2f\n", poder2);

    //Comparando das Cartas 1 e 2
    resultado1 = populacao1 > populacao2;
    resultado2 = area1 > area2;
    resultado3 = pib1 > pib2;
    resultado4 = turistico1 > turistico2;
    resultado5 = densidade1 < densidade2;
    resultado6 = capita1 > capita2;
    resultado7 = poder1 > poder2;

    //Exibir as informações da comparação das cartas
    printf ("*** Duelo das Cartas ***\n");
    printf ("População: Carta %d venceu\n", resultado1);
    printf ("Área: Carta %d venceu\n", resultado2);
    printf ("PIB: Carta %d venceu\n", resultado3);
    printf ("Pontos Turísticos: Carta %d venceu\n", resultado4);
    printf ("Densidade Populacional: Carta %d venceu\n", resultado5);
    printf ("PIB per Capita: Carta %d venceu\n", resultado6);
    printf ("Super Poder: Carta %d venceu\n", resultado7);

    return 0;
}
