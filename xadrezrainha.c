#include <stdio.h>

int main() {
    int casas = 8; // Número de casas a serem movidas

    printf("Movimento da Rainha:\n");

    int i = 1;
    // Movimento para a esquerda
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= casas);

    return 0;
}
