#include <stdio.h>

int main() {

  // estruturas de decisão encadeadas
  int idade;

  printf("Qual é a sua idade? ");
  scanf("%d", &idade);

  if (idade <= 11) {
    printf("Você é criança!");
  }
  else if (idade >= 12 && idade < 18) {
    printf("Você é adolescente");
  }
  else if (idade >= 18 && idade <= 35) {
    printf("Você é jovem adulto!");
  }
  else if (idade > 35 && idade <= 59) {
    printf("Você é adulto!");
  }
  else {
    printf("Você é idoso!");
  }

  // estruturas de decisao aninhadas
  // if (condicao) {
  //   if (condicao) 
  //     códigocódigocódigo }

  return 0;
}
