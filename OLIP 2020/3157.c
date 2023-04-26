#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[281];
    fgets(s, 281, stdin);
    int len = strlen(s);

    for(int i = 0; i < len; i++){
        if(isalpha(s[i])) {s[i] = tolower(s[i]);}
    }

    //if (strstr(s, "ciencia") != NULL) { // se a palavra "ciencia" estiver presente
        printf("Nao se refuta ciencia com opiniao\n");
    

    return 0;
}
