#include <stdio.h>
#include <locale.h>

int tyjh()
{
    setlocale(LC_CTYPE, "RUS");

    float num1;
    printf("¬ведите вещественное число в формате с плавающей точкой: ");
    scanf("%f", &num1);
    getchar();
    printf("¬ведено следующее вещественное число в формате с плавающей точкой: %.3f \n\n", num1);

    int num2;
    printf("¬ведите целое дес€тичное число: ");
    scanf("%d", &num2);
    getchar();
    printf("¬ведено следующее целое дес€тичное число : %d \n\n", num2);

    double num3;
    printf("¬ведите вещественное число двойной точности в формате с плавающей точкой: ");
    scanf("%lf", &num3);
    getchar();
    printf("¬ведено следующее вещественное число двойной точности в формате с плавающей точкой: %.3lf \n\n", num3);

    char symbol;
    printf("¬ведите одиночный символ: ");
    scanf("%c", &symbol);
    printf("¬веден следующий одиночный символ: %c \n\n", symbol);
}