#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    
    //Declarando variáveis de ambas as cartas sendo número 1 referente a primeira carta e 2 a segunda
    char estado1, estado2, CodCarta1[4], CodCarta2[4], NomeCidade1[51], NomeCidade2[51];
    int Populacao1, Populacao2, NumPontosTuristicos1, NumPontosTuristicos2;
    float AreaCidade1, AreaCidade2, PIB1, PIB2, densidadePopulacional1, densidadePopulacional2, pibPerCapita1, pibPerCapita2;

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
    scanf("%d", &Populacao1);

    printf("Insira a área da cidade (em km²): ");
    scanf("%f", &AreaCidade1);

    printf("Insira o PIB da cidade: ");
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
    scanf("%d", &Populacao2);

    printf("Insira a área da cidade (em km²): ");
    scanf("%f", &AreaCidade2);

    printf("Insira o PIB da cidade: ");
    scanf("%f", &PIB2);

    printf("Insira o número de pontos turísticos existentes na cidade: ");
    scanf("%d", &NumPontosTuristicos2);

    //Transformação do PIB em Bilhões para o cálculo
    PIB1 *= 1000000000;
    PIB2 *= 1000000000;

    //Calculo da densidade populacional e PIB per Capita
    densidadePopulacional1 = (float)Populacao1 / AreaCidade1;
    densidadePopulacional2 = (float)Populacao2 / AreaCidade2;

    pibPerCapita1 = PIB1 / (float)Populacao1;
    pibPerCapita2 = PIB2 / (float)Populacao2;
    
    //Retorno ao valor normal para exibição
    PIB1 =/ 1000000000;
    PIB2 =/ 1000000000;

    //Exibição dos dados da carta 1
    printf("\n- 1ª carta - \n Estado: %c\n Código da carta: %s \n Nome da cidade: %s\n População: %d\n Área da cidade: %.2f km²\n PIB: %.2f bilhões de reais\n Número de pontos turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capita: R$%f \n", estado1, CodCarta1, NomeCidade1, Populacao1, AreaCidade1, PIB1, NumPontosTuristicos1, densidadePopulacional1, pibPerCapita1);

    //Exibição dos dados da carta 2
    printf("\n- 2ª carta - \n Estado: %c\n Código da carta: %s \n Nome da cidade: %s\n População: %d\n Área da cidade: %.2f km²\n PIB: %.2f bilhões de reais\n Número de pontos turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capita: R$%.2f \n", estado2, CodCarta2, NomeCidade2, Populacao2, AreaCidade2, PIB2, NumPontosTuristicos2, densidadePopulacional2, pibPerCapita2);

    return 0;
    //Fim do código
}