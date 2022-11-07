#include<stdio.h>
/* Esse programa calcula o quadrado e o cubo de um inteiro*/
int main(void){
  int a, quadrado, cubo;
  printf("Insira um inteiro:");
  scanf("%d", &a);
  quadrado = a * a ;
  cubo = quadrado * a ;
  printf("O quadrado corresponde a %d\n", quadrado);
  printf("O cubo corresponde a %d", cubo);
  return 0 ;
}
