#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void * a, const void * b) {
    const char ** pa = (const char **) a;
    const char ** pb = (const char **) b;
    return strcmp(*pa, *pb);
}

int main() {
    int n, k;
    char name[101];
    char ** p;
    scanf("%d %d", &n, &k);
    p = malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++) {
        scanf("%s", name);
        p[i] = strdup(name);
    }

    qsort(p, n, sizeof(char *), compare);

    printf("%s\n", p[k - 1]);

    for (int i = 0; i < n; i++) {
        free(p[i]);
    }
    free(p);

    return 0;
}
