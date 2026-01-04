#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
// Área para definição das variáveis para armazenar as propriedades das cidades
  char cidade1[] = "São Paulo";
  int populacao = 12325000;
  float area = 1521.11;
  float pib = populacao / area;
  int pontos_turisticos = 50;
 
  char cidade2[] = "Rio de Janeiro";
  int populacao2 = 6748000;
  float area2 = 1200.25;
  float pib2 = populacao2 / area2;
  int pontos_turisticos2 = 30;

// Área para entrada de dados

  int codigo1 = 1;
  int estado1 = 'A';
  char carta1[] = "A01";

  int codigo2 = 2;
  int estado2 = 'B';
  char carta2[] = "B02";
  

// Área para exibição dos dados da cidade

  printf("Carta %d\n", codigo1);
  printf("Estado %c\n", estado1);
  printf("Codigo %s\n", carta1);
  printf("Cidade %s\n", cidade1);
  printf("Populacao %d\n", populacao);
  printf("Area %.2f\n", area);
  printf("PIB %.2f\n", pib);
  printf("Pontos Turisticos %d\n", pontos_turisticos);

  printf("\n");

  printf("Carta %d\n", codigo2);
  printf("Estado %c\n", estado2);
  printf("Codigo %s\n", carta2);
  printf("Cidade %s\n", cidade2);
  printf("Populacao %d\n", populacao2);
  printf("Area %.2f\n", area2);
  printf("PIB %.2f\n", pib2);
  printf("Pontos Turisticos %d\n", pontos_turisticos2);


return 0;
} 
