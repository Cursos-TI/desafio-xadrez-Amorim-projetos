#include <stdio.h>

int main() {
    int casas = 5; // Número de casas a serem movidas

    printf("Movimento do Bispo:\n");

    int i = 1;
    // Movimento na diagonal (cima e direita)
    while (i <= casas) {
        printf("Cima Direita\n");
        i++;
    }

    return 0;
}
