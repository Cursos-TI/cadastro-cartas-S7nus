#include <stdio.h>
int main(){
  char estado1[5];
  char estado2[5];
  char codigo1[8];
  char codigo2[8];
  char nome1[40];
  char nome2[40];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontotur1, pontotur2;

  printf ("Bem vindo ao Super Trunfo de Estados Brasileiros! \n");
  printf ("Aqui você poderá criar suas próprias cartas e jogar com seus amigos! \n");
  printf ("Vamos começar! \n");
  printf ("Vamos cadastrar as cartas! \n");
  printf ("Primeira Carta: \n");
  printf ("Escolha uma letra de A a H: \n");
  scanf ("%s", estado1);

  printf ("Escolha um codigo para sua carta! : \n");
  printf ("OBS: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03) \n");
  scanf ("%s", codigo1);

  printf ("Escolha o nome da cidade para sua Carta!: \n");
  scanf ("%s", nome1);

  printf ("Escolha a população do estado: \n");
  scanf ("%d", &populacao1); 

  printf ("Escolha a área do estado (em km²): \n");
  scanf ("%f", &area1);

  printf ("Escolha o PIB do estado (em R$): \n");
  scanf ("%f", &pib1);

  printf ("Escolha a pontuação turística do estado (de 0 a 100): \n");
  scanf ("%d", &pontotur1);

  printf ("Primeira carta criada com sucesso! \n");

  printf ("Segunda Carta: \n");
  printf ("Escolha uma letra de A a H: \n");
  scanf ("%s", estado2);

  printf ("Escolha um codigo para sua carta! : \n");
  printf ("OBS: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03) \n");
  scanf ("%s", codigo2);

  printf ("Escolha o nome da cidade para sua Carta!: \n");
  scanf ("%s", nome2);

  printf ("Escolha a população do estado: \n");
  scanf ("%d", &populacao2);

  printf ("Escolha a área do estado (em km²): \n");
  scanf ("%f", &area2);

  printf ("Escolha o PIB do estado (em R$): \n");
  scanf ("%f", &pib2);

  printf ("Escolha a pontuação turística do estado (de 0 a 100): \n");
  scanf ("%d", &pontotur2);

  printf ("Suas cartas foram criadas! \n");

  printf ("Carta 1: \n");
  printf ("Estado: %s \n", estado1);
  printf ("Código: %s \n", codigo1);
  printf ("Nome: %s \n", nome1);
  printf ("População: %d \n", populacao1);
  printf ("Área: %.2f km² \n", area1);
  printf ("PIB: R$ %.2f \n", pib1);
  printf ("Pontuação Turística: %d \n", pontotur1);

  printf ("Carta 2: \n");
  printf ("Estado: %s \n", estado2);
  printf ("Código: %s \n", codigo2);
  printf ("Nome: %s \n", nome2);
  printf ("População: %d \n", populacao2);
  printf ("Área: %.2f km² \n", area2);
  printf ("PIB: R$ %.2f \n", pib2);
  printf ("Pontuação Turística: %d \n", pontotur2);
  return 0;
}