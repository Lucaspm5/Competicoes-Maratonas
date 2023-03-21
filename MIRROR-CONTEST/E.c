#include <stdio.h>

int main()
{
    int n, k, e;
    scanf("%d %d %d", &n, &k, &e);

    int azulejos = n - k - e;
    int auxiliar = e;

    for (int i = k; i >= 1; i--)
    {
        if(azulejos >= i){
            azulejos -= i;
        }else if(azulejos > 0){
            auxiliar += i - azulejos;
            azulejos = 0;
        }else{
            auxiliar += i;
        }
    }

    printf("%d\n", auxiliar);
    return 0;
}