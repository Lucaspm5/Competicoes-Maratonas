#include <stdio.h>

int main(int argc, char **argv)
{
    int l, c;
    scanf("%d %d", &l, &c);
    if(l % 2 != 0 && c % 2 == 0 || l % 2 == 0 && c % 2 != 0)
        printf("0\n");
    else
        printf("1\n");
    return 0;
}
