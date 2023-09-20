#include <stdio.h>
#include <locale.h>

int efge()
{
    setlocale(LC_CTYPE, "RUS");

    int L = 331.;
    int n = 2;

    printf(" %+03d\n%+03d\n%+07.2f\n", n, L, n/L);

}