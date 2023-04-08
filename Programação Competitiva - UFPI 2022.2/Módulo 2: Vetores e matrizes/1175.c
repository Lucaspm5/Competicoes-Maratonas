#include <stdio.h>

int main()
{
    int const TAM = 20;

    int vet[TAM], aux;

    for(int i = 0; i < TAM; i++)
        scanf("%d", &vet[i]);
    for(int i = 0, j = TAM - 1; i < TAM / 2; i++, j--) {
        aux = vet[i];
        vet[i] = vet[j];
        vet[j] = aux;
    }

    for(int i = 0; i < TAM; i++)
        printf("N[%d] = %d\n", i, vet[i]);
    return 0;
}
