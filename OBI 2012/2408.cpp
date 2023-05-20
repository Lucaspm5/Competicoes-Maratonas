#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int a[3];
    int maior = 0, menor = INT_MAX;

    for (int i = 0;i < 3;i++)
        scanf("%d",&a[i]);

    for (int i = 0;i < 3;i++)
    {
        if (a[i] > maior) maior = a[i];
        if (a[i] < menor) menor = a[i];
    }

    for (int i = 0;i < 3;i++)
    {
        if(a[i] != maior && a[i] != menor) {printf("%d\n",a[i]);break; }
    }

    return 0;
}
