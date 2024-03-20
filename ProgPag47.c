#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 4

int main() {
    int A[n][n], B[n][n], AB[n][n];
    int i, j, k;

    // Inicializando a semente para geração de números aleatórios
    srand(time(NULL));

   
    printf("Matriz A:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            A[i][j] = 1 + rand() % 10;
            printf("%2d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz B:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            B[i][j] = 1 + rand() % 10;
            printf("%2d ", B[i][j]);
        }
 // Preenchendo as matrizes A e B com números aleatórios entre 1 e 10
        printf("\n");
    }

    // Inicializando a matriz resultante AB com zeros
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            AB[i][j] = 0;
        }
    }

    // Calculando a multiplicação de A por B
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            for (k = 0; k < n; k++) {
                AB[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Imprimindo a matriz resultante AB	
    printf("\nMatriz AB (Resultado da multiplicacao de A por B):\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%5d ", AB[i][j]);
        }
        printf("\n");
    }

    return 0;
}
