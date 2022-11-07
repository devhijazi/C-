#include<stdio.h>
/* Esse programa confere se um ponto pertence a um círculo*/
int main(void){
    int x, y;
    printf("Entre com a posicao do eixo x:");
    scanf("%d", &x);
    printf("Entre com a posicao do eixo y:");
    scanf("%d", &y);
    if(x >= 0 && y >= 0 && ((x*x) + (y*y) <= 1))
       printf("O ponto pertence a figura H ");
    else
        printf("O ponto n pertence a figura H");
    return 0 ;
}
