#include <stdio.h>

int main(void){
    int numeros[5];
    int soma;
    for (int i=0; i<5; i++)
    {
        printf("Digite o %dº numero:", i+1);
        scanf("%d", &numeros[i]);
        soma += numeros [i]; 
    }
    printf("Os numeros digitados foram:");
    for (int i=0; i<5; i++)
    {
        printf("%d", numeros[i]);
    }
    printf("\nA média de todos os números é: %d\n", soma /5);
    return 0;
}

