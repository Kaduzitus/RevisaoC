#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    #define n 4 // Define o tamanho da matriz como 4x4
    int A[n][n]; // Declaração da matriz
    int i, j, sm = 0; // Declaração de variáveis

    srand(time(NULL)); // Inicialização da semente para geração de números aleatórios

    // Preenchimento da matriz com números aleatórios entre 1 e 10
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            A[i][j] = 1 + rand() % 10; // Gera um número aleatório entre 1 e 10
        }
    }

    // Cálculo da soma dos elementos da matriz
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            sm = sm + A[i][j]; // Acumula o valor de cada elemento na variável sm
        }
    }

    system("cls"); // Limpa a tela (comando específico do Windows)

    // Impressão da matriz
    printf("Matriz A\n");
    printf("===========\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%2d ", A[i][j]);
        }
        printf("\n");
    }

    // Impressão da soma dos elementos da matriz
    printf("\nA Soma dos elementos da matriz eh igual a %d\n", sm);

    return 0;
}
