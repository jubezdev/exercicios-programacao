#include <stdio.h>

int main() {

  // declarando variáveis do estoque
  // com uso dos modificadores de variáveis

  char produtoA[30] = "Produto A";
  char produtoB[30] = "Produto B";
  
  unsigned int estoqueA = 1000;
  unsigned int estoqueB = 2000;

  float valorA = 10.50;
  float valorB = 20.40;

  unsigned int estoqueA_minimo = 500;
  unsigned int estoqueB_minimo = 1000;

  double valorA_total;
  double valorB_total;

  int resultadoA, resultadoB;

  // exibição das informacões

  printf("Produto %a tem estoque %u e valor unitário é %f\n", produtoA, estoqueA, valorA);
  printf("Produto %a tem estoque %u e valor unitário é %f\n", produtoB, estoqueB, valorB);

  // comparação do valor mínimo entre os estoques A e B

  resultadoA = estoqueA > estoqueA_minimo;
  resultadoB = estoqueB > estoqueB_minimo;

  printf("O produto %s tem estoque mínimo %d.2f", produtoA, resultadoA);
  printf("O produto %s tem estoque mínimo %d.2f", produtoB, resultadoB);

  // comparação entre os valores totais

  printf("A: R$%d\n", estoqueA * valorA); 
  printf("B: R$%d\n", estoqueB * valorB); 
  printf("O valor total de A é maior que valor total de B: %d\n", (estoqueA * valorA) > (estoqueB * valorB));
}
