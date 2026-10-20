#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

double calculate(double x);

int main() {
    setlocale(LC_CTYPE, "RUS");
    t4();

    return 0;
}

int t4() {
    double x, a, b, f, h;
    a = -1.0;
    b = 2.0;
    printf("Введите шаг h: ");
    if (scanf("%lf", &h) != 1 || h <= 0) {
        puts("Ошибка ввода! Шаг должен быть положительным числом и не равняться 0!");
        return 1;
    }
    puts("\n   x          y");
    puts("-----------------------");
    for (x = a; x <= b + (h / 2.0); x += h) {
        f = calculate(x);

        printf("\n%6.2lf %10.4lf", x, f);
    }
    printf("\n");
    return 0;
}

double calculate(double x) {
    return x * x + 3 * x - 1;
}
