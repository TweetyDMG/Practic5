#include <stdio.h>
#include <locale.h>

int myjtyj()
{
    setlocale(LC_CTYPE, "RUS");

    double b = 23.54;
    
    int a = b;

    printf("����� �����: %d \n", a);

    printf("������� �����: %.2lf ", b-a);
}