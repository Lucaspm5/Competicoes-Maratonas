#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a, b, c, d , e, f;

    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

    int time_1 = a * 3 + b;
    int time_2 = d * 3 + e;

    if (time_1 > time_2) printf("C\n");
    else if (time_1 < time_2) printf("F\n");
    else
    {
        if (c > f)
            printf("C\n");
        else if (c < f)
            printf("F\n");
        else
            printf("=\n");
    }

    return 0;
}
