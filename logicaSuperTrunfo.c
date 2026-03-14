#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // carta 1

    char estado1[30];
    char codigo1[10];
    char cidade1[30];

    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    double pibPerCapita1;

    // carta 2

    char estado2[30];
    char codigo2[10];
    char cidade2[30];
    
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    double pibPerCapita2;

    
    // Cadastro das Cartas:

    printf("Digite o estado da carta 1:\n");
    scanf("%s", estado1);

    printf("Digite o código da cidade 1:\n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade 1:\n");
    scanf("%s", cidade1);

    printf("Digite a população 1:\n");
    scanf("%d", &populacao1);

    printf("Digite a área 1:\n");
    scanf("%f", &area1);

    printf("Digite o pib1:\n");
    scanf("%f", &pib1);

    printf("Digite os pontos turísticos da cidade 1:\n");
    scanf("%d", &pontos1);



    // CARTA 2



    printf("Digite o estado da carta 2:\n");
    scanf("%s", estado2);

    printf("Digite o código da cidade 2:\n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade 2:\n");
    scanf("%s", cidade2);

    printf("Digite a população 2:\n");
    scanf("%d", &populacao2);

    printf("Digite a área 2:\n");
    scanf("%f", &area2);

    printf("Digite o pib2:\n");
    scanf("%f", &pib2);

    printf("Digite os pontos turísticos da cidade 2:\n");
    scanf("%d", &pontos2);
 
    // cálculo de densidade e PIB per capita

        densidade1 = populacao1 / area1; 
        densidade2 = populacao2 / area2;
        
        pibPerCapita1 = pib1 / populacao1;
        pibPerCapita2 = pib2 / populacao2;

    // Comparação de Cartas:

        printf("Comparação de cartas (Atributo: População)\n");

        printf("Carta 1 - %s: %d\n", cidade1, populacao1);
        printf("Carta 2 - %s: %d\n", cidade2, populacao2);

        if (populacao1 > populacao2) {
        printf("Carta 1 venceu!\n");
        }
        else {
        printf("Carta 2 venceu!\n");
        }

    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.





    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
