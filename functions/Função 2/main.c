#include <stdio.h>
/* Recebe um n�mero inteiro e o imprime na sa�da com uma mensagem */
void imprime_contador(int n)
{
printf("%d e contando...\n", n);
/* Imprime um contador inteiro descrescente de de 5 a 1 */
}
int main(void)
{
int i = 5;
imprime_contador(i);
i -= 1;
imprime_contador(i);
i -= 1;
imprime_contador(i);
i -= 1;
imprime_contador(i);
i -= 1;
imprime_contador(i);
return 0;
}
