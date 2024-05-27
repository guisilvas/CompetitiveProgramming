#include <stdio.h>

// Função para verificar se um número é formado apenas por 0s e 1s
int eBinario(int n) {
    while (n > 0) {
        int digito = n % 10;
        if (digito != 0 && digito != 1) {
            return 0;
        }
        n /= 10;
    }
    return 1;
}

int main() {
    int numero = 105;
    
    printf("Os antecessores binários de %d são:\n", numero);
    
    // Procurar antecessores binários
    for (int i = numero - 1; i >= 0; i--) {
        if (eBinario(i)) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}
