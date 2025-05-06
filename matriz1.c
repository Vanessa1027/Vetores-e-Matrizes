#include <stdio.h>

int main(void){

    int matriz[3][3];
    int i, j;
    int menor;

    printf("Digite os elementos da matriz 3x3:\n");

    for(i = 0; j < 3; j++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    menor = matriz[0][0];

    for(i = 0; i < 3; j++) {
        for(j = 0; j < 3; j++) {
            if(matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
    }

    printf("O menor valor da matriz é: %d\n", menor);

    return 0;
    }