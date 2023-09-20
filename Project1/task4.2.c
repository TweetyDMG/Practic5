#include <stdio.h>
#include <locale.h>

int myjtyj()
{
    setlocale(LC_CTYPE, "RUS");

    double b = 23.54;
    
    int a = b;

    printf("Целая часть: %d \n", a);

    printf("Дробная часть: %.2lf ", b-a);
}