#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");

    printf("������, ���!\n");

    int num;
    printf("������� �����: ");
    scanf("%d", &num);
    printf("�� �����: %d\n", num);
}