#include <stdio.h>
#include <stdlib.h>

unsigned std; 

int main() {
    int a = 10;
// entrada, processamento e saida reunidos.

    // (PROCESSAMENTO): O loop while imprime o valor de 'a' enquanto 'a' for menor que 20
    // (ENTRADA): Nenhuma entrada de usu�rio neste programa
    // (PROCESSAMENTO): O valor de 'a' � incrementado a cada itera��o do loop
    // (SA�DA): O valor de 'a' � impresso na tela
    
    while (a < 20) {
        printf("Valor de a: %d \n", a);
        a++;
    }

    return 0;
}
