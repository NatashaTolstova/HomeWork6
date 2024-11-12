/*Дано натуральное число N. Посчитать количество «1» в двоичной записи
числа.

Данные на входе: Натуральное число
Данные на выходе: Целое число - количество единиц в двоичной записи
числа.*/

#include <stdio.h>

int getOnesQuantity(int num)
{
    int ones = 0;
    while (num > 0)
    {
        ones += num % 2;
        num /= 2;
    }
    return ones;
}

int main(int argc, char const *argv[])
{
    int number;
    scanf("%d", &number);
    printf("%d", getOnesQuantity(number));
    return 0;
}