#include<stdio.h>
int main(void){
    /* Esse programa se um número é ímpar e positivo ou se é par e negativo*/
   int x;
   printf("Insira um numero inteiro:");
   scanf("%d", &x);
   if(x%2==1 && x>0 || x%2==0 && x<0)
    printf("O numero eh impar e positivo ou par e negativo");
   else
    printf("O numero n eh impar e positivo ou par e negativo");
    return 0;
}
