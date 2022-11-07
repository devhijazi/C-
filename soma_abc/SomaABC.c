#include<stdio.h>
/* Esse programa calcula a soma de 3 inteiros*/
int main(void){
    int a, b, c, soma;
    printf("Insira 3 numeros inteiros:");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    soma = a + b + c;
    printf("A soma dos 3 inteiros corresponde a: %d", soma);
    return 0;
}
