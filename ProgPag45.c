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
              /// por ser gerada randomicamente, não consegui achar uma matriz simetrica,
          // mas testei com uma matriz pronta e simentrica e deu tudo certo.
        }
    }

    // Verifica se a matriz é simétrica
    SIMETRICA = 1;
    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            // Compara os elementos fora da diagonal principal
            if (a[i][j] != a[j][i]) {
                // Se algum par não for simétrico, marca a matriz como não simétrica
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
    if (SIMETRICA == 1) {
        printf("A Matriz A é Simétrica.\n");
    } else {	
        printf("A Matriz A não é Simétrica.\n");
    }

    return 0;
}
