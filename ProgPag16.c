#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch;

    // (ENTRADA): J� inicia com o valor de ch sendo 'a'
  
    for (ch = 'a'; ch <= 'z'; ch++) {
    	// (PROCESSAMENTO): O loop for itera enquanto ch for menor ou igual a 'z'
    	
        // (SA�DA): Imprime o valor ASCII dos caractere ch
        printf("\nO valor ASCII de %c eh de %d", ch, ch);
    }

    // Imprime uma nova linha para melhorar a a aparencia e formata��o do codigo
    printf("\n");
    return 0;
}
