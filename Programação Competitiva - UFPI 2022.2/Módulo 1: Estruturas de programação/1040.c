#include <stdio.h>
#include <stdlib.h>

double calculo(double n1, double n2, double n3, double n4){
    return (n1 * 2 + n2 * 3 + n3 * 4 + n4) / 10;
}

void result(double auxiliary, double exame){
    double final_grade = (auxiliary + exame) / 2;
    printf("Media final: %.1f\n", final_grade);
    if(final_grade >= 5.0){
        printf("Aluno aprovado.\n");
    }else{
        printf("Aluno reprovado.\n");
    }
}

int main(int argc, char **argv)
{
    double n1, n2, n3, n4, n5, auxiliary, exame;

    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);


    auxiliary = calculo(n1, n2, n3, n4);
    printf("Media: %.1f\n", auxiliary);

    if(auxiliary >= 7.0){
        printf("Aluno aprovado.\n");
    }else if(auxiliary >= 5.0){
        printf("Aluno em exame.\n");
        scanf("%lf", &n5);

        exame = n5;
        if(exame + auxiliary / 2.0 > 5.0){
            printf("Aluno aprovado.\n");
        }else{
            printf("Aluno reprovado.\n");
        }
        result(auxiliary, exame);
    }else{
        printf("Aluno reprovado.\n");
    }

    return 0;
}
