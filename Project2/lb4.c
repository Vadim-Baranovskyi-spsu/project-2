#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

void main(void)
{
	setlocale(LC_ALL, "rus");

	int i,n;
	double e = -1, sum = 0;
	while (!(e > 0 && e < 1)) {
		printf("Введите E = ");
		scanf_s("%lf", &e);
	}

	while (i / ((2 * i + 1) * (2 * (i + 1))) > e) {
		sum += i / ((2 * i + 1) * (2 * (i + 1)));
		++i;
	}

	printf("Сумма = %lf", sum);
	_getch();
}

/*void main(void)
{
	setlocale(LC_ALL, "rus");	
	int n, number;
	int count = 0;
	printf("N = ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("N%d = ", i+1);
		scanf_s("%d", &number);
		if (number == 10)
			++count;
	}
	printf("Количество 10 = %d", count);

	_getch();
}*/


//void main(void)
//{
//	setlocale(LC_ALL, "rus");
//	int n = -1;
//	int first = 1, flag = 0;
//	int prev;
//	while (1) {
//		scanf_s("%d", &n);
//		if (n == 0)
//			break;
//		if (first != 1 && n <= prev) {
//			flag = 0;
//		}
//
//		first = 0;
//		prev = n;
//
//	}
//	if (flag == 0)
//		printf("Последовательность -- возрастающая");
//	else
//		printf("Последовательность -- НЕвозрастающая");
//	
//	_getch();
//}

//void main(void)
//{
//	setlocale(LC_ALL, "rus");
//	double e = -1;
//	double s = 0, i = 1;
//	while (!(e > 0 && e < 1)) {
//		printf("Введите E = ");
//		scanf_s("%lf", &e);
//	}
//	while ((i / pow(10, i)) > e) {
//		s += i / pow(10, i);
//		printf("\n%.12lf", s);
//		++i;
//
//	}
//
//	printf("Сумма = %.12lf", s);
//	_getch();
//}


//void main(void)
//{
//	setlocale(LC_ALL, "rus");
//	int s = 0;
//	int n = -1, zeroes = 0;
//	while (zeroes < 2) {
//		scanf_s("%d", &n);
//		if (n == 0)
//			++zeroes;
//		s += n;
//	}
//	printf("Сумма = %d", s);
//	_getch();
//}

//void main(void)
//{
//	setlocale(LC_ALL, "rus");
//	int n=300;
//	while (n % 19 != 0) {
//		++n;
//	}
//	printf("%d", n);
//	_getch();
//}





/*void main(void)
{
	setlocale(LC_ALL, "rus");
	double y, a, b, h,t ;

	printf("Введите A =");
	scanf_s("%lf", &a);

	printf("Введите B =");
	scanf_s("%lf", &b);

	printf("Введите H =");
	scanf_s("%lf", &h);


	printf("\n\tТаблица значений\n");
	printf("\tx\t\tf");

	if (a > b) {
		t = a;
		a = b;
		b = t;
	}
	
	while (a <= b) {
		y = sin(a) - cos(a);
		printf("\n%10.3f\t%10.3f", a, y);
		a += h;
	}
	

	_getch();
}



/*void main(void)
{
	double x, y;
	setlocale(LC_ALL, "rus");

	printf("Введите X =");
	scanf_s("%lf", &x);

	printf("\n\tТаблица значений\n");
	printf("\tx\t\tf");
	while (x <= 12) {
		y = sin(x) / x;
		printf("\n%10.3f\t%10.3f", x, y);
		x += 2;
	}

	_getch();
}*/









/*void main(void)
{
	double s = 0;
	setlocale(LC_ALL, "rus");


	for (double i = 3; i <= 19; i+=2)
	{
		s += 2.0 / i;
	}
	printf("сумма = %.3lf", s);

	_getch();
}*/



/*void main(void)
{
	int n = 0, i = 0, s = 0, num =1;
	setlocale(LC_ALL, "rus");
	
	while (n < 1) {
		printf("Введите N = ");
		scanf_s("%d", &n);
	}
	while (i != n) {
		if (num % 2 == 0) {
			s += num;
			++i;
		}
		++num;
	}
	printf("Сумма первых %d четных натуральных чисел = %d", n, s);
	
	_getch();
}*/






















/*#include <stdio.h>
#include <conio.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>


void main(void)
{
	double x, xk, f, a, step;
	setlocale(LC_ALL, "rus");

	printf("Введите a = ");
	scanf_s("%lf", &a);

	printf("Введите начальное значение = ");
	scanf_s("%lf", &x);

	printf("Введите конечное значение = ");
	scanf_s("%lf", &xk);

	printf("Введите шаг = ");
	scanf_s("%lf", &step);



	printf("\n\tТаблица значений\n");
	printf("\tx\t\tf");
	while (x <= xk) {
		if (x <= 0) {
			f = 3 * pow(x, 5) + pow(tan(pow(x, 3) + 1), -1);
		}
		else
			if (0 < x && x <= a) {
				f = exp(x + 1) + sin(M_PI*x);
			}
			else {
				f = pow((pow(sin(x), 2) + 2), 1 / 5);
			}

		printf("\n%10.3f\t%10.3f", x, f);
		x += step;
	}
	_getch();
}*/



/*#include <stdio.h>
#include <conio.h>
#include <locale.h>

#include <math.h>


void main(void)
{
	double x, xk, f, a, step;
	setlocale(LC_ALL, "rus");

	printf("Введите a = ");
	scanf_s("%lf", &a);

	printf("Введите начальное значение = ");
	scanf_s("%lf", &x);

	printf("Введите конечное значение = ");
	scanf_s("%lf", &xk);

	printf("Введите шаг = ");
	scanf_s("%lf", &step);


	printf("\n\tТаблица значений\n");

	while (x <= xk) {
		if (x <= 0) {
			f = log(pow(x, 2) + 5);
		}
		else
			if (0 < x && x <= a) {
				f = sin(exp(x) + 2);
			}
			else {
				f = (sin(x + 3)) / (exp(2 * x) + cos(x + 1));
			}

		printf("\n%10.3f\t%10.3f", x, f);
		x += step;
	}
	_getch();
}*/