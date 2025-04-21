#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {

    //Declarando variáveis de ambas as cartas, sendo número 1 referente a primeira carta e 2 a segunda
    char estado1, estado2, CodCarta1[4], CodCarta2[4], NomeCidade1[51], NomeCidade2[51];
    int NumPontosTuristicos1 = 0, NumPontosTuristicos2 = 0;
    unsigned long int Populacao1 = 0, Populacao2 = 0;

    //floats carta 1
    float AreaCidade1 = 0, PIB1 = 0,  densidadePopulacional1 = 0, pibPerCapita1 = 0, superPoder1 = 0;

    //floats carta 2
    float AreaCidade2 = 0, PIB2 = 0, densidadePopulacional2 = 0, pibPerCapita2  = 0, superPoder2 = 0;


    //Requisitando os dados das cartas ao usúario
    printf ("- Cadastro de cartas de Super Trunfo -\n\nInforme os dados para o cadastro da 1ª carta.\n");
    
    //Solicitação dos dados individualmente e armazenamento das informações 1ª carta (variáveis terminadas em 1)
    printf("Insira uma letra de A-H que represente o estado que deseja: ");
    scanf("%c", &estado1);

    printf("Insira o código da carta (A letra do estado seguida de um número de 01 a 04): ");
    scanf("%3s", CodCarta1);

    printf("Insira o nome da cidade: ");
    scanf(" %50s", NomeCidade1);

    printf("Insira o número de habitantes: ");
    scanf("%lu", &Populacao1);

    printf("Insira a área da cidade (em km²): ");
    scanf("%f", &AreaCidade1);

    printf("Insira o PIB da cidade (Número completo): ");
    scanf("%f", &PIB1);

    printf("Insira o número de pontos turísticos existentes na cidade: ");
    scanf("%d", &NumPontosTuristicos1);

    //2ª carta (variáveis terminadas em 2)
    printf ("\nInforme os dados para o cadastro da 2ª carta.\n");

    printf("Insira uma letra de A-H que represente o estado que deseja: ");
    scanf(" %c", &estado2);

    printf("Insira o código da carta (A letra do estado seguida de um número de 01 a 04): ");
    scanf("%3s", CodCarta2);

    printf("Insira o nome da cidade: ");
    scanf("%50s", NomeCidade2);

    printf("Insira o número de habitantes: ");
    scanf("%lu", &Populacao2);

    printf("Insira a área da cidade (em km²): ");
    scanf("%f", &AreaCidade2);

    printf("Insira o PIB da cidade (Número completo): ");
    scanf("%f", &PIB2);

    printf("Insira o número de pontos turísticos existentes na cidade: ");
    scanf("%d", &NumPontosTuristicos2);

    //Calculo da densidade populacional e PIB per Capita
    densidadePopulacional1 = (float)Populacao1 / AreaCidade1;
    densidadePopulacional2 = (float)Populacao2 / AreaCidade2;

    pibPerCapita1 = PIB1 / (float)Populacao1;
    pibPerCapita2 = PIB2 / (float)Populacao2;

    //Exibição dos dados da carta 1
    printf("\n- 1ª carta - \n Estado: %c\n Código da carta: %s \n Nome da cidade: %s\n População: %d\n Área da cidade: %.2f km²\n PIB: %.2f bilhões de reais\n Número de pontos turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capita: R$%.2f \n", estado1, CodCarta1, NomeCidade1, Populacao1, AreaCidade1, PIB1, NumPontosTuristicos1, densidadePopulacional1, pibPerCapita1);

    //Exibição dos dados da carta 2
    printf("\n- 2ª carta - \n Estado: %c\n Código da carta: %s \n Nome da cidade: %s\n População: %d\n Área da cidade: %.2f km²\n PIB: %.2f bilhões de reais\n Número de pontos turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capita: R$%.2f \n", estado2, CodCarta2, NomeCidade2, Populacao2, AreaCidade2, PIB2, NumPontosTuristicos2, densidadePopulacional2, pibPerCapita2);

    //Exibição das comparações (Para poupar trabalho "super poder" será feita depois pois precisarei inverter a densidade)
    printf("\n***Comparações entre as cartas***\n1 se refere a primeira carta e 0 se refere a segunda carta.\n");
    printf("\nPopulação: Carta %d venceu.", Populacao1 > Populacao2);
    printf("\nÁrea: Carta %d venceu.", AreaCidade1 > AreaCidade2);
    printf("\nPIB: Carta %d venceu.", PIB1 > PIB2);
    printf("\nNúmero de pontos turísticos: Carta %d venceu.", NumPontosTuristicos1 > NumPontosTuristicos2);
    printf("\nDensidade populacional (Menor valor vence): Carta %d venceu.", densidadePopulacional1 < densidadePopulacional2);
    printf("\nPIB per capita: Carta %d venceu.", pibPerCapita1 > pibPerCapita2);

    //Calculo do Super Poder
    //Primeiro somando todos normais (dividirei em 2 partes para ficar mais simples de entender)
    superPoder1 = (float)Populacao1 + AreaCidade1 + PIB1 + (float)NumPontosTuristicos1 + pibPerCapita1;
    superPoder2 = (float)Populacao2 + AreaCidade2 + PIB2 + (float)NumPontosTuristicos2 + pibPerCapita2;

    //Calculando o inverso da densidade populacional e adicionando ao super poder
    densidadePopulacional1 *= -1;
    densidadePopulacional2 *= -1;

    superPoder1 += densidadePopulacional1;
    superPoder2 += densidadePopulacional2;

    //Exibição da comparação de super poder
    printf("\nSuper poder: Carta %d venceu.", superPoder1 > superPoder2);

    return 0;
    //Fim do código
}