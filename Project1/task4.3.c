#include <stdio.h>
#include <locale.h>

int mhrh()
{
    setlocale(LC_CTYPE, "RUS");

    int num1;
    printf("Введите целое трёхзначное число: ");
    scanf("%d", &num1);
    //Для примера: число 123
    int num2 = num1 % 10; // тут 3
    int num3 = num1 / 10; // было 123 отсалось 12
    int num4 = num3 % 10; // тут 2
    int num5 = num3 / 10; // было 12 осталось 1
   
    printf("Последняя цифра вашего числа: %d \n\nПервая цифра вашего числа: %d \n\nСумма цифр вашего числа: %d\n\nПеревёрнутое ваше число: %d%d%d\n", num2, num5, num2 + num4 + num5, num2, num4, num5);
    

   
}