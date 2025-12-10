#include <stdio.h>
#include <conio.h>
#include <locale.h>
void main(void)
{
	int hours;
	setlocale(LC_ALL, "rus");
	printf("Введите время в часах: ");
	scanf_s("%d", &hours);
	switch (hours)
	{
	case 22: case 23: case 0:
	case 1: case 2: case 3:
		printf("\nночь");
		break;
	case 4: case 5: case 6:
	case 7: case 8: case 9:
		printf("\nутро");
		break;
	case 10: case 11: case 12: 
	case 13: case 14: case 15:
		printf("\nдень");
		break;
	case 16: case 17: case 18:
	case 19: case 20: case 21:
		printf("\nвечер");
		break;
	default:
		printf("\nОшибка ввода");
		break;
	}

	printf("\nДля выхода из программы нажмите любую клавишу...");
	_getch();
}

/*
#include <stdio.h>
#include <conio.h>
#include <locale.h>
void main(void)
{
	int mark;
	setlocale(LC_ALL, "rus");
	printf("Введите оценку : ");
	scanf_s("%d", &mark);
	switch (mark)
	{
	case 1:
		printf("\n%d-плохо", mark);
		break;
	case 2:
		printf("\n%d-неудовлетворительно", mark);
		break;
	case 3:
		printf("\n%d-удовлетворительно", mark);
		break;
	case 4:
		printf("\n%d-хорошо", mark);
		break;
	case 5:
		printf("\n%d-отлично", mark);
		break;
	default:
		printf("\nОшибка ввода");
		break;
	}
	printf("\nДля выхода из программы нажмите любую клавишу...");
	_getch();
}*/

























//#include<stdio.h>
//#include<conio.h>
//#define _USE_MATH_DEFINES
//#include<math.h>
//#include<limits.h>
//#include<float.h>
//void main(void) {
//	double x, y, z, b;
//
//	printf("x = ");
//	scanf_s("%lf", &x);
//
//	printf("y = ");
//	scanf_s("%lf", &y);
//
//	z = (exp(x)*sqrt(pow(x, 3) + y)) / (x - 1); 
//	b = (sqrt(y*log(x)) - z * pow(x, 2)) / (1 + pow(tan(pow(x, 2)), 2));
//
//	printf("%lf", b);
//	_getch();
//}

/*
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#define _USE_MATH_DEFINES
#include <math.h>

void main()
{
	setlocale(LC_ALL, "rus");
	double x, y;
	printf("Введите x = ");
	scanf_s("%lf", &x);

	y = cos(sin(3 * x) - 5) + 2;
	printf("Y(%lg) = %lg", x, y);
	_getch();
}
*/
/*
void main(void)
{
	setlocale(LC_ALL, "rus");
	double x, a, f;
	printf("x = ");
	scanf_s("%lf", &x);

	printf("a = ");
	scanf_s("%lf", &a);

	if (x <= 0)
		f = fabs(cbrt((2 * x + 5) / (pow(x, 3) + 2)));
	else
		if (0 < x && x <= a)

			f = (5 * x + pow(x, 2)) / pow(pow(x, 2) + 3, 3);
		else
			f = pow(cos(pow(x, 3) + sqrt(x)), 2);

	printf("F(%lg) = %lg", x, f);

	printf("\nДля выхода из программы нажмите любую клавишу...");
	_getch();
}
*//*
	//c52 #17
	double x, a, f;

	printf("x = ");
	scanf_s("%lf", &x);

	printf("a = ");
	scanf_s("%lf", &a);

	if (x <= 0)
		f = pow(x, 4) + 2 * pow(x, 3) - x;
	else
		if (0 < x && x <= a)
			f = 1.3 * sqrt(4 + pow(x, 2));
		else
			f = pow(fabs(x + 1), x);
	printf("F(%lg) = %lg", x, f);

	_getch();
	*/
	
/*

	double x, a, f;
	// c52 #1
	printf("x = ");
	scanf_s("%lf", &x);

	printf("a = ");
	scanf_s("%lf", &a);

	if (x <= 0)
		f = fabs(cbrt((2 * x + 5) / (pow(x, 3) + 2)));
	else
		if (0 < x && x <= a)

			f = (5 * x + pow(x, 2)) / pow(pow(x, 2) + 3, 3);
		else
			f = pow(cos(pow(x, 3) + sqrt(x)), 2);

	printf("F(%lg) = %lg", x, f);

	printf("\nДля выхода из программы нажмите любую клавишу...");
	_getch();
}
*/


//void main(void)
//{
//	setlocale(LC_ALL, "rus");
/*
//c22 #1

	int h, m, s;
	printf("Введите часы: ");
	scanf_s("%d", &h);

	printf("Введите минуты: ");
	scanf_s("%d", &m);
	s = h * 3600 + m * 60;
	printf("С начала суток прошло %d секунд", s);
*/
/*
	int a;
	printf("Введите a = ");
	scanf_s("%d", a);

	a = a * a; // a2
	a = a * a; // a4
	printf("a^4 = %d", a);
*/

//c30 #1
	/*double x, y;
	printf("Введите x = ");
	scanf_s("%lf", &x);

	y = cos(sin(3 * x) - 5) + 2;
	printf("Y(%lg) = %lg", x, y);
*/
/*

	int x, f;
	printf("x = ");
	scanf_s("%d", &x);
	f = (x <= 1 ? 1 : 2);
	printf("F(%d) = %d", x, f);*/

	/*double x, y, s, p;
	printf("x = ");
	scanf_s("%lf", &x);
	printf("y = ");
	scanf_s("%lf", &y);

	s = (x + y) / 2.0;
	p = 2 * x*y;

	if (x < y) {
		x = s;
		y = p;
		printf("X=%lg ;; Y=%lg", x, y);
	}
	else if (y < x) {
		y = s;
		x = p;
		printf("X=%lg ;; Y=%lg", x, y);
	}
	else
		printf("X равно Y");*/

	/*int a;
	printf("Введите число: ");
	scanf_s("%d", &a);

	while (a != 0) {
		if (a % 10 == 3) {
			printf("В число входит цифра 3");
			break;
		}
		a = a / 10;
	}


	if (a == 0)
		printf("В число НЕ входит цифра 3");*/
//	printf("\nДля выхода из программы нажмите любую клавишу...");
//	_getch();
//}