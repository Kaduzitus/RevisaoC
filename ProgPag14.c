#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;

    // Loop for para "i" ir 3 at� 100, indo sempre de de 3 em 3. (PROCESSAMENTO, n�o existe ENTRADA)
    for (i = 3; i <= 100; i += 3) {
        // Imprime APENAS os n�meros que s�o m�ltiplos de 3. (SAIDA)
        printf("%d\t", i);
    }
	
    printf("\n");
    return 0;
}
