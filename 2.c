/*Составить рекурсивную функцию. Выведите все числа от A до B
включительно, в порядке возрастания, если A < B, или в порядке убывания в
противном случае.

Данные на входе: Два целых числа через пробел.
Данные на выходе: Последовательность целых чисел.*/

#include <stdio.h>

void printSequence(int a, int b)
{
    printf("%d ", a);
    if (a > b)
    {
        a--;
        printSequence(a, b);
    }
    else if (a < b)
    {
        a++;
        printSequence(a, b);
    }
}

int main(int argc, char const *argv[])
{
    int numberA, numberB;
    scanf("%d %d", &numberA, &numberB);

    printSequence(numberA, numberB);

    return 0;
}