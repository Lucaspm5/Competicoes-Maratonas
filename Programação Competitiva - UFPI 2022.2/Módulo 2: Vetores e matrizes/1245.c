#include <stdio.h>

int main() 
{
    int n, m, pares;
    char l;
    
    while(scanf("%d", &n) != EOF) 
    {
        int count[61][2] = {0};
        
        for (int i = 0; i < n; i++) 
        {
            scanf("%d %c", &m, &l);
            
            if (l == 'E')
                count[m][0]++;
            else
                count[m][1]++;
        }

        pares = 0;

        for (int i = 30; i <= 60; i++) 
        {
            if (count[i][0] < count[i][1])
                pares += count[i][0];
            else
                pares += count[i][1];
        }
        
        printf("%d\n", pares);
    }
    return 0;
}