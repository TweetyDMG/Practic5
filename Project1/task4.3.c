#include <stdio.h>
#include <locale.h>

int mhrh()
{
    setlocale(LC_CTYPE, "RUS");

    int num1;
    printf("������� ����� ���������� �����: ");
    scanf("%d", &num1);
    //��� �������: ����� 123
    int num2 = num1 % 10; // ��� 3
    int num3 = num1 / 10; // ���� 123 �������� 12
    int num4 = num3 % 10; // ��� 2
    int num5 = num3 / 10; // ���� 12 �������� 1
   
    printf("��������� ����� ������ �����: %d \n\n������ ����� ������ �����: %d \n\n����� ���� ������ �����: %d\n\n����������� ���� �����: %d%d%d\n", num2, num5, num2 + num4 + num5, num2, num4, num5);
    

   
}