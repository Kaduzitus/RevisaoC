#include <stdio.h>
#include <stdlib.h>

int main() {
    int X;
	
    // Solicita ao usu�rio que insira o valor ( ENTRADA )
    printf("Insira o valor: ");
    scanf("%d", &X);
    
    // Verifica se o valor � maior que 10 e imprime o resultado( PROCESSAMENTO E SA�DA)
    if(X > 10) {
        printf("O numero %d eh maior que 10", X);
    } else {
        printf("O numero %d eh menor que 10", X );
    }

    return 0;
}
