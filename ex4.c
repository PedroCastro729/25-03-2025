#include <stdio.h>
 
 int main(void) {
     char pedido;
     int total = 0;
     int itens = 0;
 
   printf("Digite o pedido desejado, B batata, H hamburguer, S suco, C combo. F para encerrar: ");
   pedido = getchar();
   getchar();
 
   int quantidadeB = 0;
   int quantidadeH = 0;
   int quantidadeS = 0;
   int quantidadeC = 0;
 
   while( pedido != 'F' ) {
     switch (pedido) {
       case 'B':
 	quantidadeB++;
 	total+=10;
 	itens++;
 	break;
       case 'H': 
 	quantidadeH++;
 	total+=15;
 	itens++;
 	break;
       case 'S':
 	quantidadeS++;
 	total+=9;
 	itens++;
 	break;
 	  case 'C':
 	quantidadeC++;
 	total+=30;
 	itens++;
 	break;
 	default:
 	  printf("Pedido não encontrado");
 	  break;
     }
 
     printf("Digite o pedido desejado, F para encerrar: ");
   pedido = getchar();
   getchar();
   }
 
   printf("Batatas vendidas: %d\nHamburguers vendidos: %d\nSucos vendidos: %d\nCombos vendidos: %d\n", quantidadeB, quantidadeH, quantidadeS, quantidadeC);
   printf("Total de itens: %d\n", itens);
   printf("Preço: %d", total);
   return 0;
 }