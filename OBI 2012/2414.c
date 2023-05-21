#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, cont = 0;
    int *arr = (int*)calloc(cont, sizeof(int));

    while(scanf("%d", &x))
    {
        if (x == 0) break;
        else{
            arr = realloc(arr, (cont + 1) * sizeof(int));
            arr[cont++] = x;
        }
    }

    int maior = 0;

    for (int i = 0;i < cont;i++)
    {
        if (arr[i] > maior) maior = arr[i];
    }

    printf("%d\n",maior);

    free(arr);

    return 0;
}