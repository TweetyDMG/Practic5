#include <stdio.h>
#include <math.h>
#include <locale.h>

int mai3232n()
{
    setlocale(LC_CTYPE, "RUS");

    double x, y;
    printf("¬ведите x: ");
    scanf("%lf", &x);
    printf("¬ведите y: ");
    scanf("%lf", &y);

    double res1 = sin(pow(x, 0.5 * y));
    double res2 = pow(exp(-0.2 * x * x), 1 / 3.);
    double result = res1 + res2;
    printf("–езультат: %.3lf", result);
}