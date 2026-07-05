#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int opcao;
  int num_secreto, palpite;

  printf("--- Jogo de Advinhação ---\n");
  printf("1. Iniciar Jogo\n");
  printf("2. Ver Regras\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: ");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1: 
      srand(time(0));
      num_secreto = rand() % 10 + 1;
      
      printf("Escolha um número de 0 a 9: ");
      scanf("%d", &palpite);
      printf("Número secreto: %d\n", num_secreto);

      if (palpite == num_secreto) {
        printf("Você acertou!\n");
      }
      else {
        printf("Você errou!\n)
        printf("O número era... %d!\n"n mum_secreto);
      }
      break;

    case 2:
      printf("Regras do Jogo:\n");
      printf("1. Escolha uma opção no menu\n");
      printf("2. Se escolher 'Iniciar Jogo', tem que advinhar qual é o número secreto\n");
      printf("3. O jogo  termina quando você escolhe 'Sair'\n");
      break;

    case 3:
      printf("Saindo do Jogo...\n");
      break;

    default:
      printf("Opção Inválida!");
      break;
  }
}
