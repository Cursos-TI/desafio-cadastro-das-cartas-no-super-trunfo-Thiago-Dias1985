#include <stdio.h>
#include <stdlib.h>

int main() {
    // Variáveis
    char estado1[30], estado2[30];
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float densidade1, densidade2;
    float pib1, pib2;
    int pontos1, pontos2;
    float pibPerCapta1, pibPerCapta2;
    float inversoDensidade1, inversoDensidade2;
    float super1, super2;
    float sub1, sub2;
    int comparacao, comparacao2;

    // Entrada Carta 1
    printf("\n***SUPER TRUNFO CARTA -1***\n");
    printf("Estado: ");
    scanf(" %29s", estado1);
    printf("Código da Carta: ");
    scanf("%s", codigo1);
    getchar();
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    getchar();
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos1);

    densidade1 = populacao1 / area1;
    pibPerCapta1 = (pib1 * 1000000000) / populacao1;
    inversoDensidade1 = 1 / densidade1;
    super1 = populacao1 + area1 + pib1 + pontos1 + pibPerCapta1 + inversoDensidade1;

    // Entrada Carta 2
    printf("\n***SUPER TRUNFO CARTA -2***\n");
    printf("Estado: ");
    scanf(" %29s", estado2);
    printf("Código da Carta: ");
    scanf("%s", codigo2);
    getchar();
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    getchar();
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos2);

    densidade2 = populacao2 / area2;
    pibPerCapta2 = (pib2 * 1000000000) / populacao2;
    inversoDensidade2 = 1 / densidade2;
    super2 = populacao2 + area2 + pib2 + pontos2 + pibPerCapta2 + inversoDensidade2;

    // Escolha dos atributos
    // com essa estrutura de repetição ,o usuário escolhe os doisb atributos, e se eles se repetirem,
    //o loop 'do while' faz com que o usuário escolha outro atributo,
    //isso também vale para números fora do intervalo de 1 a 8.
    printf("\n***ESCOLHA OS ATIBUTOS**:\n");
    printf("=-_-=-_-=-_-=-_-=-_-=-_-=-_-=-_-=");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (menor é melhor)\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Inverso da Densidade\n");
    printf("8 - SUPER PODER\n");
    printf("=-_-=-_-=-_-=-_-=-_-=-_-=-_-=-_-=");

    
    do {
        printf("\nEscolha o 1º atributo para comparação (1 a 8): ");
        scanf("%d", &comparacao);
        printf("Escolha o 2º atributo para comparação (1 a 8): ");
        scanf("%d", &comparacao2);
    
        if (comparacao == comparacao2) {
            printf(" Os dois atributos devem ser diferentes!\n");
        } else if (comparacao < 1 || comparacao > 8 || comparacao2 < 1 || comparacao2 > 8) {
            printf(" Os atributos devem estar entre 1 e 8!\n");
        }
    
    } while (comparacao == comparacao2 || comparacao < 1 || comparacao > 8 || comparacao2 < 1 || comparacao2 > 8);
    

    // Comparação 1
    printf("\n==== COMPARAÇÃO 1 ====\n");
    switch (comparacao) {
        case 1:
            printf(populacao1 > populacao2 ? "CARTA 1 venceu com maior população!\n" :
                   populacao2 > populacao1 ? "CARTA 2 venceu com maior população!\n" :
                   "EMPATE na população!\n");
                   sub1 = populacao1;
                   sub2 = populacao2;
            break;
        case 2:
            printf(area1 > area2 ? "CARTA 1 venceu com maior área!\n" :
                   area2 > area1 ? "CARTA 2 venceu com maior área!\n" :
                   "EMPATE na área!\n");
                   sub1 = area1;
                   sub2 = area2;
            break;
        case 3:
            printf(pib1 > pib2 ? "CARTA 1 venceu com maior PIB!\n" :
                   pib2 > pib1 ? "CARTA 2 venceu com maior PIB!\n" :
                   "EMPATE no PIB!\n");
                   sub1 = pib1;
                   sub2 = pib2;
            break;

        case 4:
            printf(pontos1 > pontos2 ? "CARTA 1 venceu com mais pontos turísticos!\n" :
                   pontos2 > pontos1 ? "CARTA 2 venceu com mais pontos turísticos!\n" :
                   "EMPATE nos pontos turísticos!\n");
                   sub1 = pontos1;
                   sub2 = pontos2;
            break;
        case 5:
            printf(densidade1 < densidade2 ? "CARTA 1 venceu com menor densidade!\n" :
                   densidade2 < densidade1 ? "CARTA 2 venceu com menor densidade!\n" :
                   "EMPATE na densidade!\n");
                   sub1 = densidade1;
                   sub2 = densidade2;
            break;
        case 6:
            printf(pibPerCapta1 > pibPerCapta2 ? "CARTA 1 venceu com maior PIB per capita!\n" :
                   pibPerCapta2 > pibPerCapta1 ? "CARTA 2 venceu com maior PIB per capita!\n" :
                   "EMPATE no PIB per capita!\n");
                   sub1 = pibPerCapta1;
                   sub2 = pibPerCapta2;
            break;
        case 7:
            printf(inversoDensidade1 > inversoDensidade2 ? "CARTA 1 venceu com maior inverso da densidade!\n" :
                   inversoDensidade2 > inversoDensidade1 ? "CARTA 2 venceu com maior inverso da densidade!\n" :
                   "EMPATE no inverso da densidade!\n");
                   sub1 = inversoDensidade1;
                   sub2 = inversoDensidade2;
            break;
        case 8:
            printf(super1 > super2 ? "CARTA 1 venceu com SUPER PODER!\n" :
                   super2 > super1 ? "CARTA 2 venceu com SUPER PODER!\n" :
                   "EMPATE no SUPER PODER!\n");
                   sub1 = super1;
                   sub2 = super2;

            break;
        default:
            printf("Atributo inválido!\n");
    }

    // Comparação 2
    printf("\n==== COMPARAÇÃO 2 ====\n");
    switch (comparacao2) {
        
        case 1:
            printf(populacao1 > populacao2 ? "CARTA 1 venceu com maior população!\n" :
                   populacao2 > populacao1 ? "CARTA 2 venceu com maior população!\n" :
                   "EMPATE na população!\n");
                   sub1 = populacao1 + populacao1;
                   sub2 = populacao2 + populacao2;
            break;
        case 2:
            printf(area1 > area2 ? "CARTA 1 venceu com maior área!\n" :
                   area2 > area1 ? "CARTA 2 venceu com maior área!\n" :
                   "EMPATE na área!\n");
                   sub1 = area1 + area1;
                   sub2 = area2 + area2;
            break;
        case 3:
            printf(pib1 > pib2 ? "CARTA 1 venceu com maior PIB!\n" :
                   pib2 > pib1 ? "CARTA 2 venceu com maior PIB!\n" :
                   "EMPATE no PIB!\n");
                   sub1 = pib1 + pib1;
                   sub2 = pib2 + pib2;
            break;

        case 4:
            printf(pontos1 > pontos2 ? "CARTA 1 venceu com mais pontos turísticos!\n" :
                   pontos2 > pontos1 ? "CARTA 2 venceu com mais pontos turísticos!\n" :
                   "EMPATE nos pontos turísticos!\n");
                   sub1 = pontos1 + pontos1;
                   sub2 = pontos2 + pontos2;
            break;
        case 5:
            printf(densidade1 < densidade2 ? "CARTA 1 venceu com menor densidade!\n" :
                   densidade2 < densidade1 ? "CARTA 2 venceu com menor densidade!\n" :
                   "EMPATE na densidade!\n");
                   sub1 = densidade1 + densidade1;
                   sub2 = densidade2 + densidade2;
            break;
        case 6:
            printf(pibPerCapta1 > pibPerCapta2 ? "CARTA 1 venceu com maior PIB per capita!\n" :
                   pibPerCapta2 > pibPerCapta1 ? "CARTA 2 venceu com maior PIB per capita!\n" :
                   "EMPATE no PIB per capita!\n");
                   sub1 = pibPerCapta1 + pibPerCapta1;
                   sub2 = pibPerCapta2 + pibPerCapta2;
            break;
        case 7:
            printf(inversoDensidade1 > inversoDensidade2 ? "CARTA 1 venceu com maior inverso da densidade!\n" :
                   inversoDensidade2 > inversoDensidade1 ? "CARTA 2 venceu com maior inverso da densidade!\n" :
                   "EMPATE no inverso da densidade!\n");
                   sub1 = inversoDensidade1 + inversoDensidade1;
                   sub2 = inversoDensidade2 + inversoDensidade2;
            break;
        case 8:
            printf(super1 > super2 ? "CARTA 1 venceu com SUPER PODER!\n" :
                   super2 > super1 ? "CARTA 2 venceu com SUPER PODER!\n" :
                   "EMPATE no SUPER PODER!\n");
                   sub1 = super1 + super1;
                   sub2 = super2 + super2;

        break;
    default:
        printf("Atributo inválido!\n");
    }
    printf("*** SOMA DOS ARIBUTOS ***\n");
    printf("###DUELO FINAL###\n");
    if (sub1 > sub2) {
        printf("CARTA 1 VENCEU!\n");
        printf("COM: %.2f PONTOS!\n", sub1);
        printf("CONTRA : %.2f PONTOS!\n", sub2);
        printf("PARABÉNS AO VENCEDOR!\n");
    }else{
        printf("CARTA 2 VENCEU!\n");
        printf("COM: %.2f PONTOS!\n", sub2);
        printf("CONTRA : %.2d PONTOS!\n", sub1);
        printf("PARABÉNS AO VENCEDOR!\n");
    }

    return 0;
}
