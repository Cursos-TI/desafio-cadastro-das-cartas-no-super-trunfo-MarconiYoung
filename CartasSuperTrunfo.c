//Detalhamento e dicas

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


#include <stdio.h>
int main() {
    char nome[20];
    int codigo, populacao, npontostu;
    float area, pib;

printf("- Preencha os dados solicitados - \n");

    printf ("Nome da cidade: \n");
    scanf ("%s", &nome);
    printf ("Codigo da cidade: \n");
    scanf ("%d", &codigo);
    printf ("Populacao: \n");
    scanf (" %d", &populacao);
    printf ("N Pontos turisticos: \n");
    scanf ("%d", &npontostu);
    printf ("Area: \n");
    scanf ("%f", &area);
    printf ("PIB: \n");
    scanf ("%f", &pib);

printf("- Dados cadastrados - \n");

    printf("Nome da cidade: %s\n" , nome);
    printf("Codigo da cidade: %d\n", codigo);
    printf("Populacao: %d\n", populacao);
    printf("Nº Pontos turisticos: %d\n", npontostu);
    printf ("Area: %f\n", area);
    printf ("PIB: %f\n", pib);

    
printf ("- Processo concluido - \n");

    return 0;
}
