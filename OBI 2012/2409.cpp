#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int A, B, C, H, L;
    
    scanf("%d %d %d", &A, &B, &C);
    scanf("%d %d", &H, &L);

    if ((A <= H && B <= L) || (A <= L && B <= H) ||
        (A <= H && C <= L) || (A <= L && C <= H) ||
        (B <= H && C <= L) || (B <= L && C <= H)) {
        printf("S\n");
    }else{
        printf("N\n");
    }

    return 0;
}
