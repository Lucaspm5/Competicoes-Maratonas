#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b){
    int num1 = *(const int*)a;
    int num2 = *(const int*)b;

    if (num1 % 2 == 0 && num2 % 2 == 0) {
        return num1 - num2;
    }

    else if (num1 % 2 != 0 && num2 % 2 != 0) {
        return num2 - num1;
    }

    else if (num1 % 2 == 0) {
        return -1;
    } else {
        return 1;
    }
}

int main(int argc, char const **argv) {

    int N;
    scanf("%d", &N);

    int* numeros = (int*)malloc(N * sizeof(int));

    for (int i = 0; i < N; i++) {
        scanf("%d", &*(numeros + i));
    }

    qsort(numeros, N, sizeof(int), compare);

    for (int i = 0; i < N; i++) {
        printf("%d\n", *(numeros + i));
    }

    free(numeros);

    return 0;
}
