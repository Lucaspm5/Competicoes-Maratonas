#include <stdio.h>

struct album {
    int lar, alt;
};

int main()
{
    struct album al, ph1, ph2;

    scanf("%d %d", &al.lar, &al.alt);
    scanf("%d %d", &ph1.lar, &ph1.alt);
    scanf("%d %d", &ph2.lar, &ph2.alt);

    if (ph1.lar + ph2.lar <= al.lar && ph1.alt <= al.alt && ph2.alt <= al.alt) printf("S\n");
    else if (ph1.alt + ph2.alt <= al.alt && ph1.lar <= al.lar && ph2.lar <= al.lar) printf("S\n");
    else if (ph1.alt + ph2.lar <= al.alt && ph2.alt <= al.lar && ph1.lar <= al.lar) printf("S\n");
    else if (ph1.lar + ph2.alt <= al.alt && ph1.alt <= al.lar && ph2.lar <= al.lar) printf("S\n");
    else if (ph1.lar + ph2.lar <= al.alt && ph1.alt <= al.lar && ph2.alt <= al.lar) printf("S\n");
    else if (ph1.alt + ph2.alt <= al.lar && ph1.lar <= al.alt && ph2.lar <= al.alt) printf("S\n");
    else if (ph1.alt + ph2.lar <= al.lar && ph2.alt <= al.alt && ph1.lar <= al.alt) printf("S\n");
    else if (ph1.lar + ph2.alt <= al.lar && ph1.alt <= al.alt && ph2.lar <= al.alt) printf("S\n");
    else
        printf("N\n");

    return 0;
}
