#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    int populacao;
    int pturisticos;
    float area_km2;
    float pib;
    char estado[4];
    char cidade[100];
    char codigo[10];
    

    printf("Vamos começar o cadastro das cartas.\n");
    
    printf("Nome da Cidade: ");
    scanf("%[^\n]", cidade);
    
    printf("Estado UF: ");
    scanf("%s", estado);
    
    printf("Total de Pontos Turisticos: ");
    scanf("%d", &pturisticos);
    
    printf("População Total: ");
    scanf("%d", &populacao);
    
    printf("Área Total (km²): ");
    scanf("%f", &area_km2);
    
    printf("PIB Total (bi): ");
    scanf("%f", &pib);
    
    printf("Código da Cidade: ");
    scanf("%s", codigo);

    printf("cadastro realizado com sucesso!\n");

    printf("\n");
    printf("Carta 01: \n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area_km2);
    printf("PIB: %.2f bi\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pturisticos);

    printf("\n");
    printf("Vamos cadastrar mais cartas!\n");
    getchar(); // Limpa o buffer do teclado para evitar problemas com o scanf seguinte

    printf("Nome da Cidade: ");
    scanf("%[^\n]", cidade);
    
    printf("Estado UF: ");
    scanf("%s", estado);
    
    printf("Total de Pontos Turisticos: ");
    scanf("%d", &pturisticos);
    
    printf("População Total: ");
    scanf("%d", &populacao);
    
    printf("Área Total (km²): ");
    scanf("%f", &area_km2);
    
    printf("PIB Total (bi): ");
    scanf("%f", &pib);
    
    printf("Código da Cidade: ");
    scanf("%s", codigo); 

    printf("cadastro realizado com sucesso!\n");

    printf("\n");
    printf("Carta 02: \n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area_km2);
    printf("PIB: %.2f bi\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pturisticos);

}

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.