#include <stdio.h>
#include <ctype.h>

int main()
{
    int t = 1;
    while (1) {
        int m = 0;
        int num = 0;
        int sinal = 1;
        int resultado = 0;
        char c;

        scanf("%d", &m);

        if (m == 0) break;

        getchar();

        while (m--)
        {
            num = 0;
            while ((c = getchar()) != '+' && c != '-' && c != '\n'){
                if (isdigit(c)) {
                    num = num * 10 + c - '0';
                }
            }
            resultado += sinal * num;

            if (c == '-') sinal = -1;
            else sinal = 1;
        }
       printf("Teste %d\n%d\n\n", t++, resultado);
    }
    return 0;
}
