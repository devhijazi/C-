#include<stdio.h>
/* Esse programa ordena três inteiros em ordem crescente*/
int main(void){
    int x, y, z, aux;
    printf("Insira 3 inteiros:");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    if(x>z){
        aux = x;
        x = z;
        z = aux;
    }
    if(x>y){
        aux = x;
        x = y;
        y = aux;
    }
    if(y>z){
        aux = y;
        y = z;
        z = aux;
    }
    printf("Os inteiros em ordem crescente correspondem a: %d %d %d", x, y, z);
    return 0;
}

