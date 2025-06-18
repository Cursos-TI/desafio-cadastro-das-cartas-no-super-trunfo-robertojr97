#include <stdio.h>

int main () {
    int carta;
    char estado;
    char codigo[4];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int turistico;

    printf ("Carta: \n");
    scanf ("%d", &carta);

    printf ("Estado: \n");
    scanf ("%d", &estado);

    printf ("Código: \n");
    scanf ("%s", &codigo);

    printf ("Nome da Cidade: \n");
    scanf ("%s", &cidade);

    printf ("População: \n");
    scanf ("%d", &populacao);

    printf ("Área: \n");
    scanf ("%f", &area);

    printf ("PIB: \n");
    scanf ("%f", &pib);

    printf ("Número de Pontos Turísticos: \n");
    scanf ("%d", &turistico);

    printf ("Carta: %d\n", carta);
    printf ("Estado: %d\n", estado);
    printf ("Código: %s%d\n", codigo, estado);
    printf ("Nome da Cidade: %s\n", cidade);
    printf ("População: %d\n", populacao);
    printf ("Área: %.2f\n", area);
    printf ("PIB: %.2f\n", pib);
    printf ("Número de Pontos Turísticos: %d\n", turistico);

        printf ("Carta: \n");
    scanf ("%d", &carta);

    printf ("Estado: \n");
    scanf ("%d", &estado);

    printf ("Código: \n");
    scanf ("%s", &codigo);

    printf ("Nome da Cidade: \n");
    scanf ("%s", &cidade);

    printf ("População: \n");
    scanf ("%d", &populacao);

    printf ("Área: \n");
    scanf ("%f", &area);

    printf ("PIB: \n");
    scanf ("%f", &pib);

    printf ("Número de Pontos Turísticos: \n");
    scanf ("%d", &turistico);

    printf ("Carta: %d\n", carta);
    printf ("Estado: %d\n", estado);
    printf ("Código: %d%s\n", codigo, estado);
    printf ("Nome da Cidade: %s\n", cidade);
    printf ("População: %d\n", populacao);
    printf ("Área: %.2f\n", area);
    printf ("PIB: %.2f\n", pib);
    printf ("Número de Pontos Turísticos: %d\n", turistico);

    return 0;
}