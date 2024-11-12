/*Дана последовательность целых чисел через пробел, завершающаяся числом
0. Выведите все нечетные числа из этой последовательности, сохраняя их
порядок.

Данные на входе: Последовательность ненулевых целых чисел. В конце
число 0.
Данные на выходе: Введенная последовательность, кроме четных чисел
в том же порядке. Число 0 не выводить.*/

#include <stdio.h>

void printOdds(void);
int main()
{
    printOdds();
    return 0;
}

void printOdds(void)
{
int a;
    scanf("%d", &a);
    if (a == 0)
        return;
    if (a % 2 != 0)
         printf("%d ", a);
    printOdds();
}