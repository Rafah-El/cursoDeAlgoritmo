#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  // variável que captura o valor do dado
  int numeroDado;

  // variável que gerencia a entrata e saída da estrutura de controle
  int saida = 1;

  // mudando a semente que gera números aleatórios
  srand(time(NULL));

  printf("O jogo começou!\n");

  while (saida) {
    printf("Jogando o dado...\n");
    numeroDado = rand() % 6 + 1;
    printf("O número sorteado foi %d\n", numeroDado);

    printf("Deseja continuar? \n0 - Não\n - Sim\nEscolha: ");
    scanf("%d", &saida);
  }

  print("O jogo acabou!"\n");

  return 0;
}