#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    // Define o tamanho da matriz e declara vari�veis
    #define n 3
    int a[n][n], i, j, SIMETRICA;

    // Inicializa a semente para gera��o de n�meros aleat�rios
    srand(time(NULL));

    // Preenche a matriz 'a' com n�meros aleat�rios entre 1 e 10
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            a[i][j] = 1 + rand() % 10;
        }
    }

    // Verifica se a matriz � sim�trica
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

    // Imprime se a matriz � sim�trica ou n�o
    printf("===========\n");
    if (SIMETR
