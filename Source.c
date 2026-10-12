#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main()
{
    system("chcp 1251");
    task1();
}

int task0()
{
    char ch;
    int count;
    puts("¬ведите кооличество символов и символ");
    scanf("%d %c", &count, &ch);
    for (int start = 1; start <= count; start++)  putchar(ch);
    putchar('\n');
    putchar('+');
    for (int start = 1; start <= count; start++)  putchar(ch);
    putchar('+');

    putchar('\n');
    int hf = count / 2;
    for (int start = 1; start <= hf; start++) putchar(ch);
    for (int start = hf + 1; start <= count; start++) putchar('x');
    putchar('\n');

    for (int start = 1; start <= count; start++) {
        putchar(ch);
        putchar('!'); 
    }
}
int task1() {
    int m, n;
    int s = 0;
    int k = 1; 
    // n=3 m=8
    printf("¬ведите значение (m) и (n): ");
    scanf("%d %d", &m, &n);
    for (int i = n; i >= m; i--) {
        s += i;
        printf("выполнено %d раз\n", k++);
    }
    printf("результат %d", s);
    return 0;
}