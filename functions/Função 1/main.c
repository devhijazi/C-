#include <stdio.h>
/* Recebe dois números reais e devolve a média aritmética deles */
double media(double a, double b)
{
return (a + b) / 2;
}
/* Recebe três números reais e calcula
a média aritmética para cada par */
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
