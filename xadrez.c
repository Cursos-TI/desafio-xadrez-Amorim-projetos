#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

#include <stdio.h>

int main() {
    int casas = 5; // Número de casas a serem movidas

    printf("Movimento da Torre:\n");

    // Movimento para a direita (horizontalmente)
    for (int i = 1; i <= casas; i++) {
        printf("Direita\n");
    }

    return 0;
}
