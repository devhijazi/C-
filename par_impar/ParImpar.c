#include<stdio.h>
/* Esse programa informa se um numero � par ou �mpar*/
int main(void){
    int a;
    printf("Insira um inteiro:");
    scanf("%d", &a);
    if(a%2==0)
        printf("O inteiro eh par");
    else
        printf("O inteiro eh impar");
return 0;
}
