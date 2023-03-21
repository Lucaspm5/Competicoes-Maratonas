#include <stdio.h>
#include <stdbool.h>

#define size 1005

int n, x[size], y[size];
bool auxiliar[size];

bool aux(int sup)
{
    auxiliar[sup] = true;

    if (auxiliar[x[sup]] && auxiliar[y[sup]])
        return true;

    bool res = false;

    if (!auxiliar[x[sup]])
        res |= aux(x[sup]);

    if (!auxiliar[y[sup]])
        res |= aux(y[sup]);

    return res;
}

int main(void)
{
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d", &x[i], &y[i]);

        auxiliar[i] = false;
    }

    for (int i = 1; i <= n; i++)
    {
        if (!auxiliar[i] && aux(i))
            auxiliar[i] = true;
    }

    for (int i = 1; i <= n; i++)
    {
        printf("%c", auxiliar[i] ? 'Y' : 'N');
    }

    printf("\n");

    return 0;
} 
