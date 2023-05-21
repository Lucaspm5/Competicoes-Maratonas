#include <stdio.h>

int main()
{
    int size;

    scanf("%d", &size);

    int arr[size];
    int soma = 0;

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        soma += arr[i];
    }

    int elemento_esquerda = 0;

    for (int i = 0; i < size; i++)
    {
        elemento_esquerda += arr[i];
        if (elemento_esquerda == soma / 2) { printf("%d\n", i + 1);break; }
    }
    return 0;
}
