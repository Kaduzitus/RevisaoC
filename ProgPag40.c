#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // Biblioteca não utilizada, você pode removê-la se não for necessária

int main() {
    #define n 3 // Definindo o tamanho da matriz como 3x3
    int matriz[n][n], i, j; // Declaração da matriz e variáveis de controle

    // Loop para preencher a matriz com valores informados pelo usuário
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Informe o valor da linha %d, coluna %d: \n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    system("cls"); // Limpa a tela (comando específico do Windows)

    // Imprime a matriz
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
