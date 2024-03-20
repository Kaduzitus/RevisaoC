#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    // Define o tamanho da matriz e declara variáveis
    #define n 3
    int a[n][n], i, j, SIMETRICA;

    // Inicializa a semente para geração de números aleatórios
    srand(time(NULL));

    // Preenche a matriz 'a' com números aleatórios entre 1 e 10
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            a[i][j] = 1 + rand() % 10;
        }
    }

    // Verifica se a matriz é simétrica
    SIMETRICA = 1;
    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            if (a[i][j] != a[j][i]) {
                SIMETRICA = 0;
            }
        }
    }

    // Limpa a tela
    system("cls");

    // Imprime a matriz 'a'
    printf("Matriz A\n");
    printf("===========\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }

    // Imprime se a matriz é simétrica ou não
    printf("===========\n");
    if (SIMETR
