#include <stdio.h>

// ================================
// Função recursiva para movimentar a TORRE
// ================================
void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

// ================================
// Função recursiva para movimentar a RAINHA
// ================================
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

// ================================
// Função recursiva para movimento vertical do BISPO
// Loop aninhado para o movimento horizontal em cada passo
// ================================
void moverBispo(int passos, int atual) {
    if (atual == passos) return;

    // Loop horizontal (direita)
    for (int h = 0; h < 1; h++) {
        printf("Cima Direita\n");
    }

    moverBispo(passos, atual + 1);
}

// ================================
// Função para movimentar o CAVALO com loops aninhados e controle de fluxo
// Movimento: duas casas para cima e uma para a direita
// ================================
void moverCavalo() {
    int verticais = 2;   // duas casas para cima
    int horizontais = 1; // uma casa para a direita

    printf("Movimento do Cavalo:\n");

    for (int i = 0; i < verticais; i++) {
        if (i == 1) {
            // Segunda casa para cima
            printf("Cima\n");

            // Loop interno para a direita com controle de fluxo
            for (int j = 0; j < horizontais + 1; j++) {
                if (j == 0) continue; // ignora o primeiro
                if (j > 1) break;     // impede passos extras
                printf("Direita\n");
            }
        } else {
            printf("Cima\n");
        }
    }
}

// ================================
// Função principal
// ================================
int main() {
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;

    // =======================
    // Movimento da TORRE
    // =======================
    printf("Movimento da Torre:\n");
    moverTorre(casas_torre);

    // =======================
    // Movimento do BISPO
    // =======================
    printf("\nMovimento do Bispo:\n");
    moverBispo(casas_bispo, 0);

    // =======================
    // Movimento da RAINHA
    // =======================
    printf("\nMovimento da Rainha:\n");
    moverRainha(casas_rainha);

    // =======================
    // Movimento do CAVALO
    // =======================
    printf("\n");
    moverCavalo();

    return 0;
}
