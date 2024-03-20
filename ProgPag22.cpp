#include <iostream>
using namespace std;

int main() {
    int i, num;
    
    // (ENTRADA): Solicita ao usuário que insira um número
    cout << "Insira um numero: ";
    cin >> num;
    
    i = -1; // Inicializa 'i' com -1 para iniciar contagem do zero
    
    // (PROCESSAMENTO): Loop do-while que incrementa 'i' e imprime seu valor enquanto 'num' for maior ou igual a 'i'
    do {
        i++;
        cout << i << "\n";
    } while (num >= i);
    
    return 0;
}
