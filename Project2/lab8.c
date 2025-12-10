#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

#define n 5
#define m 5


/*void main(void)
{
	int a[n][m];
	double avgm = 1, avgp = 1;
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			a[i][j] = 2 + rand() % 4;
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (a[i][j] > 0) {
				if (i == j) avgm *= a[i][j];
				if (j == n - i - 1) avgp *= a[i][j];
			}
		}
	}

	avgm = pow(avgm, 1.0 / n);
	avgp = pow(avgp, 1.0 / n);

	printf("\nCреднее геометрическое главной = %lf\nСреднее геометрическое побочной диагоналей =%lf", avgm, avgp);


	_getch();
}*/

/*void main(void)
{
	int a[n][m];
	int sum = 0;
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			a[i][j] = 2 + rand() % 4;
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {

			if (a[i][j] > 0 && a[i][j] % 2 == 0) {

				if (i == j) sum += a[i][j];
				if (j == n - i - 1) sum += a[i][j];
			}
		}
	}

	printf("\nОбщая сумма главной и побочной диагоналей = %d", sum);
	_getch();
}*/





/*void main(void)
{
	int arr[n][m];
	int a = -1, b = -1, sum = 0;
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			arr[i][j] = 2 + rand() % 4;
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}	

	while (a < 1 || a > n) {
		printf("Введите А = ");
		scanf_s("%d", &a);
	}
	a -= 1;
	while (b < 1 || b > m) {
		printf("Введите B = ");
		scanf_s("%d", &b);
	}
	b -= 1;

	for (int x = -1; x <= 1; ++x) {
		for (int y = -1; y <= 1; ++y) {
			if (x == 0 && y == 0) continue;
			if (a + x >= 0 && a + x < n && b + y >= 0 && b + y < m) {
				sum += arr[a + x][b + y];
			}
		}
	}
	printf("\nСумма = %d", sum);
	_getch();
}*/





void main(void)
{
	int a[n][m], flag;
	int k = 0;
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			a[i][j] = rand() % 100 - 50;
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (j< i) printf("\t%d", a[i][j]);
		}
		printf("\n");
	}
	_getch();
}




/*void main(void)
{
	int a[n][m], flag;
	int k = 0;
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			a[i][j] = 2 + rand() % 4;
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 0; i < n; ++i) {
		flag = 1;
		for (int j = 0; j < m; ++j) {
			if (a[i][j] < 4) { 
				flag = 0;
				break;
			}
		}
		if (flag) ++k;
	}
	if (k>0)
		printf("\nКоличество предметов, по которым были получены только оценки 5 и 4 = %d", k);
	else printf("\nНет таких предметов");
	_getch();
}*/


















/*void main(void)
{
	int a[n][m], k;
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			a[i][j] = rand() % 100 - 50;
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("A = ");
	scanf_s("%d", &k);
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (a[i][j] > 0)
				a[i][j] -= k;
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}

	_getch();
}*/

/*void main(void)
{
	int a[n][m];
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			a[i][j] = rand() % 100;
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			if (i == j) printf("%d\t", a[i][j]);
	_getch();
}*/

/*void main(void)
{
	int a[n][m];
	setlocale(LC_ALL, "rus");

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			a[i][j] = j+1;
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
	_getch();
}*/












/*void main(void)
{
	int a[n][m];
	int k = 0, c = 0, flagk = 0, flagc = 0;

	srand(time(NULL));
	setlocale(LC_ALL, "rus");

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			a[i][j] = rand() % 100;
			printf("%5d", a[i][j]);
			if (i == 1 && a[i][j] % 3 == 0) flagk = 1;
			if (j == 0 && a[i][j] % 2 == 0) flagc = 1;
		}
		printf("\n");
	}
	if (flagk) {
		for (int i = 0; i < n; ++i)
			if (a[1][i] % 3 == 0)
				++k;
		printf("\nколичество кратных 3 чисел 2-ой строки = %d", k);
	}
	else printf("\nНет кратн 3");

	if (flagc) {
		for (int i =0; i<n; ++i)
			if (a[i][0] % 2 == 0)
				++c;
		printf("\n количество чётных чисел первого столбца матрицы = %d", c);

	}
	else printf("\nНет четных");



	_getch();
}*/


/*void main(void)
{
	int a[n][m], x, y;
	srand(time(NULL));
	setlocale(LC_ALL, "rus");

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			a[i][j] = rand() % 100;
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
	x = y = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (abs(a[x][y]) > abs(a[i][j])) {
				x = i;
				y = j;
			}
		}
	}
	printf("\nМин. по модулю = %d", a[x][y]);
		for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (abs(a[i][j]) == abs(a[x][y])) {
				printf("\n в строке %d в столбце %d", i+1, j+1);

			}
		}
	}

	_getch();
}*/

/*void main(void)
{

	int a[n][n];
	double geom = 1;
	int k = 0, fg = 0, fc = 0;
	srand(time(NULL));
	setlocale(LC_ALL, "rus");

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			a[i][j] = rand() % 100;
			printf("%5d", a[i][j]);
			if (i == 2 && a[i][j] % 5 == 0) fc = 1;
			if (j == 1 && a[i][j] % 2 != 0) fg = 1;
		}
		printf("\n");
	}
	if (fg) {
		for (int i = 0; i < n; ++i) {
			if (a[i][1] % 2 != 0) {
				geom *= a[i][1];
				++k;
			}
		}
		geom = pow(geom, 1.0 / k);
		printf("\nСреднее геометрическое второго столбца= %lf", geom);
	}
	else printf("\nНет нечетных элементовn\n");
	if (fc) {
		k = 0;
		for (int i = 0; i < n; ++i)
			if (a[2][i] % 5 == 0) ++k;
		printf("\nКоличество кратных 5 элементов третьей строки = %d", k);
	}
	else printf("\nКратных 5 нет\n");
	_getch();
}
*/
/*void main(void)
{
	int a[n][m];
	int sum = 0, flag = 0;

	srand(time(NULL));
	setlocale(LC_ALL, "rus");

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j)	{
			a[i][j] = rand() % 100 - 50;
			printf("%5d", a[i][j]);
			if (a[i][j] > 0) flag = 1;
		}
		printf("\n");
	}

	if (flag) {
		for (int i = 0; i < n; ++i)
			for (int j = 0; j < m; ++j)
				if (a[i][j] > 0 && a[i][j] % 3 == 0)
					sum += a[i][j];
		printf("\nСумма положительных чисел кратных 3 = %d", sum);
	} else {
		printf("\nПоложительных чисел нет");
	}

	_getch();
}*/