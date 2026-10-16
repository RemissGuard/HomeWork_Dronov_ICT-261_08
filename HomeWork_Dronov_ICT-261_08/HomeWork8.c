#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");
    int n;
    double x, y;
    puts("¬ведите значение x");
    scanf("%lf", &x);
    y = sin(x);
    printf("sin(x)=%lf\n", y);
    puts("¬ведите значение n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)y += sin(y);// контрольный пример при x=1.57 и n=0 y=1
    printf("%lf", y);
}