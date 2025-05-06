#include <stdio.h>
int main(void){

    int matriz [4][4];
    int maior = 0;

    printf("Digite os valores da matriz:\n");
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("Posicao [%d] [%d]:", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    maior=matriz[0][0];
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(matriz [i][j]> maior){
                maior=matriz[i][j];
            }
        }
    }
    printf("Esse e o maior valor da matriz: %d", maior);

    return 0;
}