#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

#define N 6
void main(void) {
	setlocale(LC_ALL, "rus");
	int a[N];
	int flag = 1;
	srand(time(NULL));
	for (int i = 0; i < N; ++i) {
		a[i] = rand() % 100 - 50;
		printf("%4d", a[i]);
	}
	for (int i = 1; i < N; ++i) {
		if (i + 2 < N && a[i] <= a[i + 2]) {
			flag = 0;
			break;
		}
	}
	printf("\n\n");
	

	for (int i = 1; i < N; i += 2) {
		printf("%4d", a[i]);
	}
	if (flag)
		printf("\nУбывающая");
	else
		printf("\nНе убывающая");
	_getch();
}



//#define N 15
//void main(void) {
//	setlocale(LC_ALL, "rus");
//	int a[N], min, max;
//	float avg = 0, sum = 0;
//
//	srand(time(NULL));
//	for (int i = 0; i < N; ++i) {
//		a[i] = rand() % 100 - 50;
//		printf("%4d", a[i]);
//		sum += a[i];
//	}
//
//	min = max = a[0];
//
//
//	for (int i = 1; i < N; ++i) {
//		if (a[i] > max) max = a[i];
//		if (a[i] < min) min = a[i];
//	}
// 
//	avg = (sum - min - max) / (N - 2);
//	printf("\n\nБалл = %.3lf", avg);
//
//	_getch();
//}


//#define N 15
//void main(void) {
//	setlocale(LC_ALL, "rus");
//	int a[N];
//	int above = 0, below = 0;
//
//	srand(time(NULL));
//	for (int i = 0; i < N; ++i) {
//		a[i] = rand() % 100 - 50;
//		printf("%4d", a[i]);
//	}
//
//
//	for (int i = 0; i < N; ++i) {
//		if (a[i] > 0) ++above;
//		if (a[i] < 0) ++below;
//	}
//
//	if (below > above)
//		printf("\n\nБольше отрицательных чисел");
//	else if (below < above)
//		printf("\n\nположительных чисел");
//	else printf("\n\nПоложительных столько же сколько отрицательных");
//
//	_getch();
//}




//#define N 12
//void main(void) {
//	setlocale(LC_ALL, "rus");
//	int a[N], flag;
//
//	srand(time(NULL));
//	for (int i = 0; i < N; ++i) {
//		a[i] = rand() % 100 - 50;
//		printf("%4d", a[i]);
//	}
//	
//
//	flag = (a[0] >= 0) ? 1 : -1;
//	for (int i = 1; i < N; ++i) {
//		if (!(a[i] >= 0 && flag > 0 || a[i] < 0 && flag < 0)) {
//			printf("\n\nМассив неунимодальный");
//			flag = 0;
//			break;
//		}
//	}
//
//	if (flag)
//		printf("\n\nМассив унимодальный");
//
//	_getch();
//}
/*

#define N 8
void main(void) {
	setlocale(LC_ALL, "rus");
	int a[N], b[N],j=-1;
	int flag = 0;

	srand(time(NULL));
	for (int i = 0; i < N; ++i) {
		a[i] = rand() % 100 - 50;
		printf("%4d", a[i]);
		if (a[i] > 0) flag = 1;
	}

	if (flag) {
		for (int i = 0; i < N; ++i) {
				if (a[i] > 0) {
                  j++;
					b[j] = a[i];
					
				}
			}
		
		printf("\n\n");
		for (int i = 0; i < j; ++i)
			printf("%4d", b[i]);
	}
	else
		printf("\n\nТаких чисел нет");
	_getch();
}
*/
//#define N 8
//
//void main(void) {
//	setlocale(LC_ALL, "rus");
//	int a[N], k;
//	int c = 0;
//	
//	srand(time(NULL));
//	for (int i = 0; i < N; ++i) {
//		a[i] = rand() % 100 - 50;
//		printf("%4d", a[i]);
//	}
//
//	printf("\n\nВведите K = ");
//	scanf_s("%d", &k);
//
//	for (int i = 0; i < N; ++i)	{
//		if (a[i] == k) c++;
//	}
//	if (c)
//		printf("Количетсво элементов равное %d = %d", k, c);
//	else
//		printf("таких чисел нет");
//	_getch();
//	
//}
//
//
//
//
//












/*


//
//#define N 7
//void main(void) {
//	setlocale(LC_ALL, "rus");
//	int a[N], min, max;
//
//	srand(time(NULL));
//	for (int i = 0; i < N; ++i) {
//		a[i] = rand() % 100 - 50;
//		printf("%4d", a[i]);
//	}
//
//	min = max = a[0];
//	for (int i = 0; i < N; i++)
//	{
//		if (a[i] < min) min = a[i];
//		if (a[i] > max) max = a[i];
//	}
//	printf("\n\nРазность максимального (%d) и  минимального (%d) элементов = %d", max, min, max - min);
//	_getch();
//}

//#define N 7
//void main(void) {
//	setlocale(LC_ALL, "rus");
//	int a[N];
//	int flag = 0, sum = 0;
//
//	srand(time(NULL));
//	for (int i = 0; i < N; ++i) {
//		a[i] = rand() % 100 - 50;
//		printf("%4d", a[i]);
//		if (a[i] % 3 == 0) flag = 1;
//	}
//
//	if (flag) {
//		for (int i = 0; i < N; i++)
//			if ( a[i] % 3 == 0) sum += a[i];
//		printf("\n\nСумма чисел кратных 3 = %d", sum);
//	}
//	else
//		printf("\n\nТаких чисел нет");
//	_getch();
//}


//#define N 7
//void main(void) {
//	setlocale(LC_ALL, "rus");
//	int a[N];
//	int flag = 0, k = 0;
//
//	srand(time(NULL));
//	for (int i = 0; i < N; ++i) {
//		a[i] = rand() % 100 - 50;
//		printf("%4d", a[i]);
//		if (a[i] % 2 == 0) flag = 1;
//	}
//	if (flag) {
//		for (int i = 0; i < N; ++i)
//			if (a[i] % 2 == 0) ++k;
//		printf("\n\nКоличество четных элементов = %d", k);
//	}
//	else
//		printf("\n\nТаких элементов нет");
//
//	_getch();
//}
//








//#define N 7
//
//void main(void) {
//	setlocale(LC_ALL, "rus");
//	int a[N], max;
//
//	srand(time(NULL));
//	for (int i = 0; i < N; ++i) {
//		a[i] = rand() % 100 - 50;
//		printf("%4d", a[i]);
//	}
//
//	max = a[0];
//	for (int i = 1; i < N; ++i)
//		if (a[i] > max) max = a[i];
//
//	printf("\n\nМаксимум массива = %d", max);
//	_getch();
//}
//
//




//#define N 7
//
//void main(void) {
//	setlocale(LC_ALL, "rus");
//	int s = 0, flag = 0;
//
//	srand(time(NULL));
//	for (int i = 0; i < N; ++i) {
//		a[i] = rand() % 100 - 50;
//		printf("%4d", a[i]);
//		if (a[i] > 3) flag = 1;
//	}
//
//	if (flag) {
//		for (int i = 0; i < N; ++i)
//			if (a[i] > 3) s += a[i];
//
//		printf("\n\nСумма элементов = %d", s);
//	}
//	else
//		printf("\n\nТаких элементв нет");
//	_getch();
//}





//#define N 7
//
//void main(void) {
//	setlocale(LC_ALL, "rus");
//	int a[N];
//	int flag = 0, k = 0;
//
//	srand(time(NULL));
//	for (int i = 0; i < N; ++i) {
//		a[i] = rand() % 100 - 50;
//		printf("%4d", a[i]);
//		if (a[i] > 0) flag = 1;
//	}
//
//	if (flag) {
//		for (int i = 0; i < N; ++i)
//			if (a[i] > 0) ++k;
//
//		printf("\n\nПоложительных элементов = %d", k);
//	}
//	else
//		printf("\n\nПоложительных нет");
//	_getch();
//}


*/