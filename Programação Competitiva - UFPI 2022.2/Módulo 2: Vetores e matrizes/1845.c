#include <stdio.h>

int main() {
    char e;
    char y = '\0';

    while (scanf("%c", &e) != EOF) {
        if (e == '\n') {
            printf("\n");
            y = '\0';
            continue;
        }
        e = (e != 'b' && e != 'j' && e != 'p' && e != 's' && e != 'v' && e != 'x' && e != 'z') ? e : 'f';
        e = (e != 'B' && e != 'J' && e != 'P' && e != 'S' && e != 'V' && e != 'X' && e != 'Z') ? e : 'F';
        if ((e != 'f' && e != 'F') || (y != 'f' && y != 'F')) {
            printf("%c", e);
        }
        y = e;
    }

    return 0;
}
