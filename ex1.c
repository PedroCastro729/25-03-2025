#include <stdio.h>

int main(void) {
    int numero;
    int soma = 0;
    
    printf("Digite o número inteiro: ");
    scanf("%d", &numero);
    
    for(int contador = 1; contador <= numero; contador++) {
        if(contador % 2 == 1) {
            soma += contador;
        }
    }
    
    printf("%d", soma);

    return 0;
}