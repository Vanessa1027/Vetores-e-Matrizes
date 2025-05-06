#include <stdio.h>

int main(void) {
    int matriz[4][4];
    int contador = 0; 

    printf("Digite os valores para a matriz:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            if (matriz[i][j] > 10) {
                contador++;
            }
        }
    }
    printf("\nQuantidade de valores maiores que 10: %d\n", contador);

    return 0;
}
