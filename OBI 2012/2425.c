#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int t, d;
} Banco;

int main()
{
    int c, n;

    scanf("%d %d", &c, &n);

    Banco *clientes = (Banco*)calloc(n, sizeof(Banco));

    for (int i = 0; i < n; i++)
        scanf("%d %d", &clientes[i].t, &clientes[i].d);

    int *caixas = (int*)calloc(c, sizeof(int));
    int cont = 0;

    for (int i = 0; i < n; i++)
    {
        int aux = 0;
        for (int j = 1; j < c; j++)
        {
            if (caixas[j] < caixas[aux])
                aux = j;
        }
        // Se a subtração da soma do tempo de espera menos o cliente atual superar 20, então incrementa +1
        if ((caixas[aux] - clientes[i].t) > 20)
        {
            cont++;
        }

        if (caixas[aux] < clientes[i].t)
        {
            caixas[aux] = clientes[i].t + clientes[i].d;
        }
        // agrega o tempo nescessario para atender o cliente e somando até entrar em uma condição
        else{
            // caixas[aux] = soma o tempo nescessario de cada cliente
            caixas[aux] += clientes[i].d;
        }
    }

    printf("%d\n", cont);

    free(clientes);
    free(caixas);

    return 0;
}
