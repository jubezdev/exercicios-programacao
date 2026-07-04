#include <stdio.h>

int main() {

  int idade, matricula;
  float altura;
  char nome[50];

  printf("Digite sua nome: ");
  scanf("%s", &nome);

  printf("Digite sua idade: ");
  scanf("%d", &idade);

  printf("Qual e a sua altura: ");
  scanf("%f", &altura);

  printf("Digite sua matricula: ");
  scanf("%d", &matricula);

  printf("\nDados do aluno(a)\n");
  printf("Nome: %s\n Idade: %d\n", nome, idade);
  printf("Altura: %f\nMatricula: %d", altura, matricula);
}
