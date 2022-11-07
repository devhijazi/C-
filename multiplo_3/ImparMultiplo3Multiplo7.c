#include<stdio.h>
int main(void){
    /* Esse programa se um número é ímpar, multiplo de 3 e multiplo de 7*/
   int x;
   printf("Insira um numero inteiro:");
   scanf("%d", &x);
   if(x%2==1 && x%3==0 && x%7==0)
    printf("O numero eh impar e multiplo de 3 e multiplo de 7");
   else
    printf("O numero n eh impar e multiplo de 3 e multiplo de 7");
    return 0;
}

