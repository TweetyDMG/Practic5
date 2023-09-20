#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <locale.h>

int maftyi(void) 
{
	setlocale(LC_ALL, "RUS");
    int gr;
	float x;
	double res;
	puts("Введите градусы:");
	scanf("%d", &gr);
	x = gr * M_PI / 180;
	res = sin(x);
	printf("Синус %d градусов = %.7lf", gr,res);

}