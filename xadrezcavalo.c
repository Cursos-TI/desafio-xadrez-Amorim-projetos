#include <stdio.h>

int main() {
    // =====================
    // Movimento da TORRE
    // =====================
    int casas_torre = 5; // Torre se move 5 casas para a direita
    printf("Movimento da Torre:\n");

    for (int i = 1; i <= casas_torre; i++) {
        printf("Direita\n");
    }

    // =====================
    // Movimento do BISPO
    // =====================
    int casas_bispo = 5; // Bispo se move 5 casas na diagonal cima-direita
    printf("\nMovimento do Bispo:\n");

    int j = 1;
    while (j <= casas_bispo) {
        printf("Cima Direita\n");
        j++;
    }

    // =====================
    // Movimento da RAINHA
    // =====================
    int casas_rainha = 8; // Rainha se move 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");

    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= casas_rainha);

    // =====================
    // Movimento do CAVALO
    // =====================
    // Cavalo se move 2 para baixo e 1 para a esquerda (forma de "L")
    printf("\nMovimento do Cavalo:\n");

    int passos_verticais = 2;     // Duas casas para baixo
    int passos_horizontais = 1;   // Uma casa para a esquerda

    // Loop externo (obrigatoriamente um for): movimento vertical
    for (int i = 0; i < passos_verticais; i++) {
        printf("Baixo\n");

        // Loop interno (while): será executado apenas na última iteração do "L"
        if (i == passos_verticais - 1) {
            int l = 0;
            while (l < passos_horizontais) {
                printf("Esquerda\n");
                l++;
            }
        }
    }

    return 0;
}
