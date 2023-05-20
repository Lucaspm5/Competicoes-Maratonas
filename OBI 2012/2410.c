#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int number, cont;
}Frequencia;

int main()
{
    int N;

    scanf("%d", &N);

    int arr[N];

    for (int i = 0;i < N;i++)
        scanf("%d", &arr[i]);

    int maior = 0;

    for (int i = 0; i < N; i++)
    {
        if (arr[i] > maior)
            maior = arr[i];
    }

    Frequencia *validar = (Frequencia*)calloc(maior + 1, sizeof(Frequencia));

    for (int i = 0;i < N;i++)
    {
        validar[arr[i]].number = arr[i];
        validar[arr[i]].cont++;
    }

    int soma = 0;

    for (int i = 0;i < maior + 1;i++)
    {
        if (validar[i].cont == 1)
            soma++;
    }

    printf("\n%d\n",soma);

    free(validar);

    return 0;
}
