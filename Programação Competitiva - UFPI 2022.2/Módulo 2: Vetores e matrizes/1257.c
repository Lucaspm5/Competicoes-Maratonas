#include <stdio.h>
#include <string.h>

int main(int argc, char const **argv)
{
    int n, size, l;
    char support[100][101];

    scanf("%d", &size);

    while(size--)
    {
        n = 0;
        scanf("%d", &l);
        for(int i = 0; i < l; i++){
            scanf("%s", support[i]);
        }

        for(int i = 0; i < l; i++){
            for(int j = 0; j < strlen(support[i]); j++){
                n+= (((int)support[i][j] - 65) + i + j);
            }
        }

        printf("%d\n", n);
    }
    return 0;
}