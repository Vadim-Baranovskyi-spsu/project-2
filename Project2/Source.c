#include<stdio.h>
#include<conio.h>

#define _USE_MATH_DEFINES
#include<math.h>

#include<limits.h>
#include<float.h>

void main(void) {
	double x, y, z, b;

	printf("x = ");
	scanf_s("%lf", &x);

	printf("y = ");
	scanf_s("%lf", &y);

	z = sqrt(pow(sin(fabs(x)), 2) + y);
	b = exp(-2 * x) * (tan(z) + 2 * y);

	printf("b = %lf", b);	
	_getch();
}

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