#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //Começo do código, após terminar limpar as sugestões acima
    //Salvando variaveis que já coloquei (para teste)
    //float PIB;
    //int NumPontosTuristicos;
    //char CodCarta[3];
    //char NomeCidade[50];
    
    //Declarando variáveis de ambas as cartas sendo número 1 referente a primeira carta e 2 a segunda
    char estado1, estado2, CodCarta1[3], CodCarta2[3], NomeCidade1[50], NomeCidade2[50];
    int Populacao1, Populacao2, NumPontosTuristicos1, NumPontosTuristicos2;
    float AreaCidade1, AreaCidade2, PIB1, PIB2;

    //Requisitando os dados das cartas ao usúario, primeiro carta 1
    printf ("Cadastro de cartas de Super Trunfo\n Primeiro informe os dados solicitados para o cadastro da carta 1.");
    
    //Solicitação dos dados e armazenamento das informações
    printf("Insira uma letra de A-H que represente o estado que deseja: ");
    scanf("%c", &estado1);

    printf("Insira o código da carta (A letra do estado seguida de um número de 01 a 04): ");
    scanf("%s", CodCarta1);

    printf("Insira o nome da cidade: ");
    scanf("%s", NomeCidade1);

    printf("Insira o número de habitantes: ");
    scanf("%d", &Populacao1);

    printf("Insira a área da cidade (em km²): ");
    scanf("%f", &AreaCidade1);

    printf("Insira o PIB da cidade: ");
    scanf("%f", &PIB1);

    printf("Insira o número de pontos turísticos existentes na cidade: ");
    scanf("%d", &NumPontosTuristicos1);
    
    //Teste de exibição
    printf("Dados da carta:\n Letra: %c\n Código da carta: %s\n Nome da cidade: %s\n Número de habitantes: %d\n 
        Área: %f\n PIB: %f\n Numero de pontos turísticos: %d\n", estado1, CodCarta1, NomeCidade1, Populacao1, AreaCidade1, PIB1, NumPontosTuristicos1);

    return 0;
}
