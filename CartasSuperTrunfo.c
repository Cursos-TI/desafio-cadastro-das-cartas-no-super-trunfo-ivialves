#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char name1[50], name2[50];
    float population1, population2, pib1, pib2, area1, area2;
    int tourism1, tourism2;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // primeira carta
    printf("Digite o nome da cidade:\n");
    scanf("%s", &name1);

    printf("Digite a população da cidade:\n");
    scanf("%f", &population1);

    printf("Digite a área da cidade:\n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &tourism1);

    // segunda carta
    printf("Agora vamos criar uma nova carta!\nDigite o nome da cidade:\n");
    scanf("%s", &name2);

    printf("Digite a população da cidade:\n");
    scanf("%f", &population2);

    printf("Digite a área da cidade:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &tourism2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Estas foram as cartas cadastradas:\n");
    printf("Carta1: \n Nome: %s\n População: %.2f \n Área: %.2f \n PIB: %.2f \n Número de pontos turísticos: %d \n", name1, population1, area1, pib1, tourism1);
    printf("Carta2: \n Nome: %s \n População: %.2f \n Área: %.2f \n PIB: %.2f \n Número de pontos turísticos: %d", name2, population2, area2, pib2, tourism2);

    return 0;
}
