#include <stdio.h>

int main() {
  int opcao;
    printf("De uma olhada nesse menu que lista todos os estados brasileiros! \n");
  printf("1 - Acre\n2 - Alagoas\n3 - Amapá\n4 - Amazonas\n5 - Bahia\n6 - Ceará\n");
  printf("7 - Espírito Santo\n8 - Goiás\n9 - Maranhão\n10 - Mato Grosso\n");
  printf("11 - Mato Grosso do Sul\n12 - Minas Gerais\n13 - Pará\n14 - Paraíba\n");
  printf("15 - Paraná\n16 - Pernambuco\n17 - Piauí\n18 - Rio de Janeiro\n");
  printf("19 - Rio Grande do Norte\n20 - Rio Grande do Sul\n21 - Rondônia\n");
  printf("22 - Roraima\n23 - Santa Catarina\n24 - São Paulo\n25 - Sergipe\n26 - Tocantins\n");

  printf("Escolha um e digite o numero do estado: ");
  
  scanf("%d", &opcao);
  if (opcao == 1 || opcao == 3 || opcao == 4 || opcao == 13 || opcao == 21 || opcao == 22 || opcao == 26)
      printf("Regiao: Norte\n");
  else if (opcao == 2 || opcao == 5 || opcao == 6 || opcao == 9 || opcao == 14 || opcao == 16 || opcao == 17 || opcao == 19 || opcao == 25)
      printf("Regiao: Nordeste\n");
  else if (opcao == 8 || opcao == 10 || opcao == 11)
      printf("Regiao: Centro-Oeste\n");
  else if (opcao == 7 || opcao == 12 || opcao == 18 || opcao == 24)
      printf("Regiao: Sudeste\n");
  else if (opcao == 15 || opcao == 20 || opcao == 23)
      printf("Regiao: Sul\n");

  else
      printf("Opcao invalida\n");

  return 0; 
}
