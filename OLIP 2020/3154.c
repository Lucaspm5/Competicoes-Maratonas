#include <stdio.h>
#include <math.h>

int main() {
    int d, p;
    scanf("%d %d", &d, &p);
    double por = 1.0;
    for (int i = d - p + 1; i <= d; i++) {
        por *= (double)i / d;
    }
    double a = (1 - por) * 100;
    printf("%.2f\n", a);
    return 0;
}
