#include <stdio.h>
#include "sdt.h"

int main()
{
    int a, b;

    printf("\n¬ведите число a: ");
    scanf("%d", &a);
    printf("\n¬ведите число b: ");
    scanf("%d", &b);
    printf("%d + %d = %d", a, b, a+b);
    return 0;
}