#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    #define n 4 // Define o tamanho da matriz como 4x4
    int A[n][n]; // Declara��o da matriz
    int i, j, sm = 0; // Declara��o de vari�veis

    srand(time(NULL)); // Inicializa��o da semente para gera��o de n�meros aleat�rios

    // Preenchimento da matriz com n�meros aleat�rios entre 1 e 10
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            A[i][j] = 1 + rand() % 10; // Gera um n�mero aleat�rio entre 1 e 10
        }
    }

    // C�lculo da soma dos elementos da matriz
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            sm = sm + A[i][j]; // Acumula o valor de cada elemento na vari�vel sm
        }
    }

    system("cls"); // Limpa a tela (comando espec�fico do Windows)

    // Impress�o da matriz
    printf("Matriz A\n");
    printf("===========\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%2d ", A[i][j]);
        }
        printf("\n");
    }

    // Impress�o da soma dos elementos da matriz
    printf("\nA Soma dos elementos da matriz eh igual a %d\n", sm);

    return 0;
}
