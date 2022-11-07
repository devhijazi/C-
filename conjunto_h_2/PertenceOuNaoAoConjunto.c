#include <stdio.h>
int main (void){

    int x, y;
    printf("Entre com  o valor de X :");
    scanf("%d",&x);
    printf("Entre com o valor de Y :");
    scanf("%d",&y);

       if (( x <= 0 && (y + x*x + 2*x -3 <=0)) || (x >= 0 && (y + x*x -2*x -3 <=0 )))
          printf("|O ponto pertence ao conjunto H !!!!!!|");

    else
          printf("|O ponto nao pertence ao conjunto H!|");
    return 0;







}

