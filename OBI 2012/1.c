#include <stdio.h>
#include <stdlib.h>

int compare (const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}

int main()
{
    int size;

    scanf("%d", &size);

    int arr[size];

    for (int i = 0;i < size;i++)
        scanf("%d",&arr[i]);

    qsort(arr, size, sizeof(int), compare);

    int cont = 1;

    for (int i = 1;i < size;i++)
    {
        if(arr[i] != arr[i-1]) cont ++;
    }

    printf("%d\n", cont);

    return 0;
}