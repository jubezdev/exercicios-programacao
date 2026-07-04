#include <stdio.h>

int main() {

  int num1, num2;
  int soma, subtracao, multiplicacao, divisao;

  // fórmula das operacões
  soma = num1 + num2;
  subtracao = num1 - num2;
  multiplicacao = num1 * num2;
  divisao = num1 / num2;

  printf("--- Calculadora (+, -, *, /)---\n);

  printf("Escolha um numero: ");
  scanf("%d", &num1);

  printf("\nEscolha outro numero: ");
  scanf("%d", &num2);

  printf("\nSoma: %d + %d = %d\n", num1, num2, soma);
  printf("Subtracao: %d - %d = %d\n", num1, num2, subtracao);
  printf("Multiplicacao: %d * %d = %d\n", num1, num2, multiplicacao);
  printf("Divisao: %d / %d = %d\n", num1, num2, divisao);

  return 0;
}
