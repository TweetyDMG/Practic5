#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");
    
    //Контрольный пример: х = 2.7, y = 1.7576
    double x;
    printf("Введите x: ");
    scanf("%lf", &x);
    double t = -6;
    double a = log(x);
    double b = sqrt(x * x + t * t);
    double y = pow(fabs(a - b * x), 1. / 5);

    printf("Результат: %.4lf", y);
}
