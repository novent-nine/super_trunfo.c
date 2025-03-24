
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CARTAS 2
#define MAX_ATRIBUTOS 5

typedef struct {
    char estado[50];
    char cidade[50];
    int populacao; // em milhares
    float area;    // em Km²
    float pib;     // em milhões
    int pontosTuristicos;
} Carta;

void inicializarBaralho(Carta baralho[]) {
    strcpy(baralho[0].estado, "São Paulo");
    strcpy(baralho[0].cidade, "Nuporanga");
    baralho[0].populacao = 8300; // 8,3 mil
    baralho[0].area = 343.2;    // em Km²
    baralho[0].pib = 33.28;      // em milhões
    baralho[0].pontosTuristicos = 5;

    strcpy(baralho[1].estado, "Minas Gerais");
    strcpy(baralho[1].cidade, "Sacramento");
    baralho[1].populacao = 30770;  // 30,77 milhare
    baralho[1].area = 1300.30;    // em Km²
    baralho[1].pib = 110.65;      // em milhões
    baralho[1].pontosTuristicos = 12;
}


void exibirCarta(Carta carta) {
    printf("Estado: %s\n", carta.estado);
    printf("Cidade: %s\n", carta.cidade);
    printf("População: %d mil\n", carta.populacao);
    printf("Área: %.2f Km²\n", carta.area);
    printf("PIB: %.2f milhões\n", carta.pib);
    printf("Pontos Turísticos: %d\n", carta.pontosTuristicos);
}

int main() {
    Carta baralho[MAX_CARTAS];
    inicializarBaralho(baralho);

    printf("Exibindo a primeira carta:\n");
    exibirCarta(baralho[0]);

    printf("\nExibindo a segunda carta:\n");
    exibirCarta(baralho[1]);

    return 0;
}
