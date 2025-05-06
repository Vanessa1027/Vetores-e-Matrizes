#include <stdio.h>

int main(void){

    int vetor[10];
    int contadorPares = 0;

    printf("Digite 10 numeros inteiros:\n");
    for (int i=0; i<10; i++){

        printf("Posição %d:", i);
        scanf("%d", &vetor[i]);

        if(vetor [i] % 2==0){
            contadorPares++;
        }
    }
    printf("Quantidade de valores pares: %d\n", contadorPares);

    return 0;
}
