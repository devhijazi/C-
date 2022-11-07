#include<stdio.h>
/*
*Esta aula fala ponteiros e funções com ponteiros função troca de variaveis

*/
void troca (int *a,int *b){
int aux;
aux = *a;
*a = *b;
*b = aux;
}
void crescente_3(int *a,int *b,int *c){
if(*a > *b)troca(a,b);
 if(*a > *c)troca(a,c);
  if(*b > *c)troca(b,c);
}
int main (){
int x = 2 , y = 3, z = 1;
crescente_3(&x,&y,&z);
printf("%d %d %d",x,y,z);
return 0;
}
