#include<stdio.h>
/* Esse programa informa se um número é negativo, zero ou par*/
int main(void){
    int a;
    printf("Insira um inteiro:");
    scanf("%d", &a);
    if(a<0)
       printf("O inteiro eh negativo");
    if(a==0)
       printf("O inteiro eh zero");
    if(a>0)
        printf("O inteiro eh positivo");
    return 0;
}
