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

    // Entrada da primeira carta
    printf("\n***SUPER TRUNFO CARTA -1*** ");
    printf("\nInforme os dados da primeira carta:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);//coleta a letra referente ao Estado Carta-1
    
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);// coleta o Código da Carta-1
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1); //coleta o nome da cidade Carta -1 - %[^\n]: Lê a linha inteira até encontrar Enter.
    
    getchar();  // Limpa o \n deixado pelo scanf anterior(CASO CONTRARIO , O PROXIMO scanf irá ler o \n e nao o valor)

    printf("População: ");
    scanf("%d", &populacao1); //coleta a população Carta-1

    printf("Área (km²): ");
    scanf("%f", &area1);// coleta a área em KM² Carta-1

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);// coleta o PIB Carta-1

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);// coleta a quantidade de pontos turisticos Carta-1

    // Entrada da segunda carta
    printf("\n***SUPER TRUNFO CARTA -2*** ");
    printf("\nInforme os dados da segunda carta:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);// coleta a letra referente ao estado Carta-2
    
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);// coleta o código da carta-2
    
    printf("Nome da Cidade: "); 
    scanf(" %[^\n]", nomeCidade2); //coleta o nome da cidade Carta-2 - %[^\n]: Lê a linha inteira até encontrar Enter.

    getchar();  // Limpa o \n deixado pelo scanf anterior(CASO CONTRÁRIO , O PROGRAMA NÃO LÊ O PRÓXIMO VALOR CORRETAMENTE)

    printf("População: ");
    scanf("%d", &populacao2);// coleta a população Carta-2

    printf("Área (km²): ");
    scanf("%f", &area2); // coleta a área em Km²-Carta-2

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);// coleta o PIB em bilhões de reais Carta-2

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2); // coleta os pontos turisticos Carta-2

    // Exibir os dados cadastrados
    printf("\n---**CARTAS CADASTRADAS** ---\n");
    // CARTA -1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1); // %.2f - limita a duas casas decimais a saida dos dados
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    // CARTA -2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2); // %.2f limita a duas casas decimais a saída de dados
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
