// exercicios aula 27 de agosto exercicio 02
#include<stdio.h>
int main (void)
{
    int x, y;
    printf("Digite o valor de X :");
    scanf("%d",&x);
    printf("Digite o valor de Y :");
    scanf("%d",&y);

    if(x>=0 && y>=0 && (x*x)+ (y*y)<=1)
       printf("H pertence a figura!!!!");
    else
       printf("H nao pertence a figura !!!!");
return 0;
}

