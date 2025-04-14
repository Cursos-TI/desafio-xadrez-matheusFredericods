#include <stdio.h>

// Definindo constantes para as direções
#define CIMA 1
#define BAIXO 2
#define ESQUERDA 3
#define DIREITA 4

// Função para movimentar o bispo
void moverBispo() {
    // O bispo se move na diagonal superior direita
    for (int i = 1; i <= 5; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
}

// Função para movimentar a torre
void moverTorre() {
    // A torre se move 5 casas para a direita
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }
}

// Função para movimentar a rainha
void moverRainha() {
    // A rainha se move 8 casas para a esquerda
    for (int i = 1; i <= 8; i++) {
        printf("Esquerda\n");
    }
}

int main() {
    // Variáveis para armazenar o tipo de peça
    int opcao;

    // Exibindo opções para o usuário
    printf("Escolha uma peça para mover (1 - Bispo, 2 - Torre, 3 - Rainha): ");
    scanf("%d", &opcao);

    // Executando a movimentação conforme a peça escolhida
    switch (opcao) {
        case 1:
            printf("Movimento do Bispo:\n");
            moverBispo();
            break;
        case 2:
            printf("Movimento da Torre:\n");
            moverTorre();
            break;
        case 3:
            printf("Movimento da Rainha:\n");
            moverRainha();
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}
