#include <stdio.h>
#include <stdlib.h>

int main() {
    int count = 0; // Inicializa a vari�vel de contagem
    
    // Loop do-while que imprime o valor de 'count' e o incrementa at� que 'count' seja menor que 10
    do {
        printf("%d\n", count); // Imprime o valor de 'count'
        ++count; // Incrementa 'count'
    } while (count < 10); // Condi��o de parada do loop
    
    return 0;
}
