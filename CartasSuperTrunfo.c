#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    int populacao, pontos_turisticos = 25;
    float area_km2, pib = 1500.00;
    char estado;
    char cidade, codigo[100] = "Sao Paulo";
    

    printf("Vamos começar o cadastro das cartas.\n");
    printf("Nome da Cidade, Estado e o Numero de Pontos Turisticos: ");
        scanf("%s, %c, %d", &cidade, &estado, &pontos_turisticos);
    
    printf("Agora digite a população total, Area total e o PIB");
        scanf("%d, %f, %f", &populacao, &area_km2, &pib);

    printf("Agora por último, digite o código da carta: ");
        scanf("%s", &codigo);

}

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.