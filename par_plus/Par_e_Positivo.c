#include<stdio.h>
int main(void){
    /* Esse programa se um número é par e positivo*/
   int x;
   printf("Insira um numero inteiro:");
   scanf("%d", &x);
   if(x%2==0 && x > 0)
    printf("O numero eh par e positivo");
   else
    printf("O numero n eh par e positivo");
   return 0;

}
