#include <stdio.h>
/* Recebe dois n�meros reais e devolve a m�dia aritm�tica deles */
double media(double a, double b)
{
return (a + b) / 2;
}
/* Recebe tr�s n�meros reais e calcula
a m�dia aritm�tica para cada par */
int main(void)
{
double x, y, z;
printf("Informe tres valores:\n");
scanf("%lf%lf%lf", &x, &y, &z);
printf("Media de %g e %g eh %g\n", x, y, media(x, y));
printf("Media de %g e %g eh %g\n", x, z, media(x, z));
printf("Media de %g e %g eh %g\n", y, z, media(y, z));
return 0;
}
