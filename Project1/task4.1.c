#include <stdio.h>
#include <locale.h>

int tyjh()
{
    setlocale(LC_CTYPE, "RUS");

    float num1;
    printf("������� ������������ ����� � ������� � ��������� ������: ");
    scanf("%f", &num1);
    getchar();
    printf("������� ��������� ������������ ����� � ������� � ��������� ������: %.3f \n\n", num1);

    int num2;
    printf("������� ����� ���������� �����: ");
    scanf("%d", &num2);
    getchar();
    printf("������� ��������� ����� ���������� ����� : %d \n\n", num2);

    double num3;
    printf("������� ������������ ����� ������� �������� � ������� � ��������� ������: ");
    scanf("%lf", &num3);
    getchar();
    printf("������� ��������� ������������ ����� ������� �������� � ������� � ��������� ������: %.3lf \n\n", num3);

    char symbol;
    printf("������� ��������� ������: ");
    scanf("%c", &symbol);
    printf("������ ��������� ��������� ������: %c \n\n", symbol);
}