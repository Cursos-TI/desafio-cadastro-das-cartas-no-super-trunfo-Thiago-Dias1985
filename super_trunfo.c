#include <stdio.h>

int main() {
    // VARIÁVEIS P/CARTA-1 E CARTA-2
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade_populacional1,densidade_populacional2; // variaveis,densidade_populacional1 e 2 e 
    float pib_percapta1,pib_percapta2;             //pib_percapta1 e 2 inseridas para o desafio:nivel aventureiro.


    // Entrada da primeira carta

    printf("\n***SUPER TRUNFO CARTA -1*** ");
    printf("\nInforme os dados da primeira carta:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1); // %[^\n]: Lê a linha inteira até encontrar Enter.
    
    getchar();  // Limpa o \n deixado pelo scanf anterior(CASO CONTRARIO , O PROXIMO scanf ira ler o \n e nao o valor)

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
    densidade_populacional1 = populacao1/area1;//calculo da densidade populacional1
    pib_percapta1 = pib1/populacao1;// calculo do pib por capita1


    // Entrada da segunda carta
    printf("\n***SUPER TRUNFO CARTA -2*** ");
    printf("\nInforme os dados da segunda carta:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2); // %[^\n]: Lê a linha inteira até encontrar Enter.

    getchar();  // Limpa o \n deixado pelo scanf anterior(CASO CONTRÁRIO , O PROGRAMA NÃO LÊ O PRÓXIMO VALOR CORRETAMENTE)

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
    densidade_populacional2 = populacao2/area2;//calculo da densidade populacional2
    pib_percapta2 = pib2/populacao2;// calculo do pib por capita2

    
    // Exibir os dados cadastrados
    printf("\n---**CARTAS CADASTRADAS** ---\n");


    // CARTA -1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_percapta1);


    // CARTA -2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_percapta2);


    return 0;
}
