#include <stdio.h>

int main()
{
    int a, b, c;
    int cont = 0;

    scanf("%d %d %d", &a, &b, &c);

    while(a >= 2 && b >= 3 && c >= 5)
    {
        cont++;
        a -= 2;
        b -= 3;
        c -= 5;
    }

    printf("%d\n", cont);

    return 0;
}