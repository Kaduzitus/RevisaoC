#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char** argv) {
    unsigned char ch;

   //ENTRADA, PROCESSAMENTO E SAIDA: O LOOP 'FOR', aguarda uma letra ser digitada, e usa o valor da mesma 
  // na tabela ASC2 e soma + 1 e imprime a letra correspondente, o loop é encerrado quando o 'X'maiusculo ser inserido.
    for (; (ch = getch()) != 'X';) {
        printf("%c", ch + 1);
    }

    return 0;
}
