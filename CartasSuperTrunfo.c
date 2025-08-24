#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

int main() {

    //Definição das variáveis
    char cod_carta01[3], cod_carta02[3];
    char estado_carta01, estado_carta02;
    char cidade_carta01[40], cidade_carta02[40];
    int populacao_carta01, populacao_carta02;
    float area_carta01, area_carta02;
    float pib_carta01, pib_carta02;
    int pontostur_carta01, pontostur_carta02;

    //Introdução ao cadastro
    printf("Bemvindo ao cadastro de cartas do Supertrunfo.\n\n");
    printf("Digite abaixo as principais informações da primeira carta.\n");
    printf("Quando concluir, serão solicitadas as informações da segunda.\n");
    printf("Vamos lá...\n\n");
    
    //Coleta dos dados - CARTA 01
    printf("Informe o código da carta: ");
    scanf("%s", &cod_carta01);
    
    printf("Digite o estado da primeira carta (De A a H): ");
    scanf(" %c", &estado_carta01);

    printf("Informe o nome da cidade: ");
    scanf("%s", &cidade_carta01);

    printf("Informe a população da cidade: ");
    scanf("%d", &populacao_carta01);
 
    printf("Qual a área dessa cidade (em km2): ");
    scanf("%f", &area_carta01);

    printf("Agora informe o PIB da cidade: ");
    scanf("%f", &pib_carta01);

    printf("E por último, quantos pontos turísticos há na cidade: ");
    scanf("%d", &pontostur_carta01);
    
    printf("\nÓtimo! Consegui registrar os dados da primeira carta. Veja:\n");
    
    //Impressão dos dados - CARTA 01
    printf("\nCARTA 01\n");
    printf("=====================\n");
    printf("Código - %s\n", cod_carta01);
    printf("Estado - %c\n", estado_carta01);
    printf("Nome da Cidade - %s\n", cidade_carta01);
    printf("População - %d\n", populacao_carta01);
    printf("Área - %.2f\n", area_carta01);
    printf("PIB - %.2f\n", pib_carta01);
    printf("Pontos Turísticos - %d\n", pontostur_carta01);

    printf("\nPerfeito! Agora vamos cadastrar a segunda carta.\n\n");

    //Coleta dos dados - CARTA 02
    printf("Informe o código da carta: ");
    scanf(" %s", &cod_carta02);
    
    printf("Digite o estado da primeira carta (De A a H): ");
    scanf(" %c", &estado_carta02);

    printf("Informe o nome da cidade: ");
    scanf(" %s", &cidade_carta02);

    printf("Informe a população da cidade: ");
    scanf("%d", &populacao_carta02);
 
    printf("Qual a área dessa cidade (em km2): ");
    scanf("%f", &area_carta02);

    printf("Agora informe o PIB da cidade: ");
    scanf("%f", &pib_carta02);

    printf("E por último, quantos pontos turísticos há na cidade: ");
    scanf("%d", &pontostur_carta02);
    
    printf("\nExcelente! Consegui registrar os dados da segunda carta também:\n");
    
    //Impressão dos dados - CARTA 02
    printf("\nCARTA 02\n");
    printf("=====================\n");
    printf("Código - %s\n", cod_carta02);
    printf("Estado - %c\n", estado_carta02);
    printf("Nome da Cidade - %s\n", cidade_carta02);
    printf("População - %d\n", populacao_carta02);
    printf("Área - %.2f\n", area_carta02);
    printf("PIB - %.2f\n", pib_carta02);
    printf("Pontos Turísticos - %d\n", pontostur_carta02);

    printf("\nObrigado pelas informações! Cartas registradas.\n\n");

    return 0;
}