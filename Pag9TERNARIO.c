#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int numero, X;
	
    // Solicita ao usu�rio que insira um n�mero ( ENTRADA)
    scanf("%d", &numero);
	
    // Utiliza o operador tern�rio para verificar se o n�mero � maior que 10
    // Se sim, atribui 1 � vari�vel X, sen�o atribui 0. (PROCESSAMENTO)
    X = (numero > 10) ? 1 : 0;
	
    // Imprime o valor de X, que ser� 1 se o n�mero for maior que 10 e 0 caso contr�rio. (S�IDA)
    printf("%d", X);
	
    return 0;
}
