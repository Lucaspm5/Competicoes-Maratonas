#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pais {
    int p, b, o;
    char name[20];
};

int compare(const void * a, const void * b) {
    struct pais c1 = *((struct pais*)a);
    struct pais c2 = *((struct pais*)b);
    if(c1.o > c2.o) {
        return -1;
    } else if (c1.o == c2.o) {
        if (c1.p > c2.p)
            return -1;
        else if (c1.p == c2.p) {
            if (c1.b > c2.b) {
                return -1;
            } else if (c1.b == c2.b) {
                if (strcmp(c1.name, c2.name) < 0)
                    return -1;
            }
        }
    }
    return 1;
}

int main(int argc, char **argv)
{
    int n, o, p, b, i;
    char cName[20];
    struct pais c[1000];

    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%s %d %d %d", c[i].name, &c[i].o, &c[i].p, &c[i].b);
    }

    qsort(c, n, sizeof(struct pais), compare);

    for ( i = 0; i < n; i++) {
        printf("%s %d %d %d\n", c[i].name, c[i].o, c[i].p, c[i].b);
    }

    return 0;
}
