#include <stdio.h>
#include <stdlib.h>

unsigned std; 

int main() {
    int a = 10;
// entrada, processamento e saida reunidos.

    // (PROCESSAMENTO): O loop while imprime o valor de 'a' enquanto 'a' for menor que 20
    // (ENTRADA): Nenhuma entrada de usuário neste programa
    // (PROCESSAMENTO): O valor de 'a' é incrementado a cada iteração do loop
    // (SAÍDA): O valor de 'a' é impresso na tela
    
    while (a < 20) {
        printf("Valor de a: %d \n", a);
        a++;
    }

    return 0;
}
