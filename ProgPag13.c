#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;

    // Loop for para i ir de 10 até 1 (PROCESSAMENTO, o codigo não tem entrada)
    for (i = 10; i > 0; i--) {
        // Imprime a tabuada do 6 para cada valor de i ( SÁIDA)
        printf("\n%4d x 6 = %4d", i, i * 6); 
    }
	
    printf("\n");
    return 0;
}
