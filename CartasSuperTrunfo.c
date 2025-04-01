/************************************************************
 *                                                          *
 *                  Desafio: Nível Aventureiro              *
 *                                                          *
 *     Calculando Densidade Populacional e PIB per Capita   *
 *                                                          *
 ************************************************************
 *                                                          *
 * Agora, vamos adicionar mais detalhes e complexidade ao   *
 * nosso jogo! Neste nível, você implementará a lógica para *
 * calcular e exibir duas novas propriedades importantes    *
 * para cada cidade:                                        *
 *                                                          *
 * - Densidade Populacional                                 *
 * - PIB per Capita                                         *
 *                                                          *
 ************************************************************/

 #include <stdio.h>

 int main() {
     // Declaração e inicialização dos dados da primeira carta
     int carta1 = 1; // Número da carta
     char Estado1[50] = "Santa Catarina(SC)"; // Estado da cidade
     char Codigo1[50] = "SC1"; // Código da carta
     char Cidade1[50] = "Blumenau"; // Nome da cidade
     int Populacao1 = 380597; // População da cidade
     float area1 = 519.8; // Área da cidade em km²
 
     // PIB da cidade em reais (20.5 bilhões convertido para reais)
     float PIB1 = 20.5 * 1000000000;
 
     // Número de pontos turísticos da cidade
     int pontos1 = 10;
 
     // Cálculo da densidade populacional (habitantes por km²)
     float quonciente = (float) Populacao1 / area1;
 
     // Cálculo do PIB per capita (PIB dividido pela população)
     float quonciente2 = PIB1 / (float) Populacao1;
 
     // Entrada de dados para a primeira carta
     printf("Carta [press 1] \n");
     scanf("%d", &carta1);
 
     printf("Digite a UF do seu estado: \n");
     scanf("%s", Estado1);
 
     printf("Digite o código da carta: \n");
     scanf("%s", Codigo1);
 
     printf("Digite o nome da cidade: \n");
     scanf("%s", Cidade1);
 
     printf("Digite a População da cidade: \n");
     scanf("%d", &Populacao1);
 
     printf("Digite a Área da cidade: \n");
     scanf("%f", &area1);
 
     printf("Digite o PIB da cidade: \n");
     scanf("%f", &PIB1);
 
     printf("Digite o número de pontos turísticos: \n");
     scanf("%d", &pontos1);
 
     // Declaração e inicialização dos dados da segunda carta
     int carta2 = 2; // Número da carta
     char Estado2[50] = "Ceará(CE)"; // Estado da cidade
     char Codigo2[50] = "CE2"; // Código da carta
     char Cidade2[50] = "Fortaleza"; // Nome da cidade
     int Populacao2 = 4284000; // População da cidade
     float area2 = 313.8; // Área da cidade em km²
 
     // PIB da cidade em reais (73.4 bilhões convertido para reais)
     float PIB2 = 73.4 * 1000000000;
 
     // Número de pontos turísticos da cidade
     int pontos2 = 16;
 
     // Cálculo da densidade populacional (habitantes por km²)
     float quonciente3 = (float) Populacao2 / area2;
 
     // Cálculo do PIB per capita (PIB dividido pela população)
     float quonciente4 = PIB2 / (float) Populacao2;
 
     // Entrada de dados para a segunda carta
     printf("Carta [press 2] \n");
     scanf("%d", &carta2);
 
     printf("Digite a UF do seu estado: \n");
     scanf("%s", Estado2);
 
     printf("Digite o código da carta: \n");
     scanf("%s", Codigo2);
 
     printf("Digite o nome da cidade: \n");
     scanf("%s", Cidade2);
 
     printf("Digite a População da cidade: \n");
     scanf("%d", &Populacao2);
 
     printf("Digite a Área da cidade: \n");
     scanf("%f", &area2);
 
     printf("Digite o PIB da cidade: \n");
     scanf("%f", &PIB2);
 
     printf("Digite o número de pontos turísticos: \n");
     scanf("%d", &pontos2);
 
     // Exibição dos dados da primeira carta
     printf("\nCarta: %d\n", carta1);
     printf("Estado: %s\n", Estado1);
     printf("Código da carta: %s\n", Codigo1);
     printf("Nome da cidade: %s\n", Cidade1);
     printf("População da cidade: %d\n", Populacao1);
     printf("Área da cidade: %.1f km²\n", area1);
     printf("PIB da cidade: %.1f bilhões de reais\n", PIB1);
     printf("Pontos turísticos: %d\n", pontos1);
     printf("Densidade Populacional: %.2f hab/km² \n", quonciente);
     printf("PIB per capita: %.2f reais\n", quonciente2);
 
     // Exibição dos dados da segunda carta
     printf("\nCarta: %d\n", carta2);
     printf("Estado: %s\n", Estado2);
     printf("Código da carta: %s\n", Codigo2);
     printf("Nome da cidade: %s\n", Cidade2);
     printf("População da cidade: %d\n", Populacao2);
     printf("Área da cidade: %.1f km²\n", area2);
     printf("PIB da cidade: %.1f bilhões de reais\n", PIB2);
     printf("Pontos turísticos: %d\n", pontos2);
     printf("Densidade Populacional: %.2f hab/km²\n", quonciente3);
     printf("PIB per capita: %.2f reais\n", quonciente4);
 
     return 0;
 }
 