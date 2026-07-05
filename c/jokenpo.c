#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// jogo de jokenpô

int main() {

  int jogador, computador;
  srand(time(0));

  printf("--- Jogo de Jokenpô! ---\n");
  printf("1. Pedra\n");
  printf("2. Papel\n");
  printf("3. Tesoura\n");
  //escolha do jogador
  printf("Escolha uma opção: ");
  scanf("%d", &jogador);

  switch(jogador) {
    case 1: 
      printf("Jogador: Pedra\n");
      break;
    case 2: 
      printf("Jogador: Papel\n");
      break;
    case 3: 
      printf("Jogador: Tesoura\n");
      break;
    default:
      printf("Opção inválida!\n");
  }

  // "escolha" do computador
  computador = rand() % 3 + 1;

  switch(computador) {
    case 1: 
      printf("Computador: Pedra\n");
      break;
    case 2: 
      printf("Computador: Papel\n");
      break;
    case 3: 
      printf("Computador: Tesoura\n");
      break;
    default:
      printf("Opção inválida!\n");
  }

  if  (jogador == computador) {
    printf("Empate!\n");
  }
  else if (jogador == 1 && computador == 3 || 
           jogador == 2 && computador == 1 ||
           jogador == 3 && computador == 2) {
    printf("Jogador venceu!\n");
  }
  else {
    printf("Computador venceu!\n");
  }
  return 0;
}
