#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char name1[50], name2[50], state1[50], state2[50], code1[50], code2[50];
    float pib1, pib2, area1, area2, densi1, densi2, ppc1, ppc2, poder1, poder2;
    int population1, population2, tourism1, tourism2, option;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // primeira carta
    printf("Digite o nome da cidade:\n");
    scanf("%s", &name1);

    printf("Digite o código da carta:\n");
    scanf("%s", &code1);

    printf("Digite o estado em que a cidade se localiza:\n");
    scanf("%s", &state1);

    printf("Digite a população da cidade:\n");
    scanf("%d", &population1);

    printf("Digite a área da cidade:\n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &tourism1);

    // segunda carta
    printf("Agora vamos criar uma nova carta!\nDigite o nome da cidade:\n");
    scanf("%s", &name2);

    printf("Digite o código da carta:\n");
    scanf("%s", &code2);

    printf("Digite o estado em que a cidade se localiza:\n");
    scanf("%s", &state2);

    printf("Digite a população da cidade:\n");
    scanf("%d", &population2);

    printf("Digite a área da cidade:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &tourism2);

    // Exibição dos Dados das Cartas, calculando a densidade populacional e o PIB per capita criando suas devidas variáveis:
    densi1 = population1 / area1;
    densi2 = population2 / area2;
    ppc1 = pib1 / population1;
    ppc2 = pib2 / population2;


    printf("Estas foram as cartas cadastradas:\n");
    printf("Carta1: \n Nome: %s\n Estado: %s\n Código: %s\n População: %d\n Área: %.2f \n PIB: %.2f \n Número de pontos turísticos: %d \n Densidade Populacional: %.2f \n PIB per Capita %.2f\n", name1, state1, code1, population1, area1, pib1, tourism1, densi1, ppc1);
    printf("Carta2: \n Nome: %s \n Estado: %s\n Código: %s\n População: %d\n Área: %.2f \n PIB: %.2f \n Número de pontos turísticos: %d \n Densidade Populacional %.2f \n PIB per Capita %.2f\n", name2, state2, code2, population2, area2, pib2, tourism2, densi2, ppc2);
    
    //Comparando as cartas utilizando switch para organizar as opções e if/else para comparar os resultados
    //População(1) / Área(2) / PIB(3) / Densidade Populacional(4) / PIB per capita(5)
    option = 1;

    switch (option){
        case 1:
        printf("ATRIBUTO: População!\n");
            if(population1 > population2 ){
                printf("Carta1 é a vencedora! Sua população é: %d", population1);
            } else {
                printf("Carta2 é a vencedora! Sua população é: %d", population2);
            }
            break;
        case 2:
        printf("ATRIBUTO: ÁREA!\n");
            if (area1 > area2){
                printf("Carta1 é a vencedora! Sua área é: %f\n", area1);
            } else {
                printf("Carta2 é a vencedora! Sua área é: %f\n", area2);
            }
            break;
        case 3:
            printf("ATRIBUTO: PIB!\n");
            if (pib1 > pib2){
                printf("Carta1 é a vencedora! Seu pib é: %f\n", pib1);
            } else {
                printf("Carta2 é a vencedora! Seu pib é: %f\n", pib2);
            }
            break;
        case 4:
            printf("ATRIBUTO: Densidade Populacional!\n");
            if(densi1 < densi2){
                printf("Carta1 venceu! Sua densidade populacional é: %f\n", densi1);
            } else {
                printf("Carta2 venceu! Sua densidade populacional é: %f\n", densi2);
            }
            break;
        case 5:
            printf("ATRIBUTO: PIB per capita!\n");
            if (ppc1 > ppc2){
                printf("Carta1 venceu! Seu PIB per capita é: %f", ppc1);
            } else {
                printf("Carta2 venceu! Seu PIB per capita é: %f", ppc2);
            }
            break;
        default:
            break;
        }


    return 0; 
}
