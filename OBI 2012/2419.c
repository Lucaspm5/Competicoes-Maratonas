#include <stdio.h>
#include <stdlib.h>

int is_coast(char** ilha, int i, int j, int l, int c) 
{
    if (ilha[i][j] == '#') 
    {
        if (i == 0 || ilha[i - 1][j] == '.')
            return 1;
        else if (j == c - 1 || ilha[i][j + 1] == '.')
            return 1;
        else if (i == l - 1 || ilha[i + 1][j] == '.')
            return 1;
        else if (j == 0 || ilha[i][j - 1] == '.')
            return 1;
    }
    return 0;
}

int main() 
{
    int l, c;

    scanf("%d %d", &l, &c);

    char** ilha = (char**)malloc(l * sizeof(char*));

    for (int i = 0; i < l; i++) 
    {
        ilha[i] = (char*)malloc((c + 1) * sizeof(char));
        scanf("%s", ilha[i]);
    }

    int cont = 0;

    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            if (is_coast(ilha, i, j, l, c)) cont++;
        }
    }

    printf("%d\n", cont);

    for (int i = 0; i < l; i++)
        free(ilha[i]);
    free(ilha);

    return 0;
}
