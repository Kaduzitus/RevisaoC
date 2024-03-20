#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int numero, X;
	
    // Solicita ao usuário que insira um número ( ENTRADA)
    scanf("%d", &numero);
	
    // Utiliza o operador ternário para verificar se o número é maior que 10
    // Se sim, atribui 1 à variável X, senão atribui 0. (PROCESSAMENTO)
    X = (numero > 10) ? 1 : 0;
	
    // Imprime o valor de X, que será 1 se o número for maior que 10 e 0 caso contrário. (SÁIDA)
    printf("%d", X);
	
    return 0;
}
