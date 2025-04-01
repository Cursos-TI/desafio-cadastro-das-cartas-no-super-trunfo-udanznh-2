/*******************************************************
 *                                                     *
 *               Desafio: Nível Novato                *
 *                                                     *
 *          Criando as Cartas do Super Trunfo          *
 *                                                     *
 *******************************************************
 * Objetivo:                                           *
 * Criar um programa em C que cadastra duas cartas     *
 * com os seguintes atributos:                        *
 *                                                     *
 * - Carta                                             *
 * - Estado                                            *
 * - Código                                            *
 * - Nome da Cidade                                    *
 * - População                                         *
 * - Área                                              *
 * - PIB                                               *
 * - Número de Pontos Turísticos                       *
 *******************************************************/

 #include <stdio.h>

 int main() {
     // Declarações de variáveis para armazenar os dados da Carta 1
     int carta1 = 1; // Número da carta
     char Estado1[50] = "Santa Catarina(SC)"; // Estado da cidade
     char Codigo1[50] = "SC1"; // Código da carta
     char Cidade1[50] = "Blumenau"; // Nome da cidade
     int Populacao1 = 380597; // População da cidade
     float area1 = 519.8; // Área da cidade em km²
     float PIB1 = 20.5; // PIB da cidade em bilhões de reais
     int pontos1 = 10; // Número de pontos turísticos
 
     // Solicitação e leitura dos dados da Carta 1
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
 
     // Declarações de variáveis para armazenar os dados da Carta 2
     int carta2 = 2; // Número da carta
     char Estado2[50] = "Ceará(CE)"; // Estado da cidade
     char Codigo2[50] = "CE2"; // Código da carta
     char Cidade2[50] = "Fortaleza"; // Nome da cidade
     int Populacao2 = 4284000; // População da cidade
     float area2 = 313.8; // Área da cidade em km²
     float PIB2 = 73.4; // PIB da cidade em bilhões de reais
     int pontos2 = 16; // Número de pontos turísticos
 
     // Solicitação e leitura dos dados da Carta 2
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
 
     // Exibição dos dados da Carta 1
     printf("\nCarta: %d\n", carta1);
     printf("Estado: %s\n", Estado1);
     printf("Código da carta: %s\n", Codigo1);
     printf("Nome da cidade: %s\n", Cidade1);
     printf("População da cidade: %d\n", Populacao1);
     printf("Área da cidade: %.1f km²\n", area1);
     printf("PIB da cidade: %.1f bilhões de reais\n", PIB1);
     printf("Pontos turísticos: %d\n", pontos1);
 
     // Exibição dos dados da Carta 2
     printf("\nCarta: %d\n", carta2);
     printf("Estado: %s\n", Estado2);
     printf("Código da carta: %s\n", Codigo2);
     printf("Nome da cidade: %s\n", Cidade2);
     printf("População da cidade: %d\n", Populacao2);
     printf("Área da cidade: %.1f km²\n", area2);
     printf("PIB da cidade: %.1f bilhões de reais\n", PIB2);
     printf("Pontos turísticos: %d\n", pontos2);
 
     return 0;
 }