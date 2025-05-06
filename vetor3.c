#include <stdio.h> 
int main(void){

    int vetor[8];
    int x,y, soma;

    printf("Digite 8 numeros inteiros:\n");
    for (int i=0; i<8; i++){

        printf("Posição %d:", i);
        scanf("%d", &vetor[i]);
    }
    printf("Digite a posição x (0 a 7):");
    scanf("%d", &x);
    printf("Digite a posição y (0 a 7):");
    scanf("%d", &y);

    if (x >= 0 && x < 8 && y >= 0 && y < 8){
        soma = vetor[x] + vetor[y];
        printf("Soma dos valores nas posições %d e %d\n", x, y, soma);
    } else {
        printf("Posições inválidas! use valores entre 0 e 7. \n");
    }
    return 0;
    }
    

