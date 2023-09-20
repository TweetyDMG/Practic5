#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");

    printf("Привет, мир!\n");

    int num;
    printf("Введите число: ");
    scanf("%d", &num);
    printf("Вы ввели: %d\n", num);
}