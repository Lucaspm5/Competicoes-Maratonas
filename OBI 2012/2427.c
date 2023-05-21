#include <stdio.h>

int main()
{
    int L;
    scanf("%d", &L);

    int pedacos = 1;
    while (L >= 2)
    {
        pedacos *= 4;
        L /= 2;
    }

    printf("%d\n", pedacos);

    return 0;
}
