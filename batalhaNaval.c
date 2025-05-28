#include <stdio.h>

//Nível Novato
// #define TAM_TABULEIRO 10
// #define TAM_NAVIO 3

// // Função para exibir o tabuleiro
// void exibirTabuleiro(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO]) {
//     for (int i = 0; i < TAM_TABULEIRO; i++) {
//         for (int j = 0; j < TAM_TABULEIRO; j++) {
//             printf("%d ", tabuleiro[i][j]);
//         }
//         printf("\n");
//     }
// }

// // Função para verificar se a posição é válida para um navio horizontal
// int posicaoValidaHorizontal(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int linha, int coluna) {
//     // Verifica se o navio cabe horizontalmente
//     if (coluna + TAM_NAVIO > TAM_TABULEIRO) return 0; // Não cabe horizontalmente

//     // Verifica se as posições estão livres
//     for (int i = 0; i < TAM_NAVIO; i++) {
//         if (tabuleiro[linha][coluna + i] != 0) return 0; // Já existe um navio
//     }
//     return 1;
// }

// // Função para verificar se a posição é válida para um navio vertical
// int posicaoValidaVertical(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int linha, int coluna) {
//     // Verifica se o navio cabe verticalmente
//     if (linha + TAM_NAVIO > TAM_TABULEIRO) return 0; // Não cabe verticalmente

//     // Verifica se as posições estão livres
//     for (int i = 0; i < TAM_NAVIO; i++) {
//         if (tabuleiro[linha + i][coluna] != 0) return 0; // Já existe um navio
//     }
//     return 1;
// }

// // Função para posicionar o navio horizontalmente
// void posicionarNavioHorizontal(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int linha, int coluna) {
//     for (int i = 0; i < TAM_NAVIO; i++) {
//         tabuleiro[linha][coluna + i] = 3; // Marca as posições do navio
//     }
// }

// // Função para posicionar o navio verticalmente
// void posicionarNavioVertical(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int linha, int coluna) {
//     for (int i = 0; i < TAM_NAVIO; i++) {
//         tabuleiro[linha + i][coluna] = 3; // Marca as posições do navio
//     }
// }

// int main() {
//     int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO] = {0}; // Inicializa o tabuleiro com 0 (água)

//     // Definir coordenadas para os navios
//     int linhaHorizontal = 2, colunaHorizontal = 3;  // Posição do navio horizontal
//     int linhaVertical = 5, colunaVertical = 6;      // Posição do navio vertical

//     // Verificar e posicionar o navio horizontal
//     if (posicaoValidaHorizontal(tabuleiro, linhaHorizontal, colunaHorizontal)) {
//         posicionarNavioHorizontal(tabuleiro, linhaHorizontal, colunaHorizontal);
//     } else {
//         printf("Erro: posição inválida para o navio horizontal!\n");
//     }

//     // Verificar e posicionar o navio vertical
//     if (posicaoValidaVertical(tabuleiro, linhaVertical, colunaVertical)) {
//         posicionarNavioVertical(tabuleiro, linhaVertical, colunaVertical);
//     } else {
//         printf("Erro: posição inválida para o navio vertical!\n");
//     }

//     // Exibir o tabuleiro
//     printf("Tabuleiro final:\n");
//     exibirTabuleiro(tabuleiro);

//     return 0;
// }

//Nível Aventureiro

// #define TAM_TABULEIRO 10
// #define TAM_NAVIO 3

// // Função para exibir o tabuleiro
// void exibirTabuleiro(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO]) {
//     for (int i = 0; i < TAM_TABULEIRO; i++) {
//         for (int j = 0; j < TAM_TABULEIRO; j++) {
//             printf("%2d ", tabuleiro[i][j]); // Alinha os números para uma exibição mais limpa
//         }
//         printf("\n");
//     }
// }

// // Função para verificar se a posição é válida para um navio horizontal
// int posicaoValidaHorizontal(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int linha, int coluna) {
//     // Verifica se o navio cabe horizontalmente
//     if (coluna + TAM_NAVIO > TAM_TABULEIRO) return 0; // Não cabe horizontalmente

//     // Verifica se as posições estão livres
//     for (int i = 0; i < TAM_NAVIO; i++) {
//         if (tabuleiro[linha][coluna + i] != 0) return 0; // Já existe um navio
//     }
//     return 1;
// }

// // Função para verificar se a posição é válida para um navio vertical
// int posicaoValidaVertical(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int linha, int coluna) {
//     // Verifica se o navio cabe verticalmente
//     if (linha + TAM_NAVIO > TAM_TABULEIRO) return 0; // Não cabe verticalmente

//     // Verifica se as posições estão livres
//     for (int i = 0; i < TAM_NAVIO; i++) {
//         if (tabuleiro[linha + i][coluna] != 0) return 0; // Já existe um navio
//     }
//     return 1;
// }

// // Função para verificar se a posição é válida para um navio diagonal (crescente)
// int posicaoValidaDiagonalCrescente(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int linha, int coluna) {
//     // Verifica se o navio cabe diagonalmente (linha e coluna aumentam)
//     if (linha + TAM_NAVIO > TAM_TABULEIRO || coluna + TAM_NAVIO > TAM_TABULEIRO) return 0; // Não cabe na diagonal crescente

//     // Verifica se as posições estão livres
//     for (int i = 0; i < TAM_NAVIO; i++) {
//         if (tabuleiro[linha + i][coluna + i] != 0) return 0; // Já existe um navio
//     }
//     return 1;
// }

// // Função para verificar se a posição é válida para um navio diagonal (decrescente)
// int posicaoValidaDiagonalDecrescente(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int linha, int coluna) {
//     // Verifica se o navio cabe diagonalmente (linha aumenta e coluna diminui)
//     if (linha + TAM_NAVIO > TAM_TABULEIRO || coluna - TAM_NAVIO < -1) return 0; // Não cabe na diagonal decrescente

//     // Verifica se as posições estão livres
//     for (int i = 0; i < TAM_NAVIO; i++) {
//         if (tabuleiro[linha + i][coluna - i] != 0) return 0; // Já existe um navio
//     }
//     return 1;
// }

// // Função para posicionar o navio horizontalmente
// void posicionarNavioHorizontal(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int linha, int coluna) {
//     for (int i = 0; i < TAM_NAVIO; i++) {
//         tabuleiro[linha][coluna + i] = 3; // Marca as posições do navio
//     }
// }

// // Função para posicionar o navio verticalmente
// void posicionarNavioVertical(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int linha, int coluna) {
//     for (int i = 0; i < TAM_NAVIO; i++) {
//         tabuleiro[linha + i][coluna] = 3; // Marca as posições do navio
//     }
// }

// // Função para posicionar o navio diagonal crescente
// void posicionarNavioDiagonalCrescente(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int linha, int coluna) {
//     for (int i = 0; i < TAM_NAVIO; i++) {
//         tabuleiro[linha + i][coluna + i] = 3; // Marca as posições do navio
//     }
// }

// // Função para posicionar o navio diagonal decrescente
// void posicionarNavioDiagonalDecrescente(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int linha, int coluna) {
//     for (int i = 0; i < TAM_NAVIO; i++) {
//         tabuleiro[linha + i][coluna - i] = 3; // Marca as posições do navio
//     }
// }

// int main() {
//     int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO] = {0}; // Inicializa o tabuleiro com 0 (água)

//     // Definir coordenadas para os navios
//     int linhaHorizontal = 1, colunaHorizontal = 3;  // Posição do navio horizontal
//     int linhaVertical = 5, colunaVertical = 6;      // Posição do navio vertical
//     int linhaDiagonalCrescente = 2, colunaDiagonalCrescente = 2; // Posição do navio diagonal crescente
//     int linhaDiagonalDecrescente = 7, colunaDiagonalDecrescente = 8; // Posição do navio diagonal decrescente

//     // Verificar e posicionar o navio horizontal
//     if (posicaoValidaHorizontal(tabuleiro, linhaHorizontal, colunaHorizontal)) {
//         posicionarNavioHorizontal(tabuleiro, linhaHorizontal, colunaHorizontal);
//     } else {
//         printf("Erro: posição inválida para o navio horizontal!\n");
//     }

//     // Verificar e posicionar o navio vertical
//     if (posicaoValidaVertical(tabuleiro, linhaVertical, colunaVertical)) {
//         posicionarNavioVertical(tabuleiro, linhaVertical, colunaVertical);
//     } else {
//         printf("Erro: posição inválida para o navio vertical!\n");
//     }

//     // Verificar e posicionar o navio diagonal crescente
//     if (posicaoValidaDiagonalCrescente(tabuleiro, linhaDiagonalCrescente, colunaDiagonalCrescente)) {
//         posicionarNavioDiagonalCrescente(tabuleiro, linhaDiagonalCrescente, colunaDiagonalCrescente);
//     } else {
//         printf("Erro: posição inválida para o navio diagonal crescente!\n");
//     }

//     // Verificar e posicionar o navio diagonal decrescente
//     if (posicaoValidaDiagonalDecrescente(tabuleiro, linhaDiagonalDecrescente, colunaDiagonalDecrescente)) {
//         posicionarNavioDiagonalDecrescente(tabuleiro, linhaDiagonalDecrescente, colunaDiagonalDecrescente);
//     } else {
//         printf("Erro: posição inválida para o navio diagonal decrescente!\n");
//     }

//     // Exibir o tabuleiro
//     printf("Tabuleiro final:\n");
//     exibirTabuleiro(tabuleiro);

//     return 0;
// }

//Nível Mestre

#define TAM_TABULEIRO 10
#define TAM_HABILIDADE 5

// Função para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO]) {
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            if (tabuleiro[i][j] == 0) printf(" 0 ");
            else if (tabuleiro[i][j] == 3) printf(" 3 ");
            else if (tabuleiro[i][j] == 5) printf(" 5 ");
        }
        printf("\n");
    }
}

// Função para aplicar a habilidade "Cone" no tabuleiro
void aplicarHabilidadeCone(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int linha, int coluna) {
    int cone[TAM_HABILIDADE][TAM_HABILIDADE] = { {0, 0, 1, 0, 0}, 
                                                 {0, 1, 1, 1, 0}, 
                                                 {1, 1, 1, 1, 1}, 
                                                 {0, 1, 1, 1, 0}, 
                                                 {0, 0, 1, 0, 0} };

    // Aplica a área de efeito "Cone" no tabuleiro
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            if (cone[i][j] == 1) {
                int x = linha + i - 2;  // Ajusta para o centro
                int y = coluna + j - 2; // Ajusta para o centro
                if (x >= 0 && x < TAM_TABULEIRO && y >= 0 && y < TAM_TABULEIRO) {
                    tabuleiro[x][y] = 5; // Marca a área afetada pelo cone
                }
            }
        }
    }
}

// Função para aplicar a habilidade "Cruz" no tabuleiro
void aplicarHabilidadeCruz(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int linha, int coluna) {
    int cruz[TAM_HABILIDADE][TAM_HABILIDADE] = { {0, 0, 1, 0, 0}, 
                                                 {0, 0, 1, 0, 0}, 
                                                 {1, 1, 1, 1, 1}, 
                                                 {0, 0, 1, 0, 0}, 
                                                 {0, 0, 1, 0, 0} };

    // Aplica a área de efeito "Cruz" no tabuleiro
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            if (cruz[i][j] == 1) {
                int x = linha + i - 2;  // Ajusta para o centro
                int y = coluna + j - 2; // Ajusta para o centro
                if (x >= 0 && x < TAM_TABULEIRO && y >= 0 && y < TAM_TABULEIRO) {
                    tabuleiro[x][y] = 5; // Marca a área afetada pela cruz
                }
            }
        }
    }
}

// Função para aplicar a habilidade "Octaedro" no tabuleiro
void aplicarHabilidadeOctaedro(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int linha, int coluna) {
    int octaedro[TAM_HABILIDADE][TAM_HABILIDADE] = { {0, 0, 1, 0, 0}, 
                                                    {0, 1, 1, 1, 0}, 
                                                    {1, 1, 1, 1, 1}, 
                                                    {0, 1, 1, 1, 0}, 
                                                    {0, 0, 1, 0, 0} };

    // Aplica a área de efeito "Octaedro" no tabuleiro
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            if (octaedro[i][j] == 1) {
                int x = linha + i - 2;  // Ajusta para o centro
                int y = coluna + j - 2; // Ajusta para o centro
                if (x >= 0 && x < TAM_TABULEIRO && y >= 0 && y < TAM_TABULEIRO) {
                    tabuleiro[x][y] = 5; // Marca a área afetada pelo octaedro
                }
            }
        }
    }
}

int main() {
    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO] = {0}; // Inicializa o tabuleiro com 0 (água)

    // Definir coordenadas para os navios
    int linhaHorizontal = 1, colunaHorizontal = 3;  // Posição do navio horizontal
    int linhaVertical = 5, colunaVertical = 6;      // Posição do navio vertical

    // Posicionar navios no tabuleiro
    tabuleiro[linhaHorizontal][colunaHorizontal] = 3;
    tabuleiro[linhaHorizontal][colunaHorizontal+1] = 3;
    tabuleiro[linhaHorizontal][colunaHorizontal+2] = 3;

    tabuleiro[linhaVertical][colunaVertical] = 3;
    tabuleiro[linhaVertical+1][colunaVertical] = 3;
    tabuleiro[linhaVertical+2][colunaVertical] = 3;

    // Aplicar as habilidades de área no tabuleiro
    aplicarHabilidadeCone(tabuleiro, 3, 3); // Cone no ponto (3, 3)
    aplicarHabilidadeCruz(tabuleiro, 5, 5); // Cruz no ponto (5, 5)
    aplicarHabilidadeOctaedro(tabuleiro, 6, 6); // Octaedro no ponto (6, 6)

    // Exibir o tabuleiro final com as habilidades aplicadas
    printf("Tabuleiro final:\n");
    exibirTabuleiro(tabuleiro);

    return 0;
}
