#include <stdio.h>
#include <math.h>
int main(void)
/* Esse programa verifica as raízes de uma equação de segundo grau*/
{
float a, b, c, delta;
printf("Entre com os valores a, b,c da eaquacao:");
scanf("%f%f%f", &a, &b, &c);
delta = b * b - 4 * a * c;
if (delta == 0)
printf("DUPLA\n%f\n", -b / (2*a));
else if (delta > 0) {
printf("REAIS DISTINTAS\n");
printf("%f\n", -b - sqrt(delta) / (2*a));
printf("%f\n", -b + sqrt(delta) / (2*a));
}
else {
delta = -delta;
printf("COMPLEXAS\n");
printf("Parte real: %f\n", -b / (2*a));
printf("Parte imaginária: %f\n", sqrt(delta) / (2*a));
}
return 0;
}
