#include <stdio.h>
#include <limits.h>

int main()
{
    float arr[5] = {0};

    for (int i = 0; i < 5;i++)
        scanf("%f", &arr[i]);

    float maior = 0;
    float menor = arr[0];

    for (int i = 0;i < 5;i++)
    {
        if (arr[i] > maior) maior = arr[i];
        if (arr[i] < menor) menor = arr[i];
    }

    int excluiuMaior = 0;
    int excluiuMenor = 0;
    float soma = 0.0;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == maior && !excluiuMaior)
            excluiuMaior = 1;
        else if (arr[i] == menor && !excluiuMenor)
            excluiuMenor = 1;
        else
            soma += arr[i];
    }

    printf("%.1f\n", soma);

    return 0;
}