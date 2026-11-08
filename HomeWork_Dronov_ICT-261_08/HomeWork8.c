#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");
    int n;
    double x, y, z;
    z = x;
    puts("Введите значение x");
    scanf("%lf", &x);
    y = sin(x);
    printf("sin(x)=%lf\n", y);
    puts("Введите значение n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        z = sin(z);// контрольный пример при x=1.57 и n=0 y=1
        y += z;
    }
    printf("%lf", y);
}