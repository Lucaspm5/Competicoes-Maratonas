#include <stdio.h>
#include <string.h>

char engracada(const char* const risada);

int main() {

    char risada[50];
    int resul;

    scanf("%s",risada);

    resul = engracada(risada);

    if(resul == 1){
        printf("S\n");
    } else{
        printf("N\n");
    }
    
    return 0;
}

char engracada(const char* const risada){
    int i, j = 0, tam;
    char  y[50];

    for( i = 0; risada[i] != '\0'; i++){
        if(risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] == 'u'){
            y[j] = risada[i];
            j++;
        }
    }

    y[j] = '\0';
    tam = strlen(y);

    for(i = 0, j = tam - 1; i < tam; i++, j--){
        if(y[i] != y[j]){
            return -1;
        }
    }

    return 1;


}
