#include <stdio.h>

char estado[20];
char codigo[50];
char cidade[50];
int populacao;
float area;
float pib;
int turistco;


int main() {
    printf("digite o estado: ");
    scanf("%s", estado);
    printf("o estado é: %s\n", estado);

    printf("digite o código: ");
    scanf("%s", codigo);
    printf("o codigo é: %s\n", codigo);

    printf("digite a cidade: ");
    scanf("%s", cidade);
    printf("a cidade é: %s\n", cidade);

    printf("digite a população: ");
    scanf("%d", &populacao);
    printf("a população é: %d\n", populacao);

    printf("digite a área: ");
    scanf("%f", &area);
    printf("a área é: %f\n", area);

    printf("digite o PIB: ");
    scanf("%f", &pib);
    printf("o pib é: %f\n", pib);

    printf("digite a quantidade de pontos turísticos: ");
    scanf("%d", &turistco);
    printf("a quantidade de pontos turísticos é: %d\n", turistco);

    return 0;
}
