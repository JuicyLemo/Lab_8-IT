//������ ����� ���������� � �������� ��� �����
#include <stdio.h>
#include <locale.h>
#include "sdt.h"

int main()
{
    setlocale(LC_ALL, "RUS");
    int a, b;

    printf("\n������� ����� a: ");
    scanf("%d", &a);
    printf("\n������� ����� b: ");
    scanf("%d", &b);
    printf("\n\n%d + %d = %d", a, b, a+b);
    printf("\n%d - %d = %d", a, b, a-b);
    return 0;
}