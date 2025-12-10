//#include <stdio.h>
//#include <conio.h>
//#include <locale.h>
//
//void setFirst(int *a)
//{
//	while (*a>9) {
//		*a /= 10;
//	}
//}
//
//void main(void)
//{
//	int a, b, c;
//	a = b = c = -1;
//	
//	setlocale(LC_ALL, "rus"); 
//	while (a < 0) {
//		printf("Введите 1 число = ");
//		scanf_s("%d", &a);
//	}
//	while (b < 0) {
//		printf("Введите 2 число = ");
//		scanf_s("%d", &b);
//	}
//	while (c < 0) {
//		printf("Введите 3 число = ");
//		scanf_s("%d", &c);
//	}
//
//	setFirst(&a);
//	setFirst(&b);
//	setFirst(&c);
//
//	printf("\n%d+%d+%d = %d", a, b, c, a + b + c);
//
//
//	_getch();
//}


#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int findGCD(int a, int b)
{
	int temp;
	while (b > 0) {
		temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
void main(void)
{
	int a, b, c, d;
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	a = rand() % 20;
	b = rand() % 20;
	c = rand() % 20;
	printf("a = %d\nb = %d\c = %d", a, b, c);
	/*printf("Введите число 1 = ");
	scanf_s("%d", &a);
	printf("Введите число 2 = ");
	scanf_s("%d", &b);

	printf("Введите число 3 = ");
	scanf_s("%d", &c);

	printf("Введите число 4 = ");
	scanf_s("%d", &d);*/


	printf("\nНОД(%d,%d,%d) = %d\nНОД(%d,%d,%d,%d) = %d", a,b,c, findGCD(a,findGCD(b,c)), a,b,c,d, findGCD(findGCD(a,b),findGCD(c,d)));
	_getch();
}



//#include <stdio.h>
//#include <conio.h>
//#include <locale.h>
//
//void changeSign(double *a)
//{
//	*a *= -1;
//}
//
//void main(void)
//{
//	double a, b, c;
//	setlocale(LC_ALL, "rus");
//	printf("Введите число 1 = ");
//	scanf_s("%lf", &a);
//	printf("Введите число 2 = ");
//	scanf_s("%lf", &b);
//	printf("Введите число 3 = ");
//	scanf_s("%lf", &c);
//
//	changeSign(&a);
//	changeSign(&b);
//	changeSign(&c);
//
//	printf("\n%.2lf\n%.2lf\n%.2lf", a, b, c);
//	_getch();
//}




//#include <stdio.h>
//#include <conio.h>
//#include <locale.h>
//
//int isPif(double a, double b, double c)
//{
//	if (a*a + b*b == c*c) return 1;
//	return 0;
//}
//	
//void main(void)
//{
//	double a, b, c;
//	a = b = c = -1;
//	setlocale(LC_ALL, "rus");
//	while (a <= 0) {
//		printf("Введите длину стороны 1 = ");
//		scanf_s("%lf", &a);
//	}
//	while (b <= 0) {
//		printf("Введите длину стороны 2 = ");
//		scanf_s("%lf", &b);
//	}
//	while (c <= 0) {
//		printf("Введите длину стороны 3 = ");
//		scanf_s("%lf", &c);
//	}
//
//	if (isPif(a, b, c) == 0 && isPif(b, c, a) == 0 && isPif(a, c, b) == 0)
//		printf("Треугольник НЕ прямоугольный");
//	else printf("Треугольник - прямоугольный");
//	_getch();
//}
//




//#include <stdio.h>
//#include <math.h>
//
//#define SCREENW 80
//#define SCREENH 24
//
//void plot(FILE *fout, double a, double b, double(*f)(double))
//{
//	char screen[SCREENW][SCREENH];
//	double x, y[SCREENW];
//	double ymin = 0, ymax = 0;
//	double hx, hy;
//	int i, j;
//	int xz, yz;
//
//	hx = (b - a) / (SCREENW - 1);
//
//	y[0] = f(a);
//	ymin = y[0];
//	ymax = y[0];
//
//	for (i = 1, x = a + hx; i < SCREENW; ++i, x += hx)
//	{
//		y[i] = f(x);
//
//		if (y[i] < ymin)
//			ymin = y[i];
//		if (y[i] > ymax)
//			ymax = y[i];
//	}
//
//	if (fabs(ymax - ymin) < 1e-10) {
//		ymax = ymin + 1.0;
//	}
//
//	hy = (ymax - ymin) / (SCREENH - 1);
//
//	if (hy == 0) hy = 1.0;
//
//	yz = (int)floor((ymax - 0) / hy + 0.5);
//	xz = (int)floor((0 - a) / hx + 0.5);
//
//	if (yz < 0) yz = 0;
//	if (yz >= SCREENH) yz = SCREENH - 1;
//	if (xz < 0) xz = 0;
//	if (xz >= SCREENW) xz = SCREENW - 1;
//
//	for (j = 0; j < SCREENH; ++j)
//	{
//		for (i = 0; i < SCREENW; ++i)
//		{
//			screen[i][j] = ' ';
//		}
//	}
//
//	for (j = 0; j < SCREENH; ++j)
//	{
//		for (i = 0; i < SCREENW; ++i)
//		{
//			if (j == yz && i == xz)
//				screen[i][j] = '+';
//			else if (j == yz)
//				screen[i][j] = '-';
//			else if (i == xz)
//				screen[i][j] = '|';
//		}
//	}
//
//	for (i = 0; i < SCREENW; ++i)
//	{
//		if (y[i] >= ymin && y[i] <= ymax) {
//			j = (int)floor((ymax - y[i]) / hy + 0.5);
//			if (j >= 0 && j < SCREENH) {
//				screen[i][j] = '.';
//			}
//		}
//	}
//
//	for (j = 0; j < SCREENH; ++j)
//	{
//		for (i = 0; i < SCREENW; ++i)
//			fputc(screen[i][j], fout);
//		fprintf(fout, "\n");
//	}
//}
//
//
//double f1(double x)
//{
//    return pow(sin(2.0*x) ,3);
//}
//
//double f2(double x)
//{
//	return 3.0 * log( pow( sin(x) + x*x ,  1.0/5.0)  ) ;
//}
//
//
//int main(void)
//{
//	plot(stdout, -5, 5, f1);
//	printf("\n\n\n\n\n\n\n");
//	plot(stdout, 1, 10, f2);
//    return 0;
//}
