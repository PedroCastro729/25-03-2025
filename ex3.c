#include <stdio.h>

int main(void) {
    char operacao;

  printf("Digite L para o processo inteiro, E para enxaguar e secar ou S para secar. F para encerrar: ");
  operacao = getchar();
  getchar();

  int operacaoL = 0;
  int operacaoE = 0;
  int operacaoS = 0;

  while( operacao != 'F' ) {
    switch (operacao) {
      case 'L':
	    printf("Sua roupa foi lavada \n");
	    operacaoL++;
      case 'E': 
	    printf("Sua roupa foi enxaguada \n");
	    operacaoE++;
      case 'S':
	    printf("Sua roupa foi secada \n");
	    operacaoS++;
    }

    printf("Digite novamente o processo desejado, F para encerrar:");
    operacao = getchar();
    getchar();
  }

  printf("Roupas lavadas: %d \nRoupas enxaguadas: %d \nRoupas secadas: %d", operacaoL, operacaoE, operacaoS);
  return 0;
}