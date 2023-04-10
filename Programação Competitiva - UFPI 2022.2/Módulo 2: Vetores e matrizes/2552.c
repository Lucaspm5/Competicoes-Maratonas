#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m, cont, i, j;
    int **v, **vg;
    while(scanf("%d %d", &n, &m) == 2) {
        v = (int **) malloc(n * sizeof(int *));
        vg = (int **) malloc(n * sizeof(int *));
        for (i = 0; i < n; i++) {
            v[i] = (int *) malloc(m * sizeof(int));
            vg[i] = (int *) malloc(m * sizeof(int));
        }

        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                scanf("%d", &v[i][j]);
            }
        }

        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                cont = 0;
                if(v[i][j] == 1) {
                    vg[i][j] = 9;
                } else {
                    if(i - 1 >= 0 && v[i - 1][j] == 1) {
                        cont++;
                    }

                    if (i + 1 < n && v[i + 1][j] == 1) {
                        cont++;
                    }

                    if (j - 1 >= 0 && v[i][j - 1] == 1) {
                        cont++;
                    }

                    if (j + 1 < m && v[i][j + 1] == 1) {
                        cont++;
                    }
                    vg[i][j] = cont;
                }
            }
        }

        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                printf("%d", vg[i][j]);
            }
            printf("\n");
        }

        //libera a memória alocada
        for (i = 0; i < n; i++) {
            free(v[i]);
            free(vg[i]);
        }
        free(v);
        free(vg);
    }
    return 0;
}
