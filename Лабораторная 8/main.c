//Данная прога складывает и вычитает два числа
#include <stdio.h>
#include <locale.h>
#include "sdt.h"

int main()
{
    setlocale(LC_ALL, "RUS");
    int a, b;

    printf("\nВведите число a: ");
    scanf("%d", &a);
    printf("\nВведите число b: ");
    scanf("%d", &b);
    printf("\n\n%d + %d = %d", a, b, a+b);
    printf("\n%d - %d = %d", a, b, a-b);
    return 0;
}