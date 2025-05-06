#include <stdio.h>

int main(void) {
    int matriz[5][5];
    int soma = 0; 
    printf("Digite os valores da matriz:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i != j && i + j != 4) { 
                soma += matriz[i][j];
            }
        }
    }

    printf("\nA soma dos elementos que nao pertencem as diagonais e: %d\n", soma);

    return 0;
}
