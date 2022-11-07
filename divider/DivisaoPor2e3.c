#include<stdio.h>
/* Esse programa calcula o quociente de um inteiro por 2 e por 3*/
int main(void){
    int a, q1, q2;
    printf("Insira um inteiro:");
    scanf("%d", &a);
    q1 = a /2;
    q2 = a/3;
    printf("O quociente do inteiro por 2 corresponde a %d\n", q1);
    printf("O quociente do inteiro por 3 corresponde a %d", q2);
    return 0;
}
