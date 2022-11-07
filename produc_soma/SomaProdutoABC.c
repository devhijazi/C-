#include<stdio.h>
/* Esse programa calcula a soma e o produto de 3 inteiros*/
int main(void){
    int a, b, c, soma, produto;
    printf("Insira 3 inteiros:");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    soma = a + b + c;
    produto = a * b * c;
    printf("A soma dos inteiros corresponde a %d\n", soma);
    printf("O produto dos inteiros corresponde a %d\n", produto);
    return 0;
}
