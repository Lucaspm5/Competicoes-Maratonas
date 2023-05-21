#include <stdio.h>

int main()
{
    int size;

    scanf("%d", &size);

    int arr[size];
    int cont = 1;
    int max = 0;

    for (int i = 0;i < size;i++)
        scanf("%d",&arr[i]);

    for (int i = 1;i < size;i++) {
        if (arr[i] == arr[i - 1]) cont++;
        else {
            if (cont > max) max = cont;

            cont = 1;
        }
    }

    if (cont > max) max = cont;

    printf("%d\n",max);

    return 0;
}