#include <stdio.h>

int main()
{
    int const TAM = 5;
    int par[TAM], impar[TAM], num, contPar, contImpar;
    contImpar = contPar = 0;
    int i, j;

    for (i = 0 ; i < 15; i++)
    {
        scanf("%d", &num);
        if(num % 2 == 0) {
            par[contPar++] = num;
        } else {
            impar[contImpar++] = num;
        }
        if(contPar == 5) {
            for(j = 0; j < contPar; j++)
                printf("par[%d] = %d\n", j, par[j]);
            contPar = 0;
        }

         if(contImpar == 5) {
            for(j = 0; j < contImpar; j++)
                printf("impar[%d] = %d\n", j, impar[j]);
            contImpar = 0;
        }
    }
    for(j = 0; j < contImpar; j++)
        printf("impar[%d] = %d\n", j, impar[j]);
    for(j = 0; j < contPar; j++)
        printf("par[%d] = %d\n", j, par[j]);
    return 0;
}
