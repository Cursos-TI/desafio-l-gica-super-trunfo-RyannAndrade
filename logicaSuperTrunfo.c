#include <stdio.h>



int main() {
   
  // Dados das cartas (pré-cadastrados)
  char estado1[3] = "SP";
  char codigo1[4] = "A01";
  char nomeCidade1[50] = "São Paulo";
  int populacao1 = 12325000;
  float area1 = 1521.11;
  float pib1 = 699.28;
  int pontosTuristicos1 = 50;

  char estado2[3] = "RJ";
  char codigo2[4] = "B02";
  char nomeCidade2[50] = "Rio de Janeiro";
  int populacao2 = 6748000;
  float area2 = 1200.25;
  float pib2 = 300.50;
  int pontosTuristicos2 = 30;

  // Cálculo de Densidade Populacional e PIB per capita
  float densidade1 = populacao1 / area1;
  float densidade2 = populacao2 / area2;
  float pibPerCapita1 = pib1 / populacao1;
  float pibPerCapita2 = pib2 / populacao2;

  // Escolha do atributo para comparação (definido diretamente no código)
  // Atributo escolhido: PIB
  float atributoCarta1 = pib1;
  float atributoCarta2 = pib2;
  char atributoNome[20] = "PIB";

  // Comparação e determinação do vencedor
  printf("Comparação de cartas (Atributo: %s):\n\n", atributoNome);
  printf("Carta 1 - %s (%s): %.2f\n", nomeCidade1, estado1, atributoCarta1);
  printf("Carta 2 - %s (%s): %.2f\n", nomeCidade2, estado2, atributoCarta2);

  if (atributoCarta1 > atributoCarta2) {
      printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
  } else if (atributoCarta2 > atributoCarta1) {
      printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
  } else {
      printf("\nResultado: Empate!\n");
  }

  return 0;
}