#include <stdio.h>
#include "sdt.h"

int main()
{
    int a, b;

    printf("\n������� ����� a: ");
    scanf("%d", &a);
    printf("\n������� ����� b: ");
    scanf("%d", &b);
    printf("%d + %d = %d", a, b, a+b);
    return 0;
}