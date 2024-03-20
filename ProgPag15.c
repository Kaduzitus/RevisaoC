#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j;

    // (ENTRADA) as variaveis já tem o valor 0 inicialmente.
    // (PROCESSAMENTO): O loop for continuará enqaunto os valores de i e j forem menores que 100
    for (i = 0, j = i; (i + j) < 100; i++, j++) {
       // (SAIDA): Imprime a soma de i e j
        printf("%d", i + j);
    }

    /// Imprime uma nova linha para melhorar a formatação
    printf("\n");
    return 0;
}
