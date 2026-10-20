#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

double f1(double x);
double f2(double x);

int main() {
	setlocale(LC_CTYPE, "RUS");
	z1();
	return 0;
}

int z1() {
	double x;
	printf("Введите x: ");
	scanf("%lf", &x);
	printf("x = %.0lf\n", x);
	printf("f1(x) = %.4lf, f2(x) = %.4lf\n", f1(x), f2(x));
	printf("Произведение: %.4lf Разность квадратов: %.4lf Удвоенная сумма:%.4lf", f1(x) * f2(x), (f1(x) - f2(x)) * (f1(x) + f2(x)), (f1(x) + f2(x)) * 2);

}

double f1(double x) {
	double y;
	y = (x <= 3) ? (x * x - 3 * x + 9) : (1.0 / (x * x * x + 3));
	return y;
}

double f2(double x) {
	double y;
	y = x * exp(sin(x * x));
	return y;
}
