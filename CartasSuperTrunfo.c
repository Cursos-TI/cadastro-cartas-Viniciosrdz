#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
// Área para definição das variáveis para armazenar as propriedades das cidades
int carta1 = 1;
char estado1 = 'A';
char codigo1[] = "A01";
char cidade1[] = "São Paulo";
unsigned long int populacao = 12325000;
float area = 1521.11;
float pib = 699.28;
int pontosturisticos = 50;
float densidade = populacao / area;  
float pibpercapita = pib / populacao;
float inversoDensidade = 1.0f / densidade;
float superpoder = populacao + area + pib + pontosturisticos + inversoDensidade + pibpercapita;

int carta2 = 2; 
char estado2 = 'B'; 
char codigo2[] = "A02";
char cidade2[] = "Rio de Janeiro";
unsigned long int populacao2 = 6748000;
float area2 = 1200.25;  
float pib2 = 300.50;
int pontosturisticos2 = 30;  
float densidade2 = populacao2 / area2;  
float pibpercapita2 = pib2 / populacao2;
float inversoDensidade2 = 1.0f / densidade2;
float superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + inversoDensidade2 + pibpercapita2;

// Área para entrada de dados





// Área para exibição dos dados da cidade

printf("Carta - %d\n", carta1);
  printf("Estado - %c\n", estado1);
  printf("Codigo - %s\n", codigo1);
  printf("Cidade - %s\n", cidade1);
  printf("Populacao - %lu\n", populacao);
  printf("Area - %f\n", area);
  printf("PIB - %f\n", pib);
  printf("Pontos Turisticos - %d\n", pontosturisticos);
  printf("Densidade Populacional - %f\n", densidade);
  printf("PIB per Capita - %f\n", pibpercapita);
  printf("Superpoder da Carta 1 - %.2f\n", superpoder);

  printf("\n");

  printf("Carta - %d\n", carta2);
  printf("Estado - %c\n", estado2);
  printf("Codigo - %s\n", codigo2);
  printf("Cidade - %s\n", cidade2);
  printf("Populacao - %lu\n", populacao2);
  printf("Area - %f\n", area2);
  printf("PIB - %f\n", pib2);
  printf("Pontos Turisticos - %d\n", pontosturisticos2);
  printf("Densidade Populacional - %f\n", densidade2);
  printf("PIB per Capita - %f\n", pibpercapita2);
  printf("Superpoder da Carta 2 - %.2f\n", superpoder2);

  printf("\n");

  printf("populacao carta1: %lu é maior que populacao carta2: %lu ? %d\n", populacao, populacao2, (populacao > populacao2));
  printf("area carta1: %.2f é maior que area carta2: %.2f ? %d\n", area, area2, (area > area2));
  printf("pib carta1: %.2f é maior que pib carta2: %.2f ? %d\n", pib, pib2, (pib > pib2));
  printf("pontos turisticos carta1: %d é maior que pontos turisticos carta2: %d ? %d\n", pontosturisticos, pontosturisticos2, (pontosturisticos > pontosturisticos2));
  printf("densidade populacional carta1: %.2f é menor que densidade populacional carta2: %.2f ? %d\n", densidade, densidade2, (densidade < densidade2));
  printf("pib per capita carta1: %f é maior que pib per capita carta2: %f ? %d\n", pibpercapita, pibpercapita2, (pibpercapita > pibpercapita2));
  printf("superpoder carta1: %.2f é maior que superpoder carta2: %.2f ? %d\n", superpoder, superpoder2, (superpoder > superpoder2));  
  
  return 0;

}