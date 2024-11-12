/*Написать рекурсивную функцию возведения целого числа n в степень p.

int recurs_power(int n, int p)
Используя данную функцию, решить задачу.

Данные на входе: Два целых числа -100 >= n >= 100 и 0 >= p >= 100
Данные на выходе: Одно целое число n в степени p*/

#include <stdio.h>

int recurs_power(int n, int p)
{
    if (p > 0)
    {
        return n * recurs_power(n, --p);
    }
    else
    {
        return 1;
    }
}

int main(int argc, char const *argv[])
{
    int n, p, pow;
    scanf("%d %d", &n, &p);
    printf("%d", recurs_power(n, p)); 
    return 0;
}