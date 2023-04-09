#include <stdio.h>

int main()
{
    int n;
    int v[4][4];

    scanf("%d", &n);

    while (n--)
    {
        int none = 0;
        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                scanf("%d", &v[i][j]);
                if (v[i][j] == 2048)
                    none = 1;
            }
        }

        if (none)
        {
            printf("NONE\n");
            continue;
        }

        int down = 0;
        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < 3; ++j)
                if ((v[j][i] != 0 && v[j + 1][i] == 0) || (v[j][i] == v[j + 1][i] && v[j][i]))
                    down = 1;

            if (down)
            {
                break;
            }
        }

        int left = 0;

        for (int i = 0; i < 4; ++i)
        {
            for (int j = 1; j < 4; ++j)
            {
                if ((v[i][j - 1] == 0 && v[i][j] != 0) || (v[i][j - 1] == v[i][j] && v[i][j]))
                    left = 1;
            }
            if (left)
            {
                break;
            }
        }

        int right = 0;

        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < 3; ++j)
            {
                if ((v[i][j + 1] == 0 && v[i][j] != 0) || (v[i][j + 1] == v[i][j] && v[i][j]))
                    right = 1;
            }
            if (right)
            {
                break;
            }
        }

        int up = 0;
        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < 3; ++j)
                if ((v[j + 1][i] != 0 && v[j][i] == 0) || (v[j][i] == v[j + 1][i] && v[j][i]))
                    up = 1;

            if (up)
            {
                break;
            }
        }

        if (!down && !left && !right && !up)
            printf("NONE");

        int escrevi = 0;

        if (down)
            printf("DOWN"), escrevi = 1;
        if (left)
        {
            if (escrevi)
                printf(" ");
            escrevi = 1;
            printf("LEFT");
        }
        if (right)
        {
            if (escrevi)
                printf(" ");
            escrevi = 1;
            printf("RIGHT");
        }
        if (up)
        {
            if (escrevi)
                printf(" ");
            escrevi = 1;
            printf("UP");
        }
        printf("\n");
    }
    return 0;
}
